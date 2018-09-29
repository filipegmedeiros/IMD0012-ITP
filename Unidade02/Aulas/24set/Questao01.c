#include <stdio.h>

long int f(long int n){
    if (n == 0)
        return 0;

    if(n % 2 == 0) //se resto é zero
        return 0 + f(n/2) * 10;

    return 1 + f(n/2) * 10;
}

int main(){
    printf("%d\n", f(35000) );
    printf("%d\n", f(128) );
}
