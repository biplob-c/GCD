#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n) {
    if (m != 0)
        return gcd(m, n % m);
    else
        return m;
}
int main() {
    int m, n;
    printf("Enter two positive integers: ");
    scanf("%d %d", &m, &n);

    int result=gcd(m, n);
    printf("G.C.D of %d and %d is: %d\n", m, n, result);
    return 0;
}

