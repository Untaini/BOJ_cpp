#include <cstdio>

char d[5][16];
int main() {
    for(int i=0;i<5;++i)
        scanf("%s", d[i]);
    for(int i=0;i<16;++i)
        for(int j=0;j<5;++j)
            if(d[j][i] != 0)
                printf("%c", d[j][i]);
}
