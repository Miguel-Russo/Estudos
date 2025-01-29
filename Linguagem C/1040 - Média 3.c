#include <stdio.h>
 
int main() {
 
    double N1, N2, N3, N4, NE, ME, MF;
    
    scanf ("%lf", &N1);
    scanf ("%lf", &N2);
    scanf ("%lf", &N3);
    scanf ("%lf", &N4);
    
    ME = (N1*2 + N2*3 + N3*4 + N4*1)/10;
    
    if (ME >= 7.0){
        printf ("Media: %.1lf\n", ME);
        printf ("Aluno aprovado.\n");
    }
    else if (ME >= 5.0 && ME <= 6.9){
        printf("Media: %.1lf\n", ME);
        printf("Aluno em exame.\n");
        
        scanf("%lf", &NE);
        
        printf("Nota do exame: %.1lf\n", NE);
        
        MF = (ME + NE)/2;
        
        if (MF >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1lf\n", MF);
    }
    else{
        printf ("Media: %.1lf\n", ME);
        printf ("Aluno reprovado.\n");
    }
 
    return 0;
}
