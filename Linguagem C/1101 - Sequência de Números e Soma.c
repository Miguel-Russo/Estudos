#include <stdio.h>
 
int main() {
 
    int M, N, Temp, Soma;
    
    while(1){
        
        scanf("%i", &M);
        scanf("%i", &N);
        
        if (M <= 0 || N <= 0){
            break;
        }
        else{
            
            if(M > N){
                Temp = M;
                M = N;
                N = Temp;
            }
            
            for (int cont = M; cont <= N; cont++){
                printf("%i ", cont);
                Soma = Soma + cont;
            }
            
            printf("Sum=%i\n", Soma);
            Soma = 0;
            
        }
    }
 
    return 0;
}
