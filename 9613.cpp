#include <cstdio>

int f(int a, int b){
    if(b==0) return a;
    else return f(b, a%b);
}

int n;
int d[101];
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        long long s=0;
        scanf("%d",&x);
        for(int j=0;j<x;j++) {
            scanf("%d",&d[j]);
            for(int k=0;k<j;k++)
                s+= f(d[k], d[j]);
        }
        printf("%lld\n",s);
    }
    return 0;
}
