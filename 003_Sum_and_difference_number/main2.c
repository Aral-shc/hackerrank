#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b, toplam, fark;
    float c, d, toplam2, fark2;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    toplam = a + b;
    fark = a - b;
    toplam2 = c + d;
    fark2 = c - d;
    printf("%d %d\n", toplam, fark);
    printf("%0.1f %0.1f", toplam2, fark2);    
    
    
    return 0;
}

