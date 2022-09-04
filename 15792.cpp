#include <cstdio>

int x,y;
int main() {
    scanf("%d%d",&x,&y);
    printf("%d.",x/y);
    x= x%y * 10000;

    for(int i=0;i<260;i++) {
        printf("%04d", x/y);
        x = x%y *10000;
    }

    return 0;
}
