#include <cstdio>

int data[50][50], beforeMovingCloud[50][50], afterMovingCloud[50][50], n,m,d,s,x;
int dr[] = {0,-1,-1,-1,0,1,1,1} ,dc[] = {-1,-1,0,1,1,1,0,-1};

bool checkIndex(int row, int col){
    return 0<=row && row<n && 0<=col && col<n;
}

int main() {
    scanf("%d %d",&n,&m);
    for(int rCnt=0;rCnt<n;++rCnt){
        for(int cCnt=0;cCnt<n;++cCnt){
            scanf("%d",&x);
            data[rCnt][cCnt] = x;
        }
    }

    beforeMovingCloud[n-1][0] = beforeMovingCloud[n-1][1]
        = beforeMovingCloud[n-2][0] = beforeMovingCloud[n-2][1] = 1;

    for(int i=0; i<m; ++i){
        scanf("%d %d",&d,&s); --d;
        int mRow = s*dr[d], mCol = s*dc[d]; //-50~50

        for(int rCnt=0;rCnt<n;++rCnt){
            for(int cCnt=0;cCnt<n;++cCnt){
                int nRow = (25*n+rCnt+mRow)%n, nCol = (25*n+cCnt+mCol)%n;
                afterMovingCloud[nRow][nCol] = beforeMovingCloud[rCnt][cCnt];
            }
        }

        for(int rCnt=0;rCnt<n;++rCnt)
            for(int cCnt=0;cCnt<n;++cCnt)
                data[rCnt][cCnt] += afterMovingCloud[rCnt][cCnt];


        for(int rCnt=0;rCnt<n;++rCnt){
            for(int cCnt=0;cCnt<n;++cCnt){
                if(afterMovingCloud[rCnt][cCnt])
                    for(int temp=1;temp<8;temp+=2)
                        data[rCnt][cCnt] += checkIndex(rCnt+dr[temp], cCnt+dc[temp])&&(data[rCnt+dr[temp]][cCnt+dc[temp]]>0);
            }
        }

        for(int rCnt=0;rCnt<n;++rCnt){
            for(int cCnt=0;cCnt<n;++cCnt){
                if(data[rCnt][cCnt]>=2 && !afterMovingCloud[rCnt][cCnt]){
                    data[rCnt][cCnt] -= 2;
                    beforeMovingCloud[rCnt][cCnt] = 1;
                }
                else beforeMovingCloud[rCnt][cCnt] = 0;
            }
        }
    }

    int result = 0;

    for(int rCnt=0;rCnt<n;++rCnt)
        for(int cCnt=0;cCnt<n;++cCnt)
            result += data[rCnt][cCnt];

    printf("%d",result);
    return 0;
}
