#include <stdio.h>

int n;
bool check(int x){
    int y = x/10%10 - x%10; x/=10;
    bool result = true;
    while(x>9) result &= (y == x/10%10 - x%10), x/=10;
    return result;
}
int main() {
    scanf("%d", &n);
    int r = 0;
    for(int i=1;i<=n;i++)
        if(check(i)) r++;
    printf("%d", r);
    return 0;
}
