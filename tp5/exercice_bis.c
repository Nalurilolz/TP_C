#include<stdio.h>
#include<stdlib.h>
#include"exercice.h"

int main(){
    ETUDIANT etd;

etd.moyenne = 0;

printf("\n saisir nom etudiant ");
scanf("%s", &etd.inf.nom);

printf("\n Saisir ce ");
scanf("%d", &etd.inf.ce);

printf("\n saisir date de naissance ");
scanf("%d%d%d", &etd.inf.dateNaiss.jour,
&etd.inf.dateNaiss.mois, &etd.inf.dateNaiss.annee);

printf("\n Saisir le nombre de notes ");
scanf("%d", &etd.inf.nbNotes);

etd.inf.notes=(float*) malloc (etd.inf.nbNotes * sizeof(float));
if(! etd.inf.notes) exit(-1);
printf("\n saisir les notes \n");
for(int i=0; i<etd.inf.nbNotes; i++){
scanf("%f", &etd.inf.notes[i]);
etd.moyenne += etd.inf.notes[i];
}
printf("\n-------------------------------\n");

printf("%s", etd.inf.nom);


printf("\n le ce est %d", etd.inf.ce);
printf("\n la date de naissance est: %d/%d/%d", etd.inf.dateNaiss.jour,
etd.inf.dateNaiss.mois, etd.inf.dateNaiss.annee);
printf("\n le nombre de notes est %d", etd.inf.nbNotes);
printf("\n les notes sont :\n");
for(int i=0; i<etd.inf.nbNotes; i++)
printf("%5.2f \t", etd.inf.notes[i]);

printf("\n la moyenne est %5.2f ", etd.moyenne/etd.inf.nbNotes);
    return 0;
}