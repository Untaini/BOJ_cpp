#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    printf("%d", ((x%4==0 && x%100!=0) || x%400==0)?1:0);
    return 0;
}
