#include <stdio.h>
 
int main() {
 
    int Num, Hora;
    double Val, Sal;
    
    scanf ("%i", &Num);
    scanf ("%i", &Hora);
    scanf ("%lf", &Val);
    
    Sal = Hora * Val;
    
    printf ("NUMBER = %i\n", Num);
    printf ("SALARY = U$ %.2lf\n", Sal);
    
    
 
    return 0;
}
