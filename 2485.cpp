#include <cstdio>

int gcd(int a, int b){
    if(a%b) return gcd(b, a%b);
    else return b;
}

int n,g,p,s=1<<30,e,i;
int main(){
    scanf("%d%d",&n,&p);
    for(i=1,s=p;i<n;++i){
        scanf("%d",&e);
        g=gcd(g,e-p),p=e;
    }
    printf("%d",(e-s)/g-n+1);
    return 0;
}


