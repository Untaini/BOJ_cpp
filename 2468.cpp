#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int d[100][100],v[100][100],n,r,c,h,i,j;
queue<pair<int, int> > q;
bool f(int x, int y) {
    if(v[x][y] || d[x][y] <= h) return false;
    v[x][y] = 1;
    if(x>0) f(x-1,y);
    if(x<n-1) f(x+1,y);
    if(y>0) f(x,y-1);
    if(y<n-1) f(x,y+1);
    return true;
}
int main() {
    scanf("%d",&n);
    for(i=0;i<n;++i)
        for(j=0;j<n;++j){
            scanf("%d",&d[i][j]);
            h=max(h,d[i][j]);
        }
    while(h--){
        c=0;
        for(i=0;i<n;++i)
            for(j=0;j<n;++j)
                v[i][j] = 0;

        for(i=0;i<n;++i)
            for(j=0;j<n;++j)
                if(f(i,j)) ++c;

        r=max(r,c);
    }
    printf("%d",r);
}
