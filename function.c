#include <stdio.h>
#include <string.h>
/* Partie 1 : Comparer des mots */

/* Création de l'ihm */
int wordIhm(){
    char premierMot[50], deuxiemeMot[50];

    printf("Entrer votre premier mot \n");
    scanf("%s", premierMot);

    printf("\nEntrer votre deuxième mot \n");
    scanf("%s", deuxiemeMot);

    if (wordIsEqual(premierMot, deuxiemeMot) == 1)
        printf("\nLes deux mots sont équivalents\n");
    else
        printf("\nLes deux mots ne correspondent pas\n");

    return 0;
}

/* Compare 2 mots */
int wordIsEqual(char *premierMot, char *deuxiemeMot){
    if(strcmp(premierMot,deuxiemeMot) == 0)
        return 1;
    else
        return 0;
}

/* Tri 2 mots */


