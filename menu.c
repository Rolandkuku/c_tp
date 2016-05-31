#include <stdio.h>
#include <stdlib.h>

int myMenu(void)
{
    int choixMenu;

    printf("---Menu---\n\n");
    printf("1.Comparaison de 2 mots\n");
    printf("2.Comparaison et tri\n");
    printf("3.Rechercher un mot dans le dictionnaire\n");
    printf("4.Ajouter un mot dans le dictionnaire\n\n\n");
    printf("\nVotre choix?\n\n");
    scanf("%d", &choixMenu);
    return choixMenu;
}
int afficheMenu(void)
{
    switch (myMenu())
    {
        case 1:
            printf("Comparaison de 2 mots");
            break;
        case 2:
            printf("Comparaison et tri");
            break;
        case 3:
            printf("Rechercher un mot dans le dictionnaire");
            break;
        case 4:
            printf("Ajouter un mot dans le dictionnaire");
            break;
        default:
            printf("Aucun choix");
            break;
    }

    system("PAUSE");
    return 0;
}