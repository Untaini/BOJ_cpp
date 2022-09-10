#include <cstdio>
#include <string>
#include <unordered_map>
using namespace std;

int n,mx;
char s[51];
string name;
unordered_map<string, int> m;
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%s",s);
        name = s;
        ++m[name];
    }

    for(auto e : m)
        if(mx < e.second || mx == e.second && name > e.first)
            mx=e.second,name=e.first;

    printf("%s",name.c_str());
    return 0;
}
