#include <cstdio>

long long a,b,r,p,c,i,j,k;
int main() {
    while(scanf("%lld%lld",&a,&b)==2){
        if(a>=b) {
            printf("%lld\n", b);
            continue;
        }
        bool d[32000]={1,1}; r=1;
        for(i=2;i<32000;++i)
            if(!d[i]){
                for(j=i*i; j<32000; j+=i)
                    d[j]=1;

                if(i<=a){
                    p=0;

                    for(j=i; j<=a; j*=i)
                        p+=a/j;

                    while(b%i==0 && p)
                        b/=i,r*=i,--p;
                }
            }
        printf("%lld\n",r);
    }
    return 0;
}
