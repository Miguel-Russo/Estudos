#include <stdio.h>
 
int main() {
 
    int Cod, Num;
    double Val, Total, Valor = 0;
    
    for (int cont = 1; cont <= 2; cont++){
        scanf ("%i", &Cod);
        scanf ("%i", &Num);
        scanf ("%lf", &Val);
        
        Total = Num * Val;
        Valor = Valor + Total;
    }
    
    printf ("VALOR A PAGAR: R$ %.2lf\n", Valor);
    
    
    return 0;
}
