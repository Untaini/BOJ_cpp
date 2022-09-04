#include <cstdio>
#include <stack>
using namespace std;

stack<char> b,a;
char c;
int n,x;
int main() {
    while(true){
        c = getchar();
        if(c=='\n') break;
        b.push(c);
    }

    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;++i){
        c = getchar();
        switch(c){
        case 'L':
            if(!b.empty()){
                a.push(b.top());
                b.pop();
            }
            break;
        case 'D':
            if(!a.empty()){
                b.push(a.top());
                a.pop();
            }
            break;
        case 'B':
            if(!b.empty())
                b.pop();
            break;
        case 'P':
            getchar();
            c = getchar();
            b.push(c);
            break;
        }
        getchar();
    }
    while(!b.empty()){
        a.push(b.top());
        b.pop();
    }

    while(!a.empty()){
        printf("%c",a.top());
        a.pop();
    }
    return 0;
}
