#include <cstdio>
#include <cstring>

char a[10002], b[10002], r[10003];
int n,m;
int main() {
    scanf("%s%s",a,b);
    n=strlen(a);
    m=strlen(b);
    for(int i=n>m?n:m;i>0;--i){
        if(n>0) r[i] += a[--n]-'0';
        if(m>0) r[i] += b[--m]-'0';
        r[i-1]+=r[i]/10;
        r[i]=r[i]%10+'0';
    }
    r[0] += '0';
    printf("%s",r[0]=='0'?r+1:r);
}
