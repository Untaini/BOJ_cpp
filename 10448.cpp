#include <cstdio>

int d[45],i,t,k;

int f(int s, int x){
    if(x==3) return (s==k);
    for(int i=1;i<45;++i)
        if(f(s+d[i],x+1)) return 1;
    return 0;
}

int main() {
    for(i=1;i<45;++i)
        d[i]=d[i-1]+i;
    scanf("%d",&t);
    for(i=0;i<t;++i) {
        scanf("%d",&k);
        printf("%d\n",f(0,0));
    }
}
