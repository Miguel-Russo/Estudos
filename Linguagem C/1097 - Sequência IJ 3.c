#include <stdio.h>
 
int main() {
 
    int jota;
    
    jota = 7;
    
    for (int i = 1; i <= 9; i += 2){
        for (int j = jota; j >= jota - 2; j--){
            printf("I=%i J=%i\n", i, j);
        }
        jota += 2;
    }
 
    return 0;
}
