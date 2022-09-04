#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

pair<int, int> d[8];
int e[8],s;

int main() {
    for(int i=1;i<=8;i++){
        int x;
        scanf("%d",&x);
        d[i-1] = make_pair(x,i);
    }
    sort(d, d+8);
    for(int i=3;i<8;i++)
        e[i-3] = d[i].second, s+= d[i].first;
    sort(e, e+5);

    printf("%d\n",s);
    for(int i=0;i<5;i++)
        printf("%d ", e[i]);

    return 0;
}
