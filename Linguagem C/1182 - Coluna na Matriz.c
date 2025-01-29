#include <stdio.h>
 
int main() {
 
    int C, i, j;
    char T;
    double M[12][12], soma = 0.0, media = 0.0;
    
    scanf("%i", &C);
    scanf(" %c", &T);
    
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
            
            if(j == C){
                soma = soma + M[i][j];
            }
        }
    }
    
    media = soma / 12;
    
    if(T == 'S'){
        printf("%.1lf\n", soma);
    }
    else{
        printf("%.1lf\n", media);
    }
 
    return 0;
}
