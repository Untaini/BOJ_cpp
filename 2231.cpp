#include <cstdio>

int d[7], t, n, h=1,g;
bool f(int x){
    bool c = false;
    if(x==g) {
        int i = t;
        for(int j=0;j<g;j++)
            i+=d[j];

        if(i==n) return true;
    }
    else {
        for(int i=0;i<10;i++){
            d[x] = i;
            c = f(x+1);
            if(c) return c;
        }
    }
    return false;
}
int main() {
    scanf("%d",&n);
    while(h<n) h*=10,g+=1; h/=10;

}
