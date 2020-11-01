#include <stdio.h>

void main()
 {
 int A = 1;
 int B = 2;
 int C = 3;
 int *P1, *P2;

 P1=&A; // P1 pointe sur A
 P2=&C; // P2 pointe sur C
 *P1=(*P2)++; // A = 3 puis C += 1 = 4
P1=P2; // P1 pointe désormais sur la même variable que P2 donc C
P2=&B; // P2 pointe vers B
*P1-=*P2; // C = 4 - 2 (B) = 2
++*P2; // B = 3
*P1*=*P2; // C = 2 * 3 = 6
A=++*P2**P1; //A = ++ 3 = 4 * 6 = 24
P1=&A;
 }