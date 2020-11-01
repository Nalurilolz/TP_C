#include <stdio.h>

int main()
{
 /* Déclarations */
 int matA[50][50]; /* matrice donnée   */
 int matB[50][50]; /* matrice donnée   */
 int matRes[50][50]; /* matrice résultat */
 int n, m, p;   /* dimensions des matrices */
 int i, j, k;   /* indices courants */

 /* Saisie des données */
 printf("*** matrice matA ***\n");
 printf("nombre de lignes de   matA : ");
 scanf("%d", &n );
 printf("nombre de colonnes de matA : ");
 scanf("%d", &m );
 for (i=0; i<n; i++)
    for (j=0; j<m; j++)
        {
         printf("Element[%d][%d] : ",i,j);
         scanf("%d", &matA[i][j]);
        }
 printf("*** matrice matB ***\n");
 printf("nombre de lignes de matB : %d\n", m);
 printf("nombre de colonnes de matB : ");
 scanf("%d", &p );
 for (i=0; i<m; i++)
    for (j=0; j<p; j++)
        {
         printf("Element[%d][%d] : ",i,j);
         scanf("%d", &matB[i][j]);
        }
 /* Affichage des matrices */
 printf("matrice matA :\n");
 for (i=0; i<n; i++)
    {
     for (j=0; j<m; j++)
          printf("%7d", matA[i][j]);
     printf("\n");
    }
 printf("matrice matB :\n");
 for (i=0; i<m; i++)
    {
     for (j=0; j<p; j++)
          printf("%7d", matB[i][j]);
     printf("\n");
    }
 /* Affectation du résultat de la multiplication à matRes */
 (n, m) (m, p) = (n, p)
 for (i=0; i<n; i++)
     for (j=0; j<p; j++)
         {
          matRes[i][j]=0;
          for (k=0; k<m; k++)
               matRes[i][j] += matA[i][k]*matB[k][j];
         }
  /* Edition du résultat */
 printf("matrice résultat matRes :\n");
 for (i=0; i<n; i++)
    {
     for (j=0; j<p; j++)
          printf("%7d", matRes[i][j]);
     printf("\n");
    }
 return 0;
}