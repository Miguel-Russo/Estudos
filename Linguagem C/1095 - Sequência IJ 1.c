#include <stdio.h>
 
int main() {
 
    int i = 1;
    
    for (int cont = 60; cont >= 0; cont -= 5){
        printf("I=%i J=%i\n", i, cont);
        i = i + 3;
    }
    
    return 0;
}
