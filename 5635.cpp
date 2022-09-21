#include <cstdio>

char d[100][16];
int n,mn,mx,b[100][3];
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;++i) {
        scanf("%s%d%d%d",d[i], &b[i][0], &b[i][1], &b[i][2]);
        if(i){
            if(b[i][2] < b[mx][2]
            || b[i][2] == b[mx][2] && b[i][1] < b[mx][1]
            || b[i][2] == b[mx][2] && b[i][1] == b[mx][1] && b[i][0] < b[mx][0])
                mx = i;
            else if(b[i][2] > b[mn][2]
            || b[i][2] == b[mn][2] && b[i][1] > b[mn][1]
            || b[i][2] == b[mn][2] && b[i][1] == b[mn][1] && b[i][0] > b[mn][0])
                mn = i;
        }
    }
    printf("%s\n%s",d[mn],d[mx]);
}
