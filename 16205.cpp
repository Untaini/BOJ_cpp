#include <cstdio>
#include <string>
#include <vector>
using namespace std;

vector<string> words;
string var,temp;
char c,d[101];
int n;

int main(){
    scanf("%d %s",&n,d);
    var = d;

    if(n==2){
        int index=0,nIndex;
        while((nIndex=var.find('_', index))!=string::npos){
            words.push_back(var.substr(index, nIndex-index));
            index=nIndex+1;
        }
        words.push_back(var.substr(index));
    }
    else{
        temp += (char)(var[0]|32), var+='A';
        for(int i=1;var[i];++i){
            if('A'<=var[i] && var[i]<='Z'){
                words.push_back(temp);
                temp=string() + (char)(var[i]+32);
            }
            else temp += var[i];
        }
    }

    printf("%s",words[0].c_str());
    for(int i=1;i<words.size();++i)
        printf("%c%s",words[i][0]-32,words[i].substr(1).c_str());


    printf("\n%s",words[0].c_str());
    for(int i=1;i<words.size();++i)
        printf("_%s",words[i].c_str());

    printf("\n");
    for(int i=0;i<words.size();++i)
        printf("%c%s",words[i][0]-32,words[i].substr(1).c_str());

    return 0;
}
