/*
 *                             IMD0012 - T03
 *                       ------------------------- 
 *                      LISTA 05 - EXERCICIO 04
 *                 -------------------------------------
 *                  https://github.com/filipegmedeiros
 *             ---------------------------------------------
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void sortString(char**, char**);
void subString(char*, int, int, char*);
void swap(char*, char*);

int main(int argc, char const *argv[]){
    
    char* test = "asd cxz asd";
    char* buff = malloc(2);
    char* words[] = {
        "H Ok", 
        "B Ok", 
        "F Ok", 
        "I Ok", 
        "G Ok", 
        "D Ok", 
        "C Ok", 
        "E Ok", 
        "J Ok", 
        "A Ok"
    };
    char** sorted;

    subString(test, 2, 5, buff);
    printf("d cx, %s\n", buff);
    sortString(words, sorted);
    for (int i = 0; i < sizeof(words) / sizeof(char*); ++i)
        printf("%s\n", words[i]);

    return 0;
}

void sortString(char** strings, char** sorted){
    sorted = malloc(sizeof(strings));

    for (int i = 0; i <= sizeof(strings); ++i){
        bool swapped = false;
        for (int j = 0; j <= sizeof(strings); ++j){
            if (strcmp(strings[j], strings[j+1]) > 0){
                char* temp = strings[j];
                strings[j] = strings[j+1];
                strings[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void subString(char* src, int start, int end, char* substring){
    int j = 0;
    substring = realloc(substring, (end - start + 1) * sizeof(char));
    for (int i = start; i <= end; ++i){
        substring[j] = src[i];
        j++;
    }
    substring[j] = '\0';
}

