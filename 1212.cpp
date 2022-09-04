#include <cstdio>
#include <cstring>

char d[333340];

int getInt(char c){ return c-'0'; }

int main() {
    scanf("%s", d);

    int l = strlen(d), t = getInt(d[0]);

    t=100*(t/4) + 10*(t%4/2) + t%2;
    printf("%d",t);

    for(int i=1;i<l;i++) {
        t = getInt(d[i]);
        t=100*(t/4) + 10*(t%4/2) + t%2;
        printf("%03d", t);
    }
    return 0;
}

