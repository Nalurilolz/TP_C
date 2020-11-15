#include<stdio.h>

#include<stdlib.h>

#include"exercice3.h"

int main() {
  ETUDIANT * tab, etd_tmp;
  int n, max;
  printf("\n saisir le nombre d'etudiants ");
  scanf("%d", & n);
  tab = (ETUDIANT * ) malloc(n * sizeof(ETUDIANT));
  if (!tab) exit(-1);
  for (int i = 0; i < n; i++) {
    (tab+i)-> moyenne = 0;
    printf("\n saisir les infos de l'etudiant %d ", i + 1);
    printf("\n saisir nom etudiant ");
    scanf("%s", & (tab + i)-> inf.nom);

    printf("\n Saisir ce ");
    scanf("%d", & (tab + i) -> inf.ce);

    printf("\n saisir date de naissance ");
    scanf("%d%d%d", & (tab + i) -> inf.dateNaiss.jour, &
      (tab + i) -> inf.dateNaiss.mois, & (tab + i) -> inf.dateNaiss.annee);

    printf("\n Saisir le nombre de notes ");
    scanf("%d", & (tab + i) -> inf.nbNotes);

    (tab + i) -> inf.notes = (float * ) malloc((tab + i) -> inf.nbNotes * sizeof(float));
    if (!(tab + i) -> inf.notes) exit(-1);
    printf("\n saisir les notes \n");
    for (int j = 0; j < (tab + i) -> inf.nbNotes; j++) {
      scanf("%f", & (tab + i) -> inf.notes[j]);
      (tab + i) -> moyenne += (tab + i) -> inf.notes[j];
    }
    (tab + i) -> moyenne = ((tab + i) -> moyenne / (tab + i) -> inf.nbNotes);
  }
  printf("\n-------------------------------\n");
 for (int i=0; i<n; i++)
     {
      /* Recherche du maximum à droite de A[I] */
      max= i;
      for (int j=i+1; j<n; j++)
          if ((tab +j) -> moyenne > (tab + max) -> moyenne) max= j;
      etd_tmp = *(tab + i);
      *(tab + i) = *(tab + max);
      *(tab + max)= etd_tmp;
     }

  for (int i = 0; i < n; i++) {
    printf("\n %s", (tab + i) -> inf.nom);
    printf("\n le ce est %d", (tab + i) -> inf.ce);
    printf("\n la date de naissance est: %d/%d/%d", (tab + i) -> inf.dateNaiss.jour,
      (tab + i) ->inf.dateNaiss.mois, (tab + i) -> inf.dateNaiss.annee);
    printf("\n le nombre de notes est %d", (tab + i) -> inf.nbNotes);
    printf("\n les notes sont :\n");
    for (int j = 0; j < (tab + i) -> inf.nbNotes; j++)
      printf("%5.2f \t", (tab + i) -> inf.notes[j]);

    printf("\n la moyenne est %5.2f ", (tab + i) -> moyenne);

  }
  return 0;
}