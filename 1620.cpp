#include <cstdio>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

unordered_map<string, string> um;
int n,m;
char c[21];
string num, name;

string itos(int num){
    string t = "";
    while(num)
        t+=num%10+'0',num/=10;
    reverse(t.begin(), t.end());
    return t;
}

int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;++i){
        scanf("%s",c);
        name=c,num=itos(i);
        um[name]=num, um[num]=name;
    }

    for(int i=0;i<m;++i){
        scanf("%s",c);
        printf("%s\n",um[string(c)].c_str());
    }
    return 0;
}
