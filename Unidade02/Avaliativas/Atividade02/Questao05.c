/*
 *                             IMD0012 - T03
 *                       ------------------------- 
 *                      LISTA 05 - EXERCICIO 05
 *                 -------------------------------------
 *                  https://github.com/filipegmedeiros
 *             ---------------------------------------------
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int  prefix(const char *src, const char *starting) {
    return strncmp(src, starting, strlen(src)) == 0;
}

int endsWith(const char *src, const char *ending) {
  int src_len = strlen(src);
  int ending_len = strlen(ending);

  return
    (src_len >= ending_len) &&
    (0 == strcmp(src + (src_len),ending));
}
