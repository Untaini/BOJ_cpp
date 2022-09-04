#include <stdio.h>

int n, res;
char s[101];
int main() {
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        char a[26] = {}, t;
        bool check = false;
        scanf("%s", s);
        t = s[0], a[t-'a']++;
        for(int j=1; s[j]!='\0' && !check;j++) {
            check |= (t != s[j] && a[s[j]-'a']);
            t=s[j], a[t-'a']++;
        }
        if(!check) res++;
    }
    printf("%d", res);
    return 0;
}
