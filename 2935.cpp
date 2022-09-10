#include <cstdio>
#include <cstring>
char a[101],b[101],c,t;
int n,m,r;
int main() {
    scanf("%s%c%c%c%s",a,&t,&c,&t,b);
    if(c=='*'){
        n=strlen(a)+strlen(b)-2;
        printf("1");
        for(int i=0;i<n;++i)
            printf("0");
    }
    else{
        n=strlen(a), m=strlen(b);
        for(int i=n>m?n:m;i>0;--i){
            r=0;
            if(i==n) ++r;
            if(i==m) ++r;
            printf("%d",r);
        }
    }
}
