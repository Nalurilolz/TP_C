#include <stdio.h>
main()
{
 /* Déclarations */
 int A[50][50];  /* matrice initiale */
 int B[50][50];  /* matrice résultat */
 int N, M;       /* dimensions des matrices */
 int I, J;       /* indices courants */

 /* Saisie des données */
 printf("Nombre de lignes   (max.50) : ");
 scanf("%d", &N );
 printf("Nombre de colonnes (max.50) : ");
 scanf("%d", &M );
 for (I=0; I<N; I++)
    for (J=0; J<M; J++)
        {
         printf("Elément[%d][%d] : ",I,J);
         scanf("%d", &A[I][J]);
        }
 /* Affichage de la matrice */
 printf("Matrice donnée :\n");
 for (I=0; I<N; I++)
    {
     for (J=0; J<M; J++)
          printf("%7d", A[I][J]);
     printf("\n");
    }
 /* Affectation de la matrice transposée à B */
 for (I=0; I<N; I++)
     for (J=0; J<M; J++)
          B[J][I]=A[I][J];
  /* Edition du résultat */
 /* Attention: maintenant le rôle de N et M est inversé. */
  printf("Matrice résultat :\n");
 for (I=0; I<M; I++)
    {
     for (J=0; J<N; J++)
          printf("%7d", B[I][J]);
     printf("\n");
    }
 return 0;
} 