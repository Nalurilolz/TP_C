struct date
{
int jour ;
int mois ;
int annee ;
} ;
typedef struct date DATE ;

struct info
{
int ce ; // numéro carte d’étudiant
char nom[20] ;
DATE dateNaiss;
int nbNotes ;
float*notes;
} ;
typedef struct info INFO ;

struct etudiant
{
INFO inf ;
float moyenne;
} ;
typedef struct etudiant ETUDIANT ;