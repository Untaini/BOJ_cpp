#include <cstdio>

bool d[250000] = {true, true};
int n,m,r;
int main() {
    for(int i=2;i<=500;++i)
        if(!d[i])
            for(int j=i*i;j<=250000;j+=i)
                d[j] = true;

    while(1){
        scanf("%d",&n);
        if(!n) break;
        m = 2*n, r=0;
        for(int i=n+1;i<=m;++i)
            if(!d[i]) ++r;
        printf("%d\n",r);
    }
}
