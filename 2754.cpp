#include <cstdio>

char c;
float g;
int main() {
    scanf("%c",&c);
    g = 4.0-(c-'A');
    if(g<0) printf("0.0");
    else {
        scanf("%c",&c);
        if(c=='+') g+=0.3;
        else if(c=='-') g-=0.3;
        printf("%.1f", g);
    }
}
