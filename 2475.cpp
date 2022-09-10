#include <cstdio>

int r,x;
int main() {
    for(int i=0;i<5;++i){
        scanf("%d",&x);
        r+=x*x;
    }
    printf("%d",r%10);
    return 0;
}
