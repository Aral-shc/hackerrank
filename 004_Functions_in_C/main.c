#include <stdio.h>

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int buyuk;
    if (a > b && a > c && a > d){
        buyuk = a;
                
    }
    else if (b > a && b > c && b > d) {
        buyuk = b;
        
    }
    else if (c > a && c > b && c > d) { 
        buyuk = c;       
        
    }
    else if (d > a && d > b && d > c){
        buyuk = d;
    }    
    return buyuk;

    } 

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
