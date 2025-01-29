#include <stdio.h>
 
int main() {
 
    int A, B, C, MaiorAB;
    
    scanf ("%i", &A);
    scanf ("%i", &B);
    scanf ("%i", &C);
    
    MaiorAB = (A + B + abs(A-B))/2;
    
    if (C > MaiorAB){
        printf("%i eh o maior\n", C);
    }
    else{
        printf("%i eh o maior\n", MaiorAB);
    }
 
    return 0;
}
