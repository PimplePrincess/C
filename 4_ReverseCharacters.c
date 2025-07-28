#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    

    char* word = malloc(101);
    char* changedWord = malloc(101);
    

    printf("Please, enter text from characte. At the end press Enter.\n");
    scanf("%100s", word);
    printf("You entered: %s\n", word);

    int len = strlen(word);

    for (int i = 0; i < len; i++){
        changedWord[i] = word[len - 1- i];
    }
    changedWord[len] = '\0'; 
   

    free(word);
    free(changedWord);

    printf("Changed word: %s\n", changedWord);
    
    return 0;
}
