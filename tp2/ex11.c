#include<stdio.h>

int main(){
    char x;
    while((x = getchar())!= '#'){
        if (x == '0') putchar('1');
        else if (x=='1') putchar('0');
        else putchar(x);
    }
    return 0;
}