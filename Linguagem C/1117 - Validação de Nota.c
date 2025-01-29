#include <stdio.h>
 
int main() {
 
    double X, Media, Soma;
    int cont = 0;
    
    while(cont < 2){
    
        scanf("%lf", &X);
    
        if(X > 10 || X < 0){
            printf("nota invalida\n");
        }
        else{
            Soma = Soma + X;
            cont++;
        }
    }
    
    Media = Soma/cont;
    
    printf("media = %.2lf\n", Media);
 
    return 0;
}
