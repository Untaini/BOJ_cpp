#include <cstdio>

int main() {
    int x,y;
    scanf("%d%d", &x,&y);
    printf("%d\n%d\n%d\n%d", x*(y%10), x*(y/10%10), x*(y/100), x*y);

    return 0;
}
