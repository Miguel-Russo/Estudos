#include <stdio.h>
 
int main() {
 
    double i, j, valor;
    
    i = 0;
    j = 0;
    
    valor = 1;
    
    while(i <= 2){
        
        while(j < 3){
            
            if(i == 0.0 || i > 0.9 && i < 1.1 || i > 1.8){
                printf("I=%.0lf J=%.0lf\n", i, valor);
            }
            else{
                printf("I=%.1lf J=%.1lf\n", i, valor);    
            }
            
            valor += 1;
            j += 1;
            
        }
        
        j = 0;
        valor = valor - 2.8;
        i += 0.2;
    }
    
    return 0;
}
