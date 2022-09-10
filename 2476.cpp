#include <cstdio>
#include <algorithm>
using namespace std;

int d[7], n, x, r;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i) {
        for(int j=1;j<=6;++j) d[j]=0;
        for(int j=0;j<3;++j){
            scanf("%d",&x);
            ++d[x];
        }
        for(int j=6;j>0;--j)
            if(d[j]==3)
                r=max(r,10000+1000*j);
            else if(d[j]==2)
                r=max(r, 1000+100*j);
            else if(d[j]==1)
                r=max(r, 100*j);
    }
    printf("%d",r);
}
