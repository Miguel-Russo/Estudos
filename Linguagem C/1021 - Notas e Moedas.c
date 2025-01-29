#include <stdio.h>
 
int main() {
 
    double Valor; 
    int QtdCem = 0, QtdNCin = 0, QtdNVin = 0, QtdNDez = 0, QtdNCinc = 0, QtdNDois = 0;
    int QtdMUmReal = 0, QtdMCin = 0, QtdMVinCinc = 0, QtdMDez = 0, QtdMCinc = 0, QtdMUm = 0;
    
    scanf("%lf", &Valor);
    
    while(Valor >= 0.01){
        
        if(Valor >= 100){
            Valor -= 100;
            QtdCem++;
        }
        else if(Valor >= 50){
            Valor -= 50;
            QtdNCin++;
        }
        else if(Valor >= 20){
            Valor -= 20;
            QtdNVin++;
        }
        else if(Valor >= 10){
            Valor -= 10;
            QtdNDez++;
        }
        else if(Valor >= 5){
            Valor -= 5;
            QtdNCinc++;
        }
        else if(Valor >= 2){
            Valor -= 2;
            QtdNDois++;
        }
        else if(Valor >= 1.00){
            Valor -= 1.00;
            QtdMUmReal++;
        }
        else if(Valor >= 0.50){
            Valor -= 0.50;
            QtdMCin++;
        }
        else if(Valor >= 0.25){
            Valor -= 0.25;
            QtdMVinCinc++;
        }
        else if(Valor >= 0.10){
            Valor -= 0.10;
            QtdMDez++;
        }
        else if(Valor >= 0.05){
            Valor -= 0.05;
            QtdMCinc++;
        }
        else{
            Valor -= 0.01;
            QtdMUm++;
        }
        
    }
    
    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", QtdCem);
    printf("%i nota(s) de R$ 50.00\n", QtdNCin);
    printf("%i nota(s) de R$ 20.00\n", QtdNVin);
    printf("%i nota(s) de R$ 10.00\n", QtdNDez);
    printf("%i nota(s) de R$ 5.00\n", QtdNCinc);
    printf("%i nota(s) de R$ 2.00\n", QtdNDois);
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", QtdMUmReal);
    printf("%i moeda(s) de R$ 0.50\n", QtdMCin);
    printf("%i moeda(s) de R$ 0.25\n", QtdMVinCinc);
    printf("%i moeda(s) de R$ 0.10\n", QtdMDez);
    printf("%i moeda(s) de R$ 0.05\n", QtdMCinc);
    printf("%i moeda(s) de R$ 0.01\n", QtdMUm);
    
    return 0;
}
