#include <cstdio>
using namespace std;

int x1,y1,r1,x2,y2,r2,n;

int main() {
    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        scanf("%d%d%d%d%d%d",&x1, &y1,&r1,&x2,&y2,&r2);

        if(x1==x2 &&y1==y2) printf("%d\n", (r1==r2?-1:0));
        else{
            int dx = x1-x2, dy = y1-y2, sqR = dx*dx + dy*dy;
            int sqRPR = (r1+r2)*(r1+r2), sqRMR = (r1-r2)*(r1-r2);

            if(sqRPR == sqR ||sqRMR == sqR) printf("1\n");
            else if(sqRPR > sqR &&sqRMR < sqR) printf("2\n");
            else printf("0\n");

        }
    }
    return 0;
}
