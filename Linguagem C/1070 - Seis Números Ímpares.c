#include <stdio.h>
 
int main() {
 
    int X, cont;
    
    scanf("%i", &X);
    
    for (cont = X; cont <= X + 11; cont++){
        if (cont % 2 != 0){
            printf("%i\n", cont);
        }
    }
 
    return 0;
}
