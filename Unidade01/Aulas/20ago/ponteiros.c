#include <stdio.h>


int main(void){
    int a = 10
    int *b,*c,*d;
    b = &a
        printf("%p %d",b,a);
        printf("%d %d",*b,a);
        printf("%p %p",b,&a);
    c = b
    d = &a
        printf(" %p %p %p %p",&a,b,c,d);
        printf(" %d %d %d %d",a,*b,*c,*d);
    *b = 30
        printf(" %d %d %d %d",a,*b,*c,*d);
}
