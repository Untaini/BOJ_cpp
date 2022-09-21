#include <cstdio>

bool d[10001] = {true, true};
int n,m,r,s;
int main() {
    for(int i=2;i*i<=10000;++i)
        if(!d[i])
            for(int j=i*i;j<=10000;j+=i)
                d[j] = true;

    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;++i)
        if(!d[i]) {
            if(!r) r = i;
            s += i;
        }
    if(!s) printf("-1");
    else printf("%d\n%d",s,r);
}
