#include <cstdio>

int n, r;
int main() {
    while(1){
        scanf("%d",&n);
        if(!n) break;
        r=1;
        while(n!=0){
            switch(n%10){
                case 0: r+=5; break;
                case 1: r+=3; break;
                default: r+=4;
            }
            n/=10;
        }
        printf("%d\n",r);
    }
    return 0;
}
