#include <cstdio>

int d[100005], e[15005], n,m,s=0;
int main() {
    scanf("%d%d", &n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&e[i]);
        d[e[i]]++;
    }

    for(int i=0;i<n;i++) {
        if(2*e[i] == m || m-e[i]>100000 || m-e[i]<0) continue;
        else if(d[e[i]] && d[m-e[i]]) s++, d[e[i]]--, d[m-e[i]]--;
    }

    printf("%d",s);
    return 0;
}
