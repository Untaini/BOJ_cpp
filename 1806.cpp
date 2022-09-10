#include <cstdio>

int f,b,n,s,t,r=8<<21,d[100000],i;
int main() {
    scanf("%d%d",&n,&s);
    for(i=0;i<n;++i)
        scanf("%d",&d[i]);
    while(f<n||t>=s){
        if(t<s) t+=d[f++];
        else{
            r=r<f-b?r:f-b;
            t-=d[b++];
        }
    }
    printf("%d",r==(8<<21)?0:r);
}
