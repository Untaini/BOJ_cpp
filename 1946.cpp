#include <cstdio>

int n, r=1, k;
int main() {
    scanf("%d", &n);
    for(int i=0;i<n;++i) {
        r += 2*(k+2) + k;
        r %= 45678;
        k+=1;
    }
    printf("%d", r);
    return 0;
}
