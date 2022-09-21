#include <cstdio>
#include <algorithm>
#include <unordered_map>
using namespace std;

char cube[6][9],o[3],w[] = {'w','r','b','o','g','y'},tmp[3];
unordered_map<char,int> um;
int t,n,i,j;
void reset(){
    for(int i=0;i<6;++i)
        for(int j=0;j<9;++j)
            cube[i][j] = w[i];
}

int re[6][4][4] = {
    {{1,0,1,2},{4,0,1,2},{3,0,1,2},{2,0,1,2}},
    {{0,6,7,8},{2,0,3,6},{5,2,1,0},{4,8,5,2}},
    {{0,8,5,2},{3,0,3,6},{5,8,5,2},{1,8,5,2}},
    {{0,2,1,0},{4,0,3,6},{5,6,7,8},{2,8,5,2}},
    {{0,0,3,6},{1,0,3,6},{5,0,3,6},{3,8,5,2}},
    {{1,6,7,8},{2,6,7,8},{3,6,7,8},{4,6,7,8}},
};
void edge_rotate(int face, int dir){
    for(int i=0;i<3;++i)
        tmp[i]=cube[re[face][dir?0:3][0]][re[face][dir?0:3][i+1]];
    int it = dir?1:-1;
    for(int i=dir?0:3;dir?i<3:i>0;i+=it)
        for(int j=1;j<4;++j)
            cube[re[face][i][0]][re[face][i][j]]=cube[re[face][i+it][0]][re[face][i+it][j]];
    for(int i=0;i<3;++i)
        cube[re[face][dir?3:0][0]][re[face][dir?3:0][i+1]]=tmp[i];
}

void rotate(int face, int dir){
    if(dir){
        swap(cube[face][2], cube[face][6]);
        swap(cube[face][1], cube[face][3]);
        swap(cube[face][5], cube[face][7]);
    }
    else{
        swap(cube[face][0], cube[face][8]);
        swap(cube[face][1], cube[face][5]);
        swap(cube[face][3], cube[face][7]);
    }
    for(int i=0;i<3;++i)
        swap(cube[face][i], cube[face][i+6]);

    edge_rotate(face, dir);
}

int main() {
    um['U']=0,um['D']=5,um['F']=1,um['B']=3,um['R']=2,um['L']=4;
    scanf("%d",&t);
    for(i=0;i<t;++i){
        scanf("%d",&n);
        reset();

        for(j=0;j<n;++j){
            scanf("%s",o);
            rotate(um[o[0]],o[1]=='-');
        }
        for(j=0;j<9;j+=3)
            printf("%c%c%c\n",cube[0][j],cube[0][j+1],cube[0][j+2]);
    }
    return 0;
}
