#include <cstdio>
#include <queue>
using namespace std;
int p[10000],t,a,b,v[10000],i,j,k,n,x,y;
queue<int> s;
int main() {
    for(i=2;i<100;++i)
        if(!p[i])
            for(j=i*i;j<10000;j+=i)
                ++p[j];
    scanf("%d",&t);
    for(i=0;i<t;++i) {
        scanf("%d%d",&a,&b);
        for(j=0;j<10000;++j) v[j]=-1;
        v[a]=0;
        s.push(a);
        while(!s.empty()) {
            n=s.front(); s.pop();
            for(j=0;j<10;++j)
                for(x=1,k=0;k<4;++k,x*=10){
                    y=n-n/x%10*x+j*x;
                    if(y>999 && !(v[y]+1) && !p[y]){
                        s.push(y);
                        v[y]=v[n]+1;
                    }
                }
        }
        if(v[b]+1) printf("%d\n",v[b]);
        else printf("Impossible");
    }
}
