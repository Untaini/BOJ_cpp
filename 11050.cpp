#include <cstdio>

int d[11][11],n,k;
int c(int n, int k){
    if(n==k || k==0) return d[n][k]=1;
    else if(k==1) return d[n][k]=n;
    else if(d[n][k]) return d[n][k];
    return d[n][k] = c(n-1,k) + c(n-1,k-1);
}

int main() {
    scanf("%d%d",&n,&k);
    printf("%d",c(n,k));
    return 0;
}
