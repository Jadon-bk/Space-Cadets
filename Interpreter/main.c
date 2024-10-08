#include <stdio.h>
#include <string.h>

char test[] = "";
char* find_token(char** tokens, char* test);

int main(){

    char* tokens[6] = {"clear", "incr", "decr", "while", "not", "end"};

    scanf("%s", test);
    find_token(tokens, test);
    return 0;
}

char* find_token(char** tokens, char* test){
    int i = 1;
    int found = 0;
    int res;
    while (i < 6 && found != 1){
        res = strcmp(test, tokens[i]);
        if (res == 0){
            printf("Token found");
            found = 1;
        } else {
            i ++;
        }
    }
    return 0;
}

    // if (20 > 18) {
    //     printf("20 is greater than 18");
    // }

    // int i;

    // for (i = 0; i < 5; i++) {
    //     printf("%d\n", i);
    // }