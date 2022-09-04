#include <cstdio>


char s[101];
int main() {
    gets(s);
    for(int i=0;s[i]!=0;++i)
        if('A' <= s[i] && s[i] <= 'Z')
            s[i] = (s[i]-'A'+13)%26+'A';

        else if('a' <= s[i] && s[i] <= 'z')
            s[i] = (s[i]-'a'+13)%26+'a';

    printf("%s", s);
}
