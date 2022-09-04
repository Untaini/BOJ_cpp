#include <cstdio>
#include <stack>
using namespace std;

int n;
char c,d[1001];
stack<char> s;
int main() {
    scanf("%d%c", &n,&c);
    for(int i=0;i<n;++i){
        gets(d);
        for(int j=0;d[j]!=0;j++){
            if(d[j] == ' ') {
                while(!s.empty()){
                    printf("%c", s.top()); s.pop();
                }
                printf(" ");
            }
            else s.push(d[j]);
        }

        while(!s.empty()){
            printf("%c", s.top()); s.pop();
        }
        printf("\n");
    }


    return 0;
}
