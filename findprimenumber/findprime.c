#include<stdio.h>
int isPrime(int x);
int main() {
    int  No;
    scanf("%d", &No);
    int prime = 2, i = 1;
    while (i < No)
    {
        do {
            prime++;
        } while (isPrime(prime) == 0);
        i++;
    }
    printf("%d", prime);
}
int isPrime(int x) {
    if (x <= 1) return 0;
    if (x == 2) return 1;
    for (int i = 2; i * i <= x;i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}