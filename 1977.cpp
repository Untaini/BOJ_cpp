#include <cstdio>


int m,n, mn=10001, s=0;
int main() {
    scanf("%d%d",&m,&n);
    for(int i=1;i<101;i++){
        int t = i*i;
        if(m <= t && t <= n)
            s+=t, mn = mn<t?mn:t;
    }
    if(s==0) printf("-1");
    else printf("%d\n%d",s,mn);
    return 0;
}
