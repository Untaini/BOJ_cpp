#include <cstdio>
#define f(w,x,y,z) (w*1000+x*100+y*10+z)
#define min(x,y) (x<y?x:y)

int d[10000],w,x,y,z,t,c=0;

int main(){
    for(w=1;w<10;++w)
        for(x=1;x<10;++x)
            for(y=1;y<10;++y)
                for(z=1;z<10;++z){
                    t=f(w,x,y,z);
                    if(d[t]==1e9) continue;

                    d[f(x,y,z,w)]=d[f(y,z,w,x)]=d[f(z,w,x,y)]=1e9;
                    d[t]=++c;
                }
    scanf("%d%d%d%d",&w,&x,&y,&z);
    printf("%d",d[min(min(f(w,x,y,z),f(x,y,z,w)),min(f(y,z,w,x),f(z,w,x,y)))]);
    return 0;
}
