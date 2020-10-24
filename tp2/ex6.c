#include <stdio.h>

#include <math.h>

int main()

{

 /* calcul des solutions réelles d'une équation du second degré */

 int a, b, c;

 double d; /* discriminant */

 printf("calcul des solutions réelles d'une équation du second \n");

 printf("degré de la forme   ax^2 + bx + c = 0 \n\n");

 printf("Introduisez les valeurs pour a, b, et c : ");

 scanf("%i %i %i", &a, &b, &c);

 

 /* calcul du discriminant b^2-4ac */

 d = pow(b,2) - 4.0*a*c;

 

 /* distinction des différents cas */

 if (a==0 && b==0 && c==0) /* 0x = 0 */

                                         printf("Tout réel est une solution de cette équation.\n");

 else if (a==0 && b==0)  /* contradiction: c # 0 et c = 0 */ 

                                         printf("cette équation ne possède pas de solutions.\n");

 else if (a==0) /* bx + c = 0 */

    {

     printf("La solution de cette équation du premier degré est :\n");

     printf(" x = %.4f\n", (double)c/b);

    }

 else if (d<0)  /* b^2-4ac < 0 */

     printf("cette équation n'a pas de solutions réelles.\n");

 else if (d==0) /* b^2-4ac = 0 */

    {

     printf("cette équation a une seule solution réelle :\n");

     printf(" x =  %.4f\n", (double)-b/(2*a));

    }

 else /* b^2-4ac > 0 */

    {

     printf("Les solutions réelles de cette équation sont :\n");

     printf(" x1 = %.4f\n", (-b+sqrt(d))/(2*a));

     printf(" x2 = %.4f\n", (-b-sqrt(d))/(2*a));

    }

  return 0;

}