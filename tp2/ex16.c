//Ex 16
#include<stdio.h>
#include<conio.h>

void main(){
    char x, preced = ' ';
    int nb = 0, nb_vol = 0;
    while((x = getchar())!='#') // Fin de saisie
    {
       if ((x==' ') || (x==':') || (x==';') || (x==',')){ 
            if (preced != ' ' && preced != ',' && preced != ';' && preced != ':'){
               if (nb_vol >4) nb++;
            nb_vol = 0;
            }
        }
        if ((x=='a') || (x=='e') || (x=='i') || (x=='o') ||(x=='u') || (x=='y'))
           {
               nb_vol++;
            }
        preced = x;
    }
   if(nb_vol>4) nb++;
   printf("%d", nb);

}