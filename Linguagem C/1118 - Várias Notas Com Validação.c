#include <stdio.h>
 
int main() {
 
    int i, j, k, resp, novo;
    double X, Y, media;
    
    i = 1;
    
    while(i){
        
        j = 1;
        k = 1;
        media = 0;
        
        while(j){
            scanf("%lf", &X);
            
            if(X >= 0 && X <= 10){
                media += X;
                j = 0;
            }
            else{
                printf("nota invalida\n");
            }
        }
        
        while(k){
            scanf("%lf", &Y);
            
            if(Y >= 0 && Y <= 10){
                media += Y;
                k = 0;
            }
            else{
                printf("nota invalida\n");
            }
        }
        
        printf("media = %.2lf\n", media/2);
        
        resp = 1;
        
        while(resp){
            
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%i", &novo);
            
            if(novo == 1){
                resp = 0;
            }
            else if(novo == 2){
                resp = 0;
                i = 0;
            }
            else{
                resp = 1;
            }
        }
    }
    
    return 0;
}
