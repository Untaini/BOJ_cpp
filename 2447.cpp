#include <cstdio>
int n;

bool c(int i, int j, int n) {
    if(n==1) return i!=1 || j!=1;

    if(i/n==1 && j/n==1) return 0;
    else return c(i%n, j%n, n/3);
}

int main() {
    scanf("%d",&n);
    for(int i=0;i<n;++i) {
        for(int j=0;j<n;++j)
            printf("%c",c(i,j,n/3)?'*':' ');
        printf("\n");
    }

    return 0;
}
