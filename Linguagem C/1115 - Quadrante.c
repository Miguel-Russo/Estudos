#include <stdio.h>
 
int main() {
 
    int X, Y, i;
    
    i = 1;
    
    while(i){
        scanf("%i %i", &X, &Y);
        
        if(X == 0 || Y == 0){
           i = 0; 
        }
        else{
            if(X > 0 && Y > 0){
                printf("primeiro\n");
            }
            else if(X > 0 && Y < 0){
                printf("quarto\n");
            }
            else if(X < 0 && Y < 0){
                printf("terceiro\n");
            }
            else{
                printf("segundo\n");
            }
        }
    }
 
    return 0;
}
