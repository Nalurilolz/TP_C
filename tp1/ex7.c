#include <stdio.h>

#include <math.h>

void main()
{
    long A = 15;
    char B = 'A'; /* code ASCII : 65 */
    short C = 10; 

    printf("%d\n", C+3);
    printf("%c\n", B+1);
    printf("%c\n", C + B );
    printf("%c\n", 3 * C + 2 * B);
    printf("%c\n", 2 * B + (A + 10) / C);
    printf("%f\n", 2 * B + (A + 10.0) / C);
}