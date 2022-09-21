#include <cstdio>

int d[9],r;
char c;
int main() {
    while(1) {
        scanf("%c",&c);
        if(c=='\n') break;
        c-='0';
        if(c==9) c-=3;
        ++d[c];
    }
    d[6]=(d[6]+1)/2;
    for(int i=0;i<9;++i)
        r=r>d[i]?r:d[i];
    printf("%d",r);
}
