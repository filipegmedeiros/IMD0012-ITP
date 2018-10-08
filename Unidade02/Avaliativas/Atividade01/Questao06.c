/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 04 - EXERCICIO 06
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/

#include <stdlib.h>
#include <stdio.h>


enum bool_ {false, true};
typedef int bool;

typedef struct {
    int row;
    int col;
} position_t;

typedef struct {
    int size;
    bool solution_exists;
    int n_queens_called;
    int recursion_cnt;
    int backtrack_cnt;
    position_t *position;
} board_t, *board_ptr;

#define BUFFSIZE 8

board_ptr new_board(int board_size);
void delete_board(board_ptr board);
bool n_queens(const board_ptr board, int n_queen);
bool is_attacked(const board_ptr board, int row, int col);
void print_board(const board_ptr board);

int main(int argc, char const *argv[]) {
    board_ptr board = NULL;
    int board_size = 0;
    char buff[BUFFSIZE];

    if(fgets(buff, BUFFSIZE, stdin) == NULL) {
        return 1;
    }
    board_size = strtol(buff, NULL, 10);

    board = new_board(board_size);

    n_queens(board, 0);
    if(board->solution_exists) {
    } else {
        printf("SEM SOLUCAO2\n");
    }

    print_board(board);

    printf(
            "n-queens: %d  recursion: %d  backtrack: %d\n\n",
            board->n_queens_called,
            board->recursion_cnt,
            board->backtrack_cnt
          );

    delete_board(board);

    return 0;
}

board_ptr new_board(int board_size) {
    board_ptr board;

    board = (board_ptr) malloc(sizeof(board_t));
    if(board == NULL) {
        return NULL;
    }

    board->size = board_size;
    board->solution_exists = false;
    board->n_queens_called = 0;
    board->recursion_cnt = 0;
    board->backtrack_cnt = 0;

    board->position = (position_t *)malloc(board_size * sizeof(position_t));
    if(board->position == NULL) {
        free(board);
        return NULL;
    }

    for(int i = 0; i < board_size; i++) {
        board->position[i].row = i;
        board->position[i].col = 0;
    }

    return board;
}

void delete_board(board_ptr board) {
    if(board->position != NULL) {
        free(board->position);
        board->position = NULL;
    }

    if (board != NULL) {
        free(board);
        board = NULL;
    }
}

bool n_queens(const board_ptr board, int n_queen) {
    int row = n_queen;
    board->n_queens_called++;

    if(n_queen >= board->size) {
        return true;
    }

    for(int col = 0; col < board->size; col++) {
        if(is_attacked(board, row, col) == true) {
            continue;
        } else {
            board->position[row].col = col;
            board->recursion_cnt++;
            if(n_queens(board, n_queen + 1) == true) {
                board->solution_exists = true;
                return true;
            } else {
                board->position[row].row = n_queen;
                board->position[row].col = 0;
            }
        }
    }

    board->backtrack_cnt++;
    board->position[row].row = n_queen;
    board->position[row].col = 0;
    board->solution_exists = false;
    return false;
}

bool is_attacked(const board_ptr board, int row, int col) {
    for(int i = 0; i < row; i++) {
        if(col == board->position[i].col) {
            return true;
        }

        if((board->position[i].row + board->position[i].col) == (row + col)) {
            return true;
        }

        if((board->position[i].row - board->position[i].col) == (row - col)) {
            return true;
        }
    }

    return false;
}

void print_board(const board_ptr board) {
    for(int row = 0; row < board->size; row++) {
        for(int col = 0; col < board->size; col++) {
            if(board->position[row].row == row && board->position[row].col == col ) {
                printf("[♕] ");
            } else {
                printf("[ ] ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
