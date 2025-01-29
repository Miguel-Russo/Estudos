#include <stdio.h>
 
int main() {
 
    int N;
    
    scanf("%i", &N);
    
    for (int cont = 1; cont <= 10000; cont++){
        if (cont % N == 2){
            printf("%i\n", cont);
        }
    }
 
    return 0;
}
