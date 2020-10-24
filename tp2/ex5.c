#include <stdio.h>

int main()
{
 int n;   /* nombre de lignes        */
 int line;     /* compteur des lignes     */
 int nbesp;   /* nombre d'espaces        */
 int col;     /* compteur des caractères */

 do
   {
    printf("Entrer le Nombre de lignes : ");
    scanf("%d", &n);
   }
 while (n<1 || n>20);
 
 for (line=0 ; line<n ; line++)
   {
    /*nbesp = n-line-1;
    for (col=0 ; col<nbesp ; col++)
        putchar(' ');*/
    for (col=0 ; col<2*line+1  ; col++)
        putchar('*');
    putchar('\n');
   }
  return 0;
}