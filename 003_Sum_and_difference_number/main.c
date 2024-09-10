#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
    float c, d, tmp;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    tmp = a + b;
    printf("%0.0f", tmp);
    tmp = a - b;
    printf(" %0.0f\n", tmp);
    tmp = c + d;
    printf("%0.1f ", tmp);
    tmp = c - d;
    printf("%0.1f", tmp);    
    
    
    return 0;
}
