#include <cstdio>
#include <stack>
using namespace std;

stack<char> cs;
char s[100001];
bool tag = false;
int main() {
    gets(s);

    for(int i=0;s[i]!=0;++i) {
        if(s[i] == '<'){
            tag = true;
            while(!cs.empty()) {
                printf("%c",cs.top());
                cs.pop();
            }
        }

        if(tag) printf("%c", s[i]);
        else if(s[i] == ' ') {
            while(!cs.empty()) {
                printf("%c",cs.top());
                cs.pop();
            }
            printf(" ");
        }
        else cs.push(s[i]);

        if(s[i] == '>') tag = false;
    }

    while(!cs.empty()) {
        printf("%c",cs.top());
        cs.pop();
    }
    return 0;
}
