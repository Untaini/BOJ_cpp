#include <cstdio>

int d[16]={1,},n,s=1;

int main (){
    scanf("%d",&n);

    if(n%2==1) printf("0");
    else {
        n/=2;
        for(int i=1;i<=n;++i){
            d[i] = d[i-1] + 2*s;
            s+=d[i];
        }
        printf("%d",d[n]);
    }

    return 0;
}
