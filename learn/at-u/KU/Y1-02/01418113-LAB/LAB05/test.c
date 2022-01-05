#include <stdio.h>

int check(unsigned long n){
    unsigned long c = n,count = 10;
    while (n != 0 && count < 100000000){
        n %= 10;
        n /= 10;
        count *= 10;
    }
    if (((c*c) % count) == c){
        return 1;
    }else{
        return 0;
    }
}
void main(void)
{
    unsigned long n;
    printf("Input n = ");
    scanf("%lu", &n);
    printf("n^2 = %lu\n", n*n);
    
    if (check(n)){
        printf("Yes. %lu is automorphic number.", n);
    }else{
        printf("No. %lu is not automorphic number.", n);
    }
    
}