#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int d[51][51],n,x,y,i,j,k;
vector<pair<int,int> > v;
vector<int> c;
int main(){
    fill(&d[0][0], &d[50][50]+1, 1e9);

    scanf("%d",&n);
    while(true){
        scanf("%d%d",&x,&y);
        if(x==-1) break;
        d[x][y]=d[y][x]=1;
    }

    for(k=1;k<=n;++k)
        for(i=1;i<=n;++i)
            for(j=1;j<=n;++j){
                if(i==j) d[i][j]=0;
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }

    for(i=1;i<=n;++i){
        int m=0;
        for(j=1;j<=n;++j)
            m=max(m,d[i][j]);
        v.push_back(make_pair(m,i));
    }

    sort(v.begin(), v.end());

    int point=v[0].first, cnt=0;
    for(i=0;i<v.size();++i)
        if(v[i].first>point) break;
        else{
            ++cnt;
            c.push_back(v[i].second);
        }

    printf("%d %d\n",point, cnt);
    for(i=0;i<c.size();++i)
        printf("%d ",c[i]);

    return 0;
}
