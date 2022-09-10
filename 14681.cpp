#include <cstdio>
int x,y;
int main() {
    scanf("%d%d",&x,&y);
    printf("%d",x*y>0?x>0?1:3:x>0?4:2);
}
