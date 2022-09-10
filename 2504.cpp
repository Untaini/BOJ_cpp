#include <cstdio>
#include <stack>
using namespace std;

stack<int> s;
char c;
int x, r, t;
int main(){
    while(1){
        scanf("%c",&c);
        if(c=='\n') break;
        else if(c=='(' || c=='[') s.push(c=='[');
        else{
            t=(c==']');
            if(s.empty() || (s.top()^t)==1){ r=1; break; }
            else if(s.top()==t) {
                s.pop();
                x=2+t;
                if(!s.empty() && s.top()>1){ x+=s.top(); s.pop(); }
                s.push(x);
            }
            else {
                x = s.top(); s.pop();
                if(s.empty() || (s.top()^t)==1) { r=1; break; }
                s.pop();
                x*=2+t;
                if(!s.empty() && s.top()>1){ x+=s.top(); s.pop(); }
                s.push(x);
            }
        }
    }
    printf("%d",r||s.size()!=1?0:s.top());
}
