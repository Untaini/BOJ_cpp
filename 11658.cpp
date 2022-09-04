#include <cstdio>

int fw[1025][1025],d[1025][1025],n,m,i,j,w,x,y,a,b,c;
void u(int x, int y, int v){
    v-=d[x][y];
    d[x][y]+=v;
    while(x<=n){
        int cy=y;
        while(y<=n)
            fw[x][y]+=v,y+=y&-y;
        y=cy,x+=x&-x;
    }
}
int s(int x, int y){
    int r=0,cy;
    while(x){
        cy=y;
        while(y)
            r+=fw[x][y],y-=y&-y;
        y=cy,x-=x&-x;
    }
    return r;
}
int main() {
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j){
            scanf("%d",&x);
            u(i,j,x);
        }
    for(i=0;i<m;++i){
        scanf("%d",&w);
        if(w){
            scanf("%d%d%d%d",&x,&y,&a,&b);
            printf("%d\n",s(a,b)-s(a,y-1)-s(x-1,b)+s(x-1,y-1));
        }
        else{
            scanf("%d%d%d",&x,&y,&c);
            u(x,y,c);
        }
    }
    return 0;
}
