#include <cstdio>
int n;
int main() {
    scanf("%d",&n);
    int t=0, r=1;
    for(int i=0;i<n;i++,r++) {
        if(r==n) t=i*1000+666;
        if(i%1000==666) {
            for(int j=0;j<1000;j++,r++){
                if(r==n) t=i*1000+j;
            }
            r-=1;
        }
        else if(i%100==66) {
            for(int j=0;j<100;j++,r++){
                if(r==n) t=i*1000+600+j;
            }
            r-=1;
        }
        else if(i%10==6) {
            for(int j=0;j<10;j++,r++) {
                if(r==n) t=i*1000+660+j;
            }
            r-=1;
        }
        if(t) break;
    }
    printf("%d",t);
    return 0;
}
