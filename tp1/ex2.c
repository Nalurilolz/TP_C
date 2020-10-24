#include<stdio.h>
#include<conio.h>

void main(){
    int A, B, C, permut;
    printf("Saisir 3 entiers: ");
    scanf("%d%d%d",&A,&B,&C);
    permut = B;
    B = A;
    A = C;
    C = permut;
    printf("%4d%4d%4d", A,B,C);
    getch();
}