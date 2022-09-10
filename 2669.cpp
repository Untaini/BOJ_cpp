#include <cstdio>

int d[101][101],x,y,a,b,i,j,k,s;
int main() {
    for(i=0;i<4;++i){
        scanf("%d%d%d%d",&x,&y,&a,&b);
        for(j=x;j<a;++j)
            for(k=y;k<b;++k)
                d[j][k]=1;
    }

    for(i=1;i<=100;++i)
        for(j=1;j<=100;++j)
            s+=d[i][j];

    printf("%d",s);
    return 0;
}
