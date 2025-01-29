#include <stdio.h>
 
int main() {
 
    int A, B, C, pri, seg, ter, menor, meio, maior;
    
    scanf ("%i", &A);
    scanf ("%i", &B);
    scanf ("%i", &C);
    
    pri = A;
    seg = B;
    ter = C;
    
    if (A > B && A > C){
        maior = A;
        if (B > C){
            meio = B;
            menor = C;
        }
        else{
            meio = C;
            menor = B;
        }
    }
    else if (B > A && B > C){
        maior = B;
        if (A > C){
            meio = A;
            menor = C;
        }
        else{
            meio = C;
            menor = A;
        }
    }
    else {
        maior = C;
        if (A > B){
            meio = A;
            menor = B;
        }
        else{
            meio = B;
            menor = A;
        }
    }
    
    printf("%i\n", menor);
    printf("%i\n", meio);
    printf("%i\n", maior);
    printf("\n");
    printf("%i\n", pri);
    printf("%i\n", seg);
    printf("%i\n", ter);
 
    return 0;
}
