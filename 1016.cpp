#include <cstdio>
long long n,m,res,i,j;
bool d[1001002], e[1000010];
int main() {
    scanf("%lld%lld",&n,&m);
    res=m-n+1;

    for(i=2;i<1001002;++i){
        if(!d[i]){
            for(j=i*i;j<1001002;j+=i) d[j]=1;
            for(j=(n/(i*i))*i*i;j<=m;j+=i*i)
                if(n<=j&&!e[j-n])
                    --res,e[j-n]=1;
        }
    }

    printf("%lld",res);
    return 0;
}
