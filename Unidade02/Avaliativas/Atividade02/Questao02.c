/*
 *                             IMD0012 - T03
 *                       ------------------------- 
 *                      LISTA 05 - EXERCICIO 02
 *                 -------------------------------------
 *                  https://github.com/filipegmedeiros
 *             ---------------------------------------------
 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int isNumber(char*);
void toLower(char*, char*);
void toLowerUper(char*, char*);

int main(int argc, char const *argv[]){
    
    char* buff = malloc(1);
    char* test = "AdCs zXc";

    printf("0, %d\n", isNumber("abdc"));
    printf("1, %d\n", isNumber("123"));
    printf("1, %d\n", isNumber("1.23"));
    toLower(test, buff);
    printf("adcs zxc, %s\n", buff);
    toLowerUper(test, buff);
    printf("Adcs Zxc, %s\n", buff);

    return 0;
}

int isNumber(char* str){
    int i;
    for(i = 0; i < strlen(str); ++i)
        if(isdigit(str[i]) || str[i] == '.') continue; else break;
    if (i == strlen(str)) return 1;
    return 0;
}

void toLower(char* src, char* dest){
    dest = realloc(dest, strlen(src) * sizeof(char));
    int i;
    for (i = 0; i < strlen(src); ++i)
        dest[i] = tolower(src[i]);
    dest[strlen(src)] = '\0';
}

void toLowerUper(char* src, char* dest){
    dest = realloc(dest, strlen(src) * sizeof(char));
    int i = 0;
    dest[i] = toupper(src[i]);
    for (i = 0; i < strlen(src); ++i){
        if (src[i++] == ' '){
            dest[i - 1] = ' ';
            dest[i] = toupper(src[i]);
        } else
            dest[i] = tolower(src[i]);
    }
    dest[strlen(src)] = '\0';
}