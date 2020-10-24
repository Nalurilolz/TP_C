#include<stdio.h>
#include<conio.h>

void main(){
    char x, preced = ' ';
    int nb = 0, lg = 0;
    while((x = getchar())!='#')
    {
        if (x==' ' || x==':' || x==';' || x==',')
        {
            if (preced != ' ' && preced != ',' && preced != ';' && preced != ':')
                if(lg==2) nb++;
            lg = 0;
        }
        else lg++;
        preced = x;
    }
    if(lg==4) nb++;
    printf("%d", nb);
}