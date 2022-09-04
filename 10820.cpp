#include <cstdio>

char s[101],c;

int main() {
    while(gets(s) != NULL) {
        int d[4] = {};
        for(int i=0;s[i]!=0;++i)
            if('a' <= s[i] && s[i] <= 'z') ++d[0];
            else if('A' <= s[i] && s[i] <= 'Z') ++d[1];
            else if('0' <= s[i] && s[i] <= '9')++d[2];
            else if(s[i] == ' ') ++d[3];

        for(int i=0;i<4;++i)
            printf("%d ",d[i]);
        printf("\n");
    }
    return 0;
}

