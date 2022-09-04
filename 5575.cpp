#include <cstdio>

int sh,sm,ss, eh,em,es;
int main() {
    for(int i=0;i<3;i++) {
        scanf("%d%d%d%d%d%d",&sh,&sm,&ss,&eh,&em,&es);
        int s = es-ss, m = em-sm, h = eh-sh;
        if(s<0) s+=60, m-=1;
        if(m<0) m+=60, h-=1;
        printf("%d %d %d\n", h, m, s);
    }

    return 0;
}
