#include <stdio.h>
#include "menu.c"
#include "function.c"
#include "dictionary.c"

int main(int argc, char *argv[]) {
    char *dic[100];
    createDic(dic, 100);
    while(afficheMenu(dic) != 1) {

    }
}