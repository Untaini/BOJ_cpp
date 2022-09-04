#include <cstdio>
#include <deque>
#include <cstring>
using namespace std;

int n,x;
deque<int> d;
char s[20];
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;++i) {
        scanf("%s", s);

        if(!strcmp(s, "push_front")) {
            scanf("%d", &x);
            d.push_front(x);
        }
        else if(!strcmp(s, "push_back")) {
            scanf("%d",&x);
            d.push_back(x);
        }
        else if(!strcmp(s, "pop_front")) {
            if(d.empty()) printf("-1\n");
            else{
                printf("%d\n", d.front());
                d.pop_front();
            }
        }
        else if(!strcmp(s, "pop_back")) {
            if(d.empty()) printf("-1\n");
            else{
                printf("%d\n", d.back());
                d.pop_back();
            }
        }
        else if(!strcmp(s, "size")) {
            printf("%d\n", d.size());
        }
        else if(!strcmp(s, "empty")) {
            printf("%d\n", d.empty()?1:0);
        }
        else if(!strcmp(s, "front")) {
            printf("%d\n", d.empty()?-1:d.front());
        }
        else if(!strcmp(s, "back")) {
            printf("%d\n", d.empty()?-1:d.back());
        }
    }
    return 0;
}
