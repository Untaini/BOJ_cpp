#include <cstdio>
int n, i, s;
int main() {
    scanf("%d",&n);
    bool c = true;
    for(i=1;s<n;i++){
        s+=i;
        c^=true;
    }
    s-=(i-1);
    for(int j=1;j<i;j++)
        if(++s==n)
            if(c) printf("%d/%d",j,i-j);
            else printf("%d/%d", i-j,j);

    return 0;
}
