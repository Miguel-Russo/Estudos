#include <stdio.h>
 
int main() {
 
    int N, Quad;
    
    scanf("%i", &N);
    
    for (int cont = 1; cont <= N; cont++){
        if (cont % 2 == 0){
            Quad = cont * cont;
            printf("%i^2 = %i\n", cont, Quad);
        }
    }
 
    return 0;
}
