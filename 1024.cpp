#include <cstdio>

int d[101], n, l, x;
int main() {
    for(int i=1;i<=100;++i)
        d[i] = d[i-1] + i-1;
    scanf("%d%d",&n,&l);
    for(int i=l;i<=100&&n>=d[i];++i)
        if((x=n-d[i])%i==0){
            for(int j=0;j<i;++j)
                printf("%d ", x/i+j);
            return 0;
        }
    printf("-1");
    return 0;
}
