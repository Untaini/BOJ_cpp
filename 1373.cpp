#include <cstdio>
#include <cstring>

char d[1000010];
int main() {
    scanf("%s", d);

    int l = strlen(d), c = (l-1)%3 ,t = 0;

    for(int i=0;i<l;i++) {
        t += d[i]-'0';
        if(i==c){
            printf("%d", t);
            c+=3;
            t=0;
        }
        t*=2;
    }
    return 0;
}
