#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()

{

 /* Déclarations */

int *tab, n;  /* chaîne donnée    */

int i, j;      /* indices courants */
int pal;  /* indicateur logique:          */

            /* vrai si CH est un palindrome */

 

  /* Saisie des données */

 printf("Entrez la taille du tableau :\n");

 scanf("%d", &n);

 /* Placer P2 sur la dernière lettre de la chaîne */
tab=(int *)malloc(n * sizeof(int));

if(!tab) exit(-1);

for (i=0; i<n; i++) scanf("%d", tab+i);
/*for(j=0; tab[j]; j++) 
   printf("%d", j) ;*/


pal=1;

for (i=0, j = n-1; pal && i<j ; i++,j--)

      if (tab[i] != tab[j])
          pal=0;
if (pal) printf("Palindrome");
else printf("Non !");

free(tab);
 return 0;

}