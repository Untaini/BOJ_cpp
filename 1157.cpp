#include <stdio.h>
#include <cstring>
char s[1000005];
int d[26], c;
int mx, cnt, len;

int main() {

    scanf("%s", s);
    len = strlen(s);

    for(int i=0;i<len;i++)
        d[(s[i]|32)-'a']++;

    for(int i=0;i<26;i++)
        mx=mx>d[i]?mx:d[i];

    for(int i=0;i<26;i++)
        if(d[i]==mx) c=i, cnt++;
/*
    for(int i=0;i<26;i++)
        printf("%c ",i+65);
    printf("\n");

    for(int i=0;i<26;i++)
        printf("%d ",d[i]);
*/
    if(cnt==1) printf("%c", c+65);
    else printf("?");

    return 0;
}
