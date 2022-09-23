#include <cstdio>
#include <algorithm>
using namespace std;

char d[50][51];
int n,m,i,j,k,l,s[2],r=1e9;

int main(){
    scanf("%d%d\n",&n,&m);
    for(i=0;i<n;++i)
        scanf("%s",d[i]);

    n-=7,m-=7;
    for(i=0;i<n;++i)
        for(j=0;j<m;++j){
            s[0]=s[1]=0;
            for(k=0;k<8;++k)
                for(l=0;l<8;++l)
                    s[(k+l)%2]+=d[i+k][j+l]!='B',
                    s[!((k+l)%2)]+=d[i+k][j+l]!='W';
            r=min(r,min(s[0],s[1]));
        }
    printf("%d",r);
    return 0;
}
