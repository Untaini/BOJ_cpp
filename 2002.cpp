#include <cstdio>
#include <string>
#include <unordered_set>
#include <queue>
using namespace std;

unordered_set<string> s;
queue<string> q;
int n,r;
char car[9];
string c;
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%s",car);
        q.push(string(car));
    }
    for(int i=0;i<n;++i){
        scanf("%s",car);
        c=string(car);
        s.insert(c);
        if(c!=q.front())
            ++r;
        else
            while(!q.empty() && s.count(q.front()))
                q.pop();
    }
    printf("%d",r);
    return 0;
}



