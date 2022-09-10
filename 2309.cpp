#include <cstdio>
#include <algorithm>
using namespace std;


int d[9],r[8],i;
int f(int s,int c,int i){
    if(s>100||c>7||i>8) return 0;
    s+=d[i], ++c;
    if(s==100&&c==7 || f(s,c,i+1)){
        r[c-1]=d[i];
        return 1;
    }
    else if(f(s-d[i],c-1,i+1)) return 1;
    return 0;
}
int main() {
    for(i=0;i<9;++i)
        scanf("%d",&d[i]);
    f(0,0,0);
    sort(r,r+7);
    for(i=0;i<7;++i)
        printf("%d\n",r[i]);
}


//For Lecture
//int height[9], dwarf[7];
/*
int findDwarf(int heightSum, int dwarfCount, int index){
    if(heightSum > 100 || dwarfCount > 7 || index > 8) return 0;

    heightSum+=height[index];
    ++dwarfCount;

    if(heightSum == 100 && dwarfCount == 7 //찾았거나
    || findDwarf(heightSum, dwarfCount, index+1)){ //index를 포함한 경우에서 찾은 경우
        dwarf[dwarfCount-1] = height[index];
        return 1;
    }

    heightSum-=height[index];
    --dwarfCount;
    if(findDwarf(heightSum, dwarfCount, index+1)) return 1; //index를 제외한 경우에서 찾은 경우
    return 0;
}
int main() {
    for(i=0;i<9;++i)
        scanf("%d",&height[i]);

    findDwarf(0,0,0);
    sort(dwarf,dwarf+7);

    for(i=0;i<7;++i)
        printf("%d\n",dwarf[i]);
}
*/
/*
//Another Version
int i[7],j;
int main(){
    for(j=0;j<9;++j)
        scanf("%d",&height[j]);
    for(i[0]=0;i[0]<3;++i[0])
        for(i[1]=i[0]+1;i[1]<4;++i[1])
            for(i[2]=i[1]+1;i[2]<5;++i[2])
                for(i[3]=i[2]+1;i[3]<6;++i[3])
                    for(i[4]=i[3]+1;i[4]<7;++i[4])
                        for(i[5]=i[4]+1;i[5]<8;++i[5])
                            for(i[6]=i[5]+1;i[6]<9;++i[6]) {
                                int heightSum = 0;
                                for(int j=0;j<7;++j){
                                    heightSum+=height[i[j]];
                                    dwarf[j]=height[i[j]];
                                }
                                if(heightSum==100){
                                    sort(dwarf, dwarf+7);
                                    for(int j=0;j<7;++j)
                                        printf("%d\n",dwarf[j]);
                                    return 0;
                                }
                            }

}
*/
/*
//Another Version - Recursive
void findDwarf(int heightSum, int dwarfCount, int index) {
    if(heightSum>100) return;
    else if(heightSum == 100 &&dwarfCount==7){
        sort(dwarf, dwarf+7);
        for(int i=0;i<7;++i)
            printf("%d\n", dwarf[i]);
        exit(0);
    }
    for(int i=index;i<9;++i) {
        dwarf[dwarfCount] = height[i];
        findDwarf(heightSum+height[i], dwarfCount+1, i+1);
    }
}
int main() {
    for(int i=0;i<9;++i)
        scanf("%d",&height[i]);

    findDwarf(0,0,0);
}
*/
