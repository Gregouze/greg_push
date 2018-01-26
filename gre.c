#include <stdio.h>

#include <stdlib.h>

#include <time.h>

 

int main(int argc, char** argv)

{

	int Nombre_choisi=0,  Nombre_aleatoire=0, Compteur=0, rejouer=1, Max=0;

    int niveau=0;

    const int Min=1;

 

    printf("==============================  BIENVENUE  =============================\n\n \t\tRegle du jeu : Trouvez le Nombre Mystere !");

 

    do

    {

 

    printf("\n\n Choisissez un niveau : \n\n 1: Simple - de 1 a 100 \n 2: Moyen - de 1 a 1000 \n 3: Difficile - de 1 a 10 000\n\n");

    scanf("%d", &niveau);

 

    if (niveau==1)

    Max=100;

    else if(niveau==2)

    Max=1000;

    else

    Max=10000;

 

    srand(time(NULL));

    Nombre_aleatoire=(rand()%(Max-Min+1))+Min;

 

    printf("Choisissez un nombre entre 1 et %d \n\n",Max);

 

    do

    {

        Compteur++;

    scanf("%d", &Nombre_choisi);

    if(Nombre_choisi>Nombre_aleatoire)

        printf("Nombre trop grand \n\n");

    else if (Nombre_aleatoire>Nombre_choisi)

        printf("Nombre trop petit \n\n");

    else

        printf("GG! en %d coups !\n", Compteur);

    }while(Nombre_aleatoire != Nombre_choisi);

 

        printf("Voulez vous rejouer ? \n 1: Oui\n 0: Non \n\n\n");

        scanf("%d", &rejouer);

}while(rejouer==1);
return 0;

}
