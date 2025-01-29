#include <stdio.h>
 
int main() {
 
    int N, X, Y, Temp, Soma = 0;
    
    scanf("%i", &N);
    
    for (int cont = 1; cont <= N; cont++){
        scanf("%i", &X);
        scanf("%i", &Y);
        
        if(X < Y){
            Temp = X;
            X = Y;
            Y = Temp;
        }
        
        Soma = 0;
        
        for (int i = Y + 1; i <= X - 1; i++){
            if (i % 2 != 0){
                Soma = Soma + i; 
            }
        }
        
        printf("%i\n", Soma);
    }
 
    return 0;
}
