#include <cstdio>

double r;
int c,g,n,i,k;
int main() {
    scanf("%d%d%d",&c,&g,&n);
    r=double(c)/g;
    for(i=0;i<n;++i){
        scanf("%d%d",&c,&g);
        r=r<double(c)/g?r:double(c)/g;
    }
    printf("%.02lf",r*1000);
}
