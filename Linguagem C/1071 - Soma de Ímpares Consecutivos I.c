#include <stdio.h>
 
int main() {
 
    int X, Y, Soma = 0, Temp;
    
    scanf("%i", &X);
    scanf("%i", &Y);
    
    if (X < Y){
        Temp = X;
        X = Y;
        Y = Temp;
    }
    
    for (int cont = Y + 1; cont < X; cont++){
        if (cont % 2 != 0){
            Soma = Soma + cont;
        }
    }
    
    printf ("%i\n", Soma);
 
    return 0;
}
