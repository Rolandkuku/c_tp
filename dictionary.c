//
// Created by Roland Kullet on 31/05/16.
//

#include <stdio.h>
#include <stdlib.h>

void createDic (char* dic[]) {
    for(int i = 0; i < 100; i++) {
        dic[i] = "";
    }
    dic[0] = "toto";
    dic[1] = "tata";
    dic[99] = "endArray";
}

int compareWords() {
    printf("Entrez un mot\n\n");
    char new_word[50] = "";
    char *p_new_word = &new_word;
    scanf("%s", p_new_word);
    char *dic[100];
    createDic(dic);
    int found = 0;
    for(int i = 0; i < 99; i++) {
        if(strcmp(dic[i], p_new_word) == 0) {
            found = 1;
        }
    }
    if (found == 1) {
        printf("%s existe dans la liste !\n", p_new_word);
    } else {
        printf("%s n'exsiste pas dans la liste\n", p_new_word);
    }
    return 0;
}

int addWord() {
    char *dic[100];
    createDic(dic);
    printf("Entrez un mot\n\n");
    char new_word[] = "";
    char *p_new_word;
    scanf("%s", &p_new_word);
    for(int i = 0; strcmp(dic[i], "endArray"); i++) {
        printf("%s", dic[i]);
        if(dic[i] == NULL) {
            dic[i] = new_word;
            printf("Added the word %s !\n", &p_new_word);
        }
    }
    return 0;
}
