#include <cstdio>

int n,m,d,s,arr[2500],pLocs[2500],nLocs[2500],dl[4],center;
void setLoc(int loc, int d, int nLoc){
    nLocs[loc] = nLoc;
    int pLoc = loc+dl[d];
    if(0>pLoc||pLoc>=n*n||pLocs[pLoc]){
        switch(d){
            case 0: d=3;break;
            case 1: d=2;break;
            case 2: d=0;break;
            case 3: d=1;break;
        }
        pLoc=loc+dl[d];
    }
    if(pLocs[pLoc]) return;

    pLocs[loc] = pLoc;
    setLoc(pLoc,d,loc);

    return;
}
int getBlankLoc(int loc){
    while(loc!=-1&&arr[loc]) loc=nLocs[loc];
    return loc;
}
int getValueLoc(int loc){
    while(loc!=-1&&!arr[loc]) loc=nLocs[loc];
}

void removeBlank(){
    int bLoc=getBlankLoc(center), vLoc=getValueLoc(nLocs[bLoc]);
    while(vLoc!=-1&&!arr[bLoc]){
        if(!arr[vLoc]) vLoc = getValueLoc(vLoc);
        arr[bLoc] = arr[vLoc], arr[vLoc] = 0;
        bLoc = nLocs[bLoc], vLoc = nLocs[vLoc];
    }
}

int main() {
    scanf("%d%d",&n,&m);
    dl[0]=-n,dl[1]=n,dl[2]=-1,dl[3]=1;

    setLoc(0,3,-1);
    center = n/2*(n+1);

    for(int x=0;x<n*n;++x)
        scanf("%d",&arr[x]);
    removeBlank();

    for(int i=0;i<m;++i){
        scanf("%d%d",&d,&s);

    }
    return 0;
}
