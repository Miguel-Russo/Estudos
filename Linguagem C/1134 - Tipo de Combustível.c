#include <stdio.h>
 
int main() {
 
    int i, X, Al = 0, Ga = 0, Di = 0;
    
    i = 1;
    
    while(i){
        scanf("%i", &X);
        
        if(X == 1){
            Al += 1;
        }
        else if(X == 2){
            Ga += 1;
        }
        else if(X == 3){
            Di += 1;        
        }
        else if(X == 4){
            i = 0;
        }
        else{
            i = 1;
        }
        
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %i\n", Al);
    printf("Gasolina: %i\n", Ga);
    printf("Diesel: %i\n", Di);
 
    return 0;
}
