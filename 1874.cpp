#include <cstdio>
#include <stack>
#include <vector>
using namespace std;

stack<int> s;
vector<char> v;
int n, c=1, x;
bool check = true;

int main() {
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&x);
        while(c<=x){
            s.push(c++);
            v.push_back('+');
        }
        if(s.top() == x) {
            s.pop();
            v.push_back('-');
        }
        else{
            check = false;
        }
    }

    if(check)
        for(unsigned int i=0;i<v.size(); ++i)
        printf("%c\n",v[i]);

    else
        printf("NO");
}
