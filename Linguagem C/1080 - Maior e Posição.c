#include <stdio.h>
 
int main() {
 
    int X, Maior = 0, Num, Pos;
    
    for (int cont = 1; cont <= 100; cont++){
        scanf ("%i", &X);
        if (X > Maior){
            Maior = X;
            Pos = cont;
        }
    }
    
    printf ("%i\n", Maior);
    printf ("%i\n", Pos);
    
    return 0;
}
