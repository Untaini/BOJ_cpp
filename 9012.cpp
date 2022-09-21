#include <cstdio>
#include <stack>
using namespace std;

int t;
char s[51];
stack<int> sk;
bool f(){
    while(!sk.empty()) sk.pop();

    for(int it=0; s[it]; ++it){
        if(s[it]=='(') sk.push(1);
        else if(sk.empty()) return false;
        else sk.pop();
    }
    return sk.empty();
}

int main(){
    scanf("%d",&t);
    for(int i=0;i<t;++i){
        scanf("%s",s);
        printf("%s\n",f()?"YES":"NO");
    }

}


