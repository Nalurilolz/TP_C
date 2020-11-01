#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

    int *tab1, *tab2,*tab3, n1, n2;  /* chaîne donnée    */
    int i;

    printf("Entrez la taille du tableau 1 :\n");
    scanf("%d", &n1);
    printf("Entrez la taille du tableau 2 :\n");
    scanf("%d", &n2);
    tab1 =(int *)malloc(n1 * sizeof(int));
    tab2 =(int *)malloc(n2 * sizeof(int));
    tab3 =(int *)malloc((n1 + n2) * sizeof(int));

    if(!tab1) exit(-1);
    for (i=0; i<n1; i++) scanf("%d", tab1 + i);
    if(!tab2) exit(-2);
    for (i=0; i<n2; i++) scanf("%d", tab2 + i);
    if(!tab3) exit(-3);
    
    for (i=0; i<(n1+n2); i++) 
    {
        if (i < n1) *(tab3+i) = *(tab1+i);
        else *(tab3+i) = *(tab2+(i-n1));
    }

    for (i=0; i<(n1+n2); i++) 
    {
        printf("%2d", *(tab3+i));
    }
    return 0;
}