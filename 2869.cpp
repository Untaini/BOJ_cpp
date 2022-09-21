#include <cstdio>

int a,b,v;
int main() {
    scanf("%d%d%d",&a,&b,&v);
    v-=a,a-=b;
    printf("%d",v/a+(v%a!=0)+1);
}
