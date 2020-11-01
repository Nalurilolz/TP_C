#include<stdio.h>
#include<conio.h>

void main(){
    int tab[5] = {3,5,55,4,8}, test, i, ind;

    scanf("%d", &test);
    for(i=0; i<5;i++){
        if (tab[i] == test){
            ind = i;
            break;
        }
        else
        {ind = -1;}

    }
    if (ind == -1) printf("No!");
    else printf("%d", i);


}
