#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int x, y;
    printf("Entrez x puis y: ");
    scanf("%d%d", &x, &y);
    printf("Quotient= %d, reste = %d, quotient rationnel = %f", x/y, x%y, (float) x/y);
}