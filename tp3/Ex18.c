void main()
{
int tab[50],n,i,j, nbre,indice;
printf("\n saisir nbre elements ");
scanf("%d", &n);

printf("\n remplissage \n");
for(i=0; i<n; i++)
scanf("%d",&tab[i]);
printf("\n affichage \n");
for(i=0; i<n; i++)
printf("%d \t", tab[i]);
// doubler les valeurs
for(i=0; i<n;i+=2)
{
for(j=n;j>i+1 ;j--)
tab[j]=tab[j-1];
tab[i+1]=tab[i];
n++;
}
getch();
}