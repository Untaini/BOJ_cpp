#include <cstdio>

int d[100001], n;
int main() {

    for(int i=0;i<=100000;++i)
        d[i] = 100001;

    for(int i=1;i*i<=100000;++i) {
        int x = i*i;
        d[x] = 1;
        for(int j=x+1;j<=100000;++j)
            d[j] = d[j-x]+1<d[j]?d[j-x]+1:d[j];
    }

    scanf("%d",&n);
    printf("%d",d[n]);
    return 0;
}
