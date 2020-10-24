#include <stdio.h>

#include <math.h>

 main()

{

   int A, B, C;

   float P;

   printf("Introduisez les valeurs pour A, B et C : ");

   scanf("%d %d %d", &A, &B, &C);


   P=((float)A+B+C)/2;

   printf("Surface du triangle S = %f\n",sqrt(P*(P-A)*(P-B)*(P-C)));

    return 0;

}