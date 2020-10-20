#include <stdio.h>

int main()

{

 /* Déclarations */

 int tab[50][50]; /* tableau donné    */

 int lin, col;      /* dimensions       */

 int i, j;  

 long sum;  

 /* Saisie des données */

 printf("Nombre de lignes: ");

 scanf("%d", &lin );

 printf("Nombre de colonnes: ");

 scanf("%d", &col );

 for (i=0; i<lin; i++)

    for (j=0; j<col; j++)

        {

         printf("Element[%d][%d] : ", i, j);

         scanf("%d", &tab[i][j]);

        }

 /* Affichage du tableau */

 printf("Matrice :\n");

 for (i=0; i<lin; i++)

    {

     for (j=0; j<col; j++)

          printf("%7d", tab[i][j]);

     printf("\n");

    }

 /* Calcul et affichage de la somme des lignes */

 for (i=0; i<lin; i++)

     {

      for (sum=0, j=0; j<col; j++)

             sum += tab[i][j];

      printf("Somme - ligne %d : %d\n",i, sum);

     }

 /* Calcul et affichage de la somme des colonnes */

 for (j=0; j<col; j++)

     {

      for (sum=0, i=0; i<lin; i++)

             sum += tab[i][j];

      printf("Somme - colonne %d : %ld\n",j,sum);

     }

  return 0;

}