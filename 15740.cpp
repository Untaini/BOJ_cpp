#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

char x[10003], y[10003], s[10004];

int getNum(char c) { return c=='\0'?0:c-'0'; }
char getChar(int i) { return i+'0'; }

int main() {
    scanf("%s%s", x,y);
    int lx = strlen(x), ly = strlen(y), ls = max(lx,ly)-1;
    if(x[0]=='-' ^ y[0]=='-') {
        for(int i=lx-1,j=ly-1; i>=0&&j>=0;i--,j--,ls--){
            int t = getNum(x[i]) - getNum(y[j]) + getNum(s[ls]);
            if(t < 0) {
                t+=10;
                s[ls-1]=getChar(-1);
            }
            s[ls] = getChar(t);
        }
    }
    //코드 더 짜기
}
