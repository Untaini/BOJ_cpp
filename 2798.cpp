#include <cstdio>
int d[101],e[101],s[3],n,m;

int f(int k){
    int r=0,t=0;
    if(k==3){
        for(int i=0;i<3;++i)
            r+=d[s[i]];
    }
    else{
        for(int i=k?s[k-1]+1:0;i<n;++i)
            if(!e[i]){
                e[i]=1,s[k]=i;
                t=f(k+1);
                r=m>=t&&t>r?t:r;
                e[i]=0;
            }
    }
    return r;
}

int main() {
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;++i)
        scanf("%d",&d[i]);
    printf("%d",f(0));
    return 0;
}
