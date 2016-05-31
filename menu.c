#include <stdio.h>


int myMenu(void)
{
    int choixMenu;

    printf("---Menu---\n\n");
    printf("1.Comparaison de 2 mots\n");
    printf("2.Comparaison et tri\n");
    printf("3.Rechercher un mot dans le dictionnaire\n");
    printf("4.Ajouter un mot dans le dictionnaire\n\n");
    printf("Votre choix?\n");
    scanf("%d", &choixMenu);
    return choixMenu;
}
int afficheMenu(void)
{
    switch (myMenu())
    {
        case 1:
            printf("\nComparaison de 2 mots :\n\n");
            wordIhm();
            break;
        case 2:
            printf("Comparaison et tri\n\n");
            sortMyArr();
        case 3:
            printf("Rechercher un mot dans le dictionnaire\n\n");
            compareWords();
            break;
        case 4:
            printf("Ajouter un mot dans le dictionnaire\n\n");
            addWord();
            break;
        case 5:
            printf("Quitter");
            return 1;
        default:
            printf("Quitter");
            return 1;
    }
    return 0;
}