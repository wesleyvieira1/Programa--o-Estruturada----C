#include <stdio.h>

int main()
{
    double A,B,C, media;
    
    scanf("%lf\n%lf\n%lf",&A,&B,&C);
    
    media = (A*2 + B*3 + C*5)/10.0;
    
    printf("MEDIA = %.1lf\n", media);
    
    return 0;
    
}