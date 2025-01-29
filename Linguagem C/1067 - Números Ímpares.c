#include <stdio.h>
 
int main() {
 
    int cont, X;
    
    scanf("%i", &X);
    
    for (cont = 1; cont <= X; cont++){
        if (cont % 2 != 0){
            printf("%i\n", cont);
        }
    }
 
    return 0;
}
