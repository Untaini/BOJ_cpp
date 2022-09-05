#include <cstdio>
#include <stack>
#include <algorithm>
using namespace std;

bool v[21][21], va[26];
int r,c,i,j,dx[]={1,-1,0,0},dy[]={0,0,1,-1},x,y,status,pos,answer;
char a[21][21];
stack<int> s;

bool check(int x, int y){
    return 0<=x&&x<r&&0<=y&&y<c;
}

int main() {
    scanf("%d%d\n",&r,&c);
    for(i=0;i<r;++i)
        scanf("%s",a[i]);

    s.push(0);
    while(!s.empty()){
        int temp = s.top(); s.pop();
        status = temp/10000, x=temp%10000/100, y=temp%100;
        if(!status){
            ++pos, answer=max(answer,pos),
            v[x][y]=va[a[x][y]-'A']=1;
            s.push(10000+x*100+y);

            for(i=0;i<4;++i){
                int nx = x+dx[i], ny = y+dy[i];
                if(check(nx,ny)&&!v[nx][ny]&&!va[a[nx][ny]-'A'])
                    s.push(nx*100+ny);
            }
        }
        else
            v[x][y]=va[a[x][y]-'A']=0,--pos;
    }
    printf("%d",answer);

    return 0;
}
