#include <cstdio>

int n,s,x;
int main() {
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%1d",&x);
        s+=x;
    }

    printf("%d",s);
    return 0;
}

