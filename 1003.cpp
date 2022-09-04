#include <cstdio>

int d[41][2] = {1,0,0,1}, n;

int main() {
    scanf("%d",&n);

    for(int i=2;i<=40;i++)
        d[i][0] = d[i-1][0]+d[i-2][0], d[i][1] = d[i-1][1]+d[i-2][1];

    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        printf("%d %d\n", d[x][0], d[x][1]);
    }

    return 0;
}
