#include <cstdio>
#include <cstring>
char s[1000010];
int n;

bool checkAlpha(char c){ return (c|32)-'a'>=0;}

int main() {
    gets(s);
    int len = strlen(s);
    for(int i=0;i<=len;i++){
        if(s[i] == '\0') break;
        if(checkAlpha(s[i]) && !checkAlpha(s[i+1])){
            n++;
            //printf("%c %d %d %d\n", s[i+1], (s[i]==' ' || i==0), (s[i+1] != ' '), (s[i+1] != '\n'));
        }
        //printf("%d %d ", s[i], checkAlpha(s[i]));
    }

    printf("%d", n);
    return 0;
}
