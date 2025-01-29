#include <stdio.h>
 
int main() {
 
    double Raio, Volume = 0;
    
    scanf ("%lf", &Raio);
    
    Volume = (4.0/3.0) * 3.14159 * Raio * Raio * Raio;
    
    printf ("VOLUME = %.3lf\n", Volume);
 
    return 0;
}
