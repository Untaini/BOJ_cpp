#include <cstdio>

int main() {

    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    printf("%d\n%d\n%d\n%d", (x+y)%z, (x%z+y%z)%z, (x*y)%z, (x%z*y%z)%z );

    return 0;
}
