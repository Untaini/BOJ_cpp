#include <cstdio>
#include <algorithm>
using namespace std;

int x, y, rx, ry;
int main() {
    scanf("%d%d", &x,&y);

    for(int i=100;i>0;i/=10)
        rx += x/i*(100/i), ry += y/i*(100/i), x%=i, y%=i;
    printf("%d", max(rx,ry));
    return 0;
}
