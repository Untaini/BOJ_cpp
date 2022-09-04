#include <cstdio>

int n, r;
char s[100001];
int main() {
    gets(s);
    for(int i=0;s[i]!=0;++i){
        if(s[i] == '(')
            if(s[i+1] == ')') r+=n,++i;
            else ++n;
        else if(s[i] == ')') ++r,--n;
    }
    printf("%d",r);
    return 0;
}
