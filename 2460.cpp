#include <cstdio>
#include <algorithm>
using namespace std;

int c,m,x,y;
int main() {
    for(int i=0;i<10;++i) {
        scanf("%d%d",&x,&y);
        c += y-x;
        m = max(m, c);
    }
    printf("%d",m);
    return 0;
}

