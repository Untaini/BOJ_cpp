#include <cstdio>

int d[42], s, x;

int main() {
    for(int i=0;i<10;i++){
        scanf("%d",&x);
        if(d[x%42]++ == 0) s+=1;
    }
    printf("%d",s);
    return 0;
}
