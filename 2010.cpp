#include <cstdio>

int n,r=1;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        int x;
        scanf("%d",&x);
        r+=x;
    }
    printf("%d",r-n);
    return 0;
}
