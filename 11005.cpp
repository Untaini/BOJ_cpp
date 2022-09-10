#include <cstdio>
#include <stack>
using namespace std;

int n, b;
stack<char> s;
int main(){
    scanf("%d%d", &n,&b);
    while(n) {
        int r = n%b;
        n/=b;
        if(r>9) s.push('A'+(r-10));
        else s.push('0'+r);
    }
    while(!s.empty()){
        printf("%c",s.top());
        s.pop();
    }
}
