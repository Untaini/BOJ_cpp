#include <cstdio>

int n,x,s,t;
int main() {
    for(int i=1;i<=5;++i) {
        t=0;
        for(int j=0;j<4;++j) {
            scanf("%d",&x);
            t+=x;
        }
        if(t>s) n=i,s=t;
    }
    printf("%d %d",n,s);
}
