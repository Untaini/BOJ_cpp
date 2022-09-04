#include <cstdio>
#include <algorithm>
using namespace std;

int t,n,k,st[1<<20],i,p,a,b,x;
char c;

void update(int t, int v){
    t+=p,st[t]=v?v/abs(v):0;
    while(t)
        t>>=1, st[t]=st[t*2]*st[t*2+1];
}

char mulRange(int s, int e){
    int result=1;

    s+=p, e+=p;
    while(s<=e){
        if(s%2==1) result*=st[s], s+=1;
        if(e%2==0) result*=st[e], e-=1;
        s>>=1, e>>=1;
    }

    return result?(result==1?'+':'-'):'0';
}

int main() {
    while(scanf("%d%d",&n,&k)==2){
        p=1;
        while(n>p) p<<=1;

        fill(st,st+p*2,0);

        for(i=0;i<n;++i){
            scanf("%d",&x);
            update(i,x);
        }

        for(i=0;i<k;++i){
            getchar();
            scanf("%c%d%d",&c,&a,&b);
            if(c=='C')
                update(a-1,b);
            else
                printf("%c",mulRange(a-1,b-1));
        }
        printf("\n");
    }

    return 0;
}
