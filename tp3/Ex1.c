#include <stdio.h>

int main()

{

 /* Déclarations */

 /* Les tableaux et leurs dimensions */

 int tab[50], tpos[50], tneg[50];

 int n, npos = 0, nneg = 0;

 int i;

 /* Saisie taille tableau */
do
{
 printf("Enter table dimension: ");

 scanf("%d", &n );
}
while(n <=0);


 for (i=0; i<n; i++)

    {

     printf("Element %d : ", i);

     scanf("%d", &tab[i]);

    }

 /* Affichage tableau */

 printf("Table :\n");

 for (i=0; i<n; i++)

     printf("%d ", tab[i]);

 printf("\n");

 /* Transfert des données */

 for (i=0; i<n; i++)

      { if (tab[i]>0) {

                     tpos[npos]=tab[i];

                     npos++;

                    }

        if (tab[i]<0) {

                     tneg[nneg]=tab[i];

                     nneg++;

                    }

      }

  /* Edition du résultat */
 printf("TPOS table :\n");

 for (i=0; i< npos; i++)

     printf("%d ", tpos[i]);

 printf("\n");

 printf("TNEG table3:\n");

 for (i=0; i<nneg; i++)

     printf("%d ", tneg[i]);

 printf("\n");

 return 0;

}