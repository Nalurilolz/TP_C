#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

    int *tab, n;  /* chaîne donnée    */
    int i, verif = 1, stock=0;
    do{
    printf("Entrez la taille du tableau :\n");
    scanf("%d", &n);  
    }
    while(n <10 || n > 20);
    
    tab =(int *)malloc(n * sizeof(int));
    if(!tab) exit(-1);
    
    printf("*********Remplissage***********\n");

    for (i=0; i<n; i++) scanf("%d", tab + i);

    for (i=1; i<n ; i++){
        if (*(tab + i) == *(tab + i - 1) + 1) verif++;
      else {
          if (stock < verif) stock = verif;
          verif = 1;}
      }
    if (stock < verif) stock = verif;
    printf("*********Affichage***********\n");
    for (i=0; i<n; i++) printf("%2d", *(tab + i));
    printf("\n La taille de la plus longue suite est : %d", stock);
    free(tab);
    return 0; // 1 2 3 4 61 33 34 3 21 2 51 6 5 3 13 14 15 16 17 10 
}