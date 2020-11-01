#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
// compression d'un tableau sans utiliser un tableau d'aide
int tab[50],n,i,j;
printf("\n saisir le nbre d 'elements ");
scanf("%d", &n);
printf("\n remplissage \n ");
for(i=0; i<n;i++)
scanf("%d", &tab[i]);
printf("\n affichage \n ");
for(i=0; i<n;i++)
printf("%d \t", tab[i]);
for(i=0; i<n-1; )
{
if(tab[i]==tab[i+1])
{
for(j=i; j<n-1; j++)
tab[j]=tab[j+1];
n--;
}
else i++;
}
printf("\n affichage \n ");
for(i=0; i<n;i++)
printf("%d \t", tab[i]);
getch();
};