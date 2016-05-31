//
// Created by Roland Kullet on 31/05/16.
//

#include <stdio.h>
#include <stdlib.h>

void createDic (char* dic[], int size) {
    for(int i = 0; i < 100; i++) {
        dic[i] = "!empty!";
    }
    dic[0] = "toto";
    dic[1] = "tata";
    dic[size -1] = "endArray";
}

int compareWords(char* dic[]) {
    printf("Entrez un mot\n\n");
    char new_word[50] = "";
    char *p_new_word = &new_word;
    scanf("%s", p_new_word);
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

int addWord(char* dic[]) {
    printf("Entrez un mot\n\n");
    char new_word[50] = "";
    char *p_new_word = &new_word;
    scanf("%s", p_new_word);
    for(int i = 0; i < 99; i++) {
        if(strcmp(dic[i], "!empty!") == 0) {
            dic[i] = p_new_word;
            printf("Added the word %s here !\n", p_new_word);
            break;
        } else {
            printf("%s\n", dic[i]);
        }
    }
    return 0;
}

int removeWord() {

}
