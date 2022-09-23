#include <cstdio>
#include <algorithm>
using namespace std;

int n,m,b,d[500][500],r=1e9,i,j,k,h,c,t;
int main() {
    scanf("%d%d%d",&n,&m,&b);
    for(i=0;i<n;++i)
        for(j=0;j<m;++j)
            scanf("%d",&d[i][j]);

    for(i=0;i<=256;++i){
        c=t=0;
        for(j=0;j<n;++j)
            for(k=0;k<m;++k)
                if(d[j][k]>i)
                    t+=(d[j][k]-i)*2,c+=d[j][k]-i;
                else
                    t+=(i-d[j][k]),c-=i-d[j][k];
        if(b+c>=0 && r>=t)
            r=t,h=i;
    }
    printf("%d %d",r,h);
    return 0;
}
