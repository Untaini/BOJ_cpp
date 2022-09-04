#include <cstdio>

char s[101];
int d[26];
int main() {
    scanf("%s",s);
    for(int i=0;i<26;++i)
        d[i] = -1;

    for(int i=0;s[i]!=0;++i)
        if(d[s[i]-'a']==-1)
            d[s[i]-'a'] = i;

    for(int i=0;i<26;++i)
        printf("%d ",d[i]);
    return 0;
}

