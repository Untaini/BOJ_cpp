#include <cstdio>
#include <stack>
using namespace std;

char d[101];
int main() {
    while(true){
        gets(d);
        if(d[0]=='.') break;

        stack<int> s;
        bool check = true;
        for(int i=0;d[i];++i){
            if(d[i]=='('||d[i]=='[')
                s.push(d[i]=='[');
            else if(d[i]==')'||d[i]==']')
                if(!s.empty() && s.top()==(d[i]==']'))
                    s.pop();
                else{
                    check = false;
                    break;
                }
        }
        check &= s.empty();
        printf("%s\n",check?"yes":"no");
    }
    return 0;
}
