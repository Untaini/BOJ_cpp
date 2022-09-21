#include <cstdio>

int n,d[128][128],i,j,w,b;
void f(int sr, int er, int sc, int ec){
    bool wc=1,bc=1;
    for(int i=sr;i<er;++i)
        for(int j=sc;j<ec;++j)
            wc&=!d[i][j], bc&=d[i][j];
    if(wc) ++w;
    else if(bc) ++b;
    else{
        int mr=(sr+er)/2, mc=(sc+ec)/2;
        f(sr,mr,sc,mc);
        f(mr,er,sc,mc);
        f(sr,mr,mc,ec);
        f(mr,er,mc,ec);
    }
}

int main() {
    scanf("%d",&n);
    for(i=0;i<n;++i)
        for(j=0;j<n;++j)
            scanf("%d",&d[i][j]);
    f(0,n,0,n);
    printf("%d\n%d",w,b);
}
