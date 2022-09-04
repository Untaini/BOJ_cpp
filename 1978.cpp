#include <cstdio>
char d[1000001];
int n,x,s;
int main() {
    d[0] = d[1] = 1;
    for(int i=2;i<=1000;i++) {
        if(d[i]) continue;
        for(int j=i*i;j<1000001;j+=i) {
            d[j] = 1;
        }
    }
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d",&x);
        if(!d[x]) s++;
    }

    printf("%d", s);
    return 0;
}

