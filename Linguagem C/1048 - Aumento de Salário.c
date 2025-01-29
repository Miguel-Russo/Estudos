#include <stdio.h>
 
int main() {
 
    double sal, nsal, rea;
    int por;
    
    scanf("%lf", &sal);
    
    if (sal >= 0 && sal <= 400.00){
        nsal = sal + (sal*15)/100;
        rea = nsal - sal;
        por = 15;
    }
    else if (sal > 400.00 && sal <= 800.00){
        nsal = sal + (sal*12)/100;
        rea = nsal - sal;
        por = 12;
    }
    else if (sal > 800.00 && sal <= 1200.00){
        nsal = sal + (sal*10)/100;
        rea = nsal - sal;
        por = 10;
    }
    else if (sal > 1200.00 && sal <= 2000.00){
        nsal = sal + (sal*7)/100;
        rea = nsal - sal;
        por = 7;
    }
    else{
        nsal = sal + (sal*4)/100;
        rea = nsal - sal;
        por = 4;
    }
    
    printf("Novo salario: %.2lf\n", nsal);
    printf("Reajuste ganho: %.2lf\n", rea);
    printf("Em percentual: %i %\n", por);
 
    return 0;
}
