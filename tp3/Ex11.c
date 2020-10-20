#include <stdio.h>

int main()

{

 /* Déclarations */

 int mat[10][10]; /* tableau à 2 dimensions */

 int vert[100];    /* tableau à 1 dimension  */

 int lin, col, i, j;

 /* Saisie des données */

 printf("Nombre de lignes : ");

 scanf("%d", &lin );

 printf("Nombre de colonnes : ");

 scanf("%d", &col );

 for (i=0; i<lin; i++)

    for (j=0; j<col; j++)

        {

         printf("Element[%d][%d] : ",i,j);

         scanf("%d", &mat[i][j]);

        }

 /* Affichage du tableau 2-dim */

 printf("Matrice :\n");

 for (i=0; i<lin; i++)

    {

     for (j=0; j<col; j++)

          printf("%7d", mat[i][j]);

     printf("\n");

    }

 /* Transfert des éléments ligne par ligne */

 for (i=0; i<lin; i++)

      for (j=0; j<col; j++)

             vert[i*col+j] = mat[i][j];

  /* Affichage du tableau 1-dim */

 printf("Resultat: ");

 for (i=0; i<lin*col; i++)

     printf("%d ", vert[i]);

 printf("\n");

 return 0;

}