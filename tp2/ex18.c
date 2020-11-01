#include<stdio.h>
#include<conio.h>

void main(){
    char x, preced = ' ';
    int nb = 0, test = 0;
    while((x = getchar())!='#')
    {
        if (x==' ' || x==':' || x==';' || x==',')
        {
            if (preced != ' ' && preced != ',' && preced != ';' && preced != ':')
                if(lg==1) nb++;
            test = 0;
        }
        preced = x;
    }
    if(lg==4) nb++;
    printf("%d", nb);
}