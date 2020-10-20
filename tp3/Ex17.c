#include <stdio.h>

int main()
{
 /* Déclarations */
 int pas[14][14]; /* matrice résultat  */
 int n, i, j;      /* indices courants  */
 /* Saisie des données */
 do {
      printf("Saisir le degre n du triangle : ");
     scanf("%d", &n);
 } while (n>8||n<0);
 /* Construction des lignes 0 à n du triangle: */
 /* Calcul des composantes du triangle jusqu'à */
 /* la diagonale principale. */
 for (i=0; i<=n; i++)
     {
      pas[i][i]=1;
      pas[i][0]=1;
      for (j=1; j<i; j++)
            pas[i][j] = pas[i-1][j] + pas[i-1][j-1];
     }
  /* Edition du résultat */
 printf("Triangle de pascal %d :\n", n);
 for (i=0; i<=n; i++)
    {
     printf(" n=%2d", i); // Affichage du degré
     for (j=0; j<=i; j++)
          //if (pas[i][j])
         printf("%5d", pas[i][j]);
     printf("\n");
    }
 return 0;
}