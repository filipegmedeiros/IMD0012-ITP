/*
   1 – Levantar o Pincel
   2 – Baixar o Pincel
   3 – Virar para a esquerda
   4 – Virar para a direita
   5 – Mover-se n espaços para frente */

/************************************************************
  Turtle Graphics: turtle.c (final rev.)

  Use 50x50 array initialized to zeros to simulate a floor.
  Turtle starts at 0,0 with pen up.  When pen is down, set
  array elements to 1.  Display asterisk wherever there is
  a 1, when program is complete.

  Command list:
  1     Pen up
  2     Pen down
  3     Turn right
  4     Turn left
  5,10  Move forward 10 spaces
  6     Print the array
  9     End of data (sentinel)
 ************************************************************/

#include <stdio.h>
#define ARRAYMAX 50    /* length and width of grid */
#define COMMANDMAX 20  /* max amount of program commands */
#define COMMAND_UP 1
#define COMMAND_DOWN 2
#define COMMAND_RIGHT 3
#define COMMAND_LEFT 4
#define COMMAND_MOVE 5
#define COMMAND_PRINT 6
#define COMMAND_END 9

enum Direction {NORTH, EAST, SOUTH, WEST};
enum Status {UP, DOWN};

int readProg(int prog[][2], const int max);
int getCommand(int buffer[]);
void doCommand(const int command, const int arg, int floor[][ARRAYMAX]);
void printFloor(const int floor[][ARRAYMAX]);

enum Direction dir = NORTH;  /* direction turtle is facing */
enum Status stat = UP;       /* status of the pen          */
int turtlePosX = 0;          /* x-coord of turtle          */
int turtlePosY = 0;          /* y-coord of turtle          */

int main(void)
{
    int floor[ARRAYMAX][ARRAYMAX] = {{0}, {0}};  /* grid to print */
    int prog[COMMANDMAX][2] = {{0}, {0}};        /* instructions  */
    int commands = 0;        /* number of commands in the program */
    int i = 0;

    commands = readProg(prog, COMMANDMAX);

    while (i < commands) {   /* process the instructions */
        doCommand(prog[i][0], prog[i][1], floor);
        i++;
    }

    return 0;
}

/* Read the entire set of instructions into array prog[][] */
int readProg(int prog[][2], const int max)
{
    int buffer[2];
    int i = 0;

    while (i < max && getCommand(buffer)) {  /* process until sentinel */
        prog[i][0] = buffer[0];  /* transfer valid command into program */
        prog[i][1] = buffer[1];  /* transfer argument into program      */
        i++;
    }

    return i;  /* amount of commands, minus sentinel */
}

/* Read a single instruction from input */
int getCommand(int buffer[])
{
    scanf("%d,%d", &buffer[0], &buffer[1]);  /* read command to buffer */

    if (buffer[0] != COMMAND_MOVE)  /* set argument to 0 for any */
        buffer[1] = 0;               /* command except move */

    if (buffer[0] == COMMAND_END)
        return 0;
    else
        return 1;
}

/* Process a command onto the floor array */
void doCommand(const int command, const int arg, int floor[][ARRAYMAX])
{
    int i;

    switch(command) {
        case COMMAND_UP:
            stat = UP;
            break;
        case COMMAND_DOWN:
            stat = DOWN;
            floor[turtlePosX][turtlePosY] = 1;  /* activate current loc */
            break;
        case COMMAND_RIGHT:
            if (dir == WEST)
                dir = NORTH;
            else
                dir += 1;
            break;
        case COMMAND_LEFT:
            if (dir == NORTH)
                dir = WEST;
            else
                dir -= 1;
            break;
        case COMMAND_MOVE:
            if (dir == NORTH)
                for (i = 1; i <= arg; i++) {
                    turtlePosY++;
                    if (stat == DOWN)
                        floor[turtlePosX][turtlePosY] = 1;
                }
            else if (dir == EAST)
                for (i = 1; i <= arg; i++) {
                    turtlePosX++;
                    if (stat == DOWN)
                        floor[turtlePosX][turtlePosY] = 1;
                }
            else if (dir == SOUTH)
                for (i = 1; i <= arg; i++) {
                    turtlePosY--;
                    if (stat == DOWN)
                        floor[turtlePosX][turtlePosY] = 1;
                }
            else if (dir == WEST)
                for (i = 1; i <= arg; i++) {
                    turtlePosX--;
                    if (stat == DOWN)
                        floor[turtlePosX][turtlePosY] = 1;
                }
            break;
        case COMMAND_PRINT:
            printFloor(floor);
            break;
        default:
            break;
    }
}

/* Print the entire array to output.  0,0 will be lower left corner */
void printFloor(const int floor[][ARRAYMAX])
{
    int i,j;

    printf("\n");
    for (i = ARRAYMAX - 1; i >= 0; i--) {     /* in each row...     */
        for (j = 0; j <= ARRAYMAX - 1; j++) {  /* for each column... */
            if (floor[j][i] == 1)        /* print '*' if activated... */
                printf("*");
            else                         /* and a blank if not        */
                printf(" ");
        }
        printf("\n");  /* print a newline after the last column */
    }
}
