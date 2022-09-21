#include <cstdio>
#include <algorithm>
using namespace std;

int box[10000],crain[50],n,m,left,mid,right=1e4,i,j,cur;
int main() {
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",&crain[i]);

    scanf("%d",&m);
    for(i=0;i<m;++i)
        scanf("%d",&box[i]);

    sort(crain,crain+n);
    sort(box,box+m);

    while(left<=right){
        mid=(left+right)/2, cur=0;
        for(i=0;i<n;++i)
            for(j=0;j<mid&&cur<m&&box[cur]<=crain[i];++j,++cur);

        if(cur==m) right=mid-1;
        else left=mid+1;
    }

    printf("%d",left>10000?-1:left);

    return 0;
}
