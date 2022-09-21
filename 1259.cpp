#include <cstdio>

int r(int n){
    int t=0;
    while(n)
        t=t*10+n%10,n/=10;
    return t;
}

int main() {
    while(true){
        int x;
        scanf("%d",&x);
        if(x==0) break;
        printf("%s\n",x==r(x)?"yes":"no");
    }

    return 0;
}
