#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define n sizeof(array)/sizeof(char *)

/* Partie 1 : Comparer des mots */

/* Création de l'ihm */
int sortAnArrTest(){
    char array[] = {
            "testa",
            "testc",
            "testb",
            "testm",
            "testae",
    };

    sortAnArr(array);
}

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

/* Tri 2 mots
int sortWord(char *premierMot, char *deuxiemeMot)
{
    int taille1, taille2, tailleMin, i;


    taille1 = strlen(premierMot);
    taille2 = strlen(deuxiemeMot);

    if(taille1 < taille2)
        tailleMin = taille1;
    else
        tailleMin = taille2;

    for(i = 0; i<=tailleMin;i++) {
        if (premierMot[i] < deuxiemeMot[i]) {
            printf('%c', deuxiemeMot);
            printf('%c', premierMot);

        } else if (premierMot[i] > deuxiemeMot[i]) {
            printf('%c', premierMot);
            printf('%c', deuxiemeMot);

        } else{
            printf('%c', deuxiemeMot);
            printf('%c', premierMot);
        }
    }

    return 0;
}*/

static int compare (void * a,void * b)
{
    return strcmp (*(char **) a, *(char **) b);
}

int sortMyArr() {
    char premierMot[50], deuxiemeMot[50];

    printf("Entrer votre premier mot \n");
    scanf("%s", premierMot);

    printf("\nEntrer votre deuxième mot \n");
    scanf("%s", deuxiemeMot);

    char * array[] = {
            premierMot,
            deuxiemeMot,
    };

    int i;
    qsort (array, n, sizeof (char *), compare);
    for (i = 0; i < n; i++) {
        printf ("%s.\n", array[i]);
    }
    return 0;
}

int sortAnArr(char *array[]){
    int i;
    qsort (array, n, sizeof (char *), compare);
    for (i = 0; i < n; i++) {
        printf ("%s.\n", array[i]);
    }
    return 0;
}



