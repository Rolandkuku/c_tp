//
// Created by Roland Kullet on 31/05/16.
//

#include <stdio.h>
#include <stdlib.h>

void createDic (char* dic[]) {
    dic[0] = "toto";
    dic[1] = "tata";
    dic[99] = "endArray";
}

int dictionary(void) {
    printf("Entrez un mot\n\n");
    char new_word[] = "";
    char *p_new_word;
    scanf("%s", &p_new_word);
    printf("dico\n\n");
    char *dic[100];
    createDic(dic);
    for(int i = 0; strcmp(dic[i], "enArray"); i++) {
        if(strcmp(dic[i], new_word)) {
            printf("\n%s existe dans la liste !", &p_new_word);
        }
    }
    return 0;
}
