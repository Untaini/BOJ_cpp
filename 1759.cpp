#include <cstdio>
#include <algorithm>
using namespace std;

int l,c,i;
char d[15],p[15],t;
int g(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
void f(int x, int t, int v){
    if(x==l && v>0 && x-v>1)
        printf("%s\n",p);
    if(x<l && t<c){
        for(int i=t;i<c;++i){
            p[x] = d[i];
            f(x+1,i+1,v+g(d[i]));
        }
    }
}
int main() {
    scanf("%d%d\n",&l,&c);
    for(i=0;i<c;++i)
        scanf("%c%c",&d[i],&t);
    sort(d,d+c);
    f(0,0,0);
}
