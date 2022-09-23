#include <cstdio>

char d[51],t;
int n,r=31,m=1234567891,i;
long long e=1,result;
int main() {
    scanf("%d%c%s",&n,&t,d);

    for(i=0;i<n;++i)
        result = (result+(d[i]-'a'+1)*e)%m, e=e*31%m;

    printf("%lld",result);
}
