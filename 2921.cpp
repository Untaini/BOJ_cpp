#include <cstdio>
int n,s;
int main() {
    scanf("%d",&n);
    for(int i=0;i<=n;++i)
        for(int j=0;j<=i;++j)
            s+=i+j;
    printf("%d",s);
}
