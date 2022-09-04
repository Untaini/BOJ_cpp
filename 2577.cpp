#include <cstdio>

int x,y,z, d[10], r;

int main() {
    scanf("%d%d%d",&x,&y,&z);
    r=x*y*z;
    while(r!=0) d[r%10]++, r/=10;

    for(int i=0;i<10;i++)
        printf("%d\n",d[i]);
    return 0;
}
