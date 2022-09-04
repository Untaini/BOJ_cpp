#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int n;
char c;
string s;
int main(){
    cin.unsetf(ios::skipws);
    cin.tie(NULL);

    cin >> n >> c;

    while(n) {
        cin >> s >> c;
        if(c == '\n') --n;
        reverse(s.begin(), s.end());
        cout << s << c;
    }
}
