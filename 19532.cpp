#include <cstdio>

int a,b,c,d,e,f,i,j;
int main(){
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    for(i=-999;i<1000;++i)
        for(j=-999;j<1000;++j)
            if(a*i+b*j==c && d*i+e*j==f)
                printf("%d %d",i, j);
}
