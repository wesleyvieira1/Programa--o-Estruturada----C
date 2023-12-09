#include <stdio.h>

int main()
{
    int X;
    float Y;
    double consumo;
    
    scanf("%d\n%f", &X, &Y);
    
    consumo = X/Y;
    
    printf("%.3lf km/l\n", consumo);
    
    return 0;
    
}