#include <stdio.h>
int main(void){
    int hash_f, space_f,
        hash_c, space_c;
        
    // F
    for (int i = 0; i <= 6; i++){
        if (i == 0 || i == 3){
            if (i == 0){
                for (hash_f = 0; hash_f <= 5; hash_f++){
                    printf("#");
                }
            } 
            else {
                for (hash_f = 0; hash_f <= 4; hash_f++){
                    printf("#");
                }
            }
            hash_f = 0;
            printf("\n");
        }
        else{
            printf("#\n");
        }
    }
    
    // C
    for (int i = 0; i <= 8; i++){
        printf(" ");
        if (i == 0 || i == 8){
            for (space_c = 0; space_c <= 2 ; space_c++){
                printf(" ");
            }
            space_c = 0;
            for(hash_c = 0; hash_c <= 6; hash_c++){
                printf("#");
            }
            hash_c = 0;
        }
        
        if (i == 1 || i == 7){
            for (int k = 0; k <= 11; k++){
                if ((k > 1 && k < 4) || (k > 9 && k < 12)){
                    printf("#");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        else {
            printf("#\n");
        }
    }
    
    return 0;
}
