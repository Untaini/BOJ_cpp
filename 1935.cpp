#include <cstdio>
#include <stack>
using namespace std;

stack<double> c;
char s[101];
int d[26],n;

int main() {
    scanf("%d", &n);
    getchar();
    gets(s);
    for(int i=0;i<n;++i)
        scanf("%d",&d[i]);

    for(int i=0;s[i]!=0;++i) {
        if('A' <= s[i] && s[i] <= 'Z')
            c.push(d[s[i]-'A']);
        else{
            double a,b;
            b = c.top(); c.pop();
            a = c.top(); c.pop();
            if(s[i] == '+') c.push(a+b);
            else if(s[i] == '-') c.push(a-b);
            else if(s[i] == '*') c.push(a*b);
            else if(s[i] == '/') c.push(a/b);
        }
    }

    printf("%.2lf", c.top());

    return 0;
}
