#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

priority_queue<pair<int, int>> pq;
int n,l,x;
int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    cin >> n >> l;
    for(int i=0;i<n;++i){
        cin >> x;
        pq.push({-x,-i});
        while(-pq.top().second <= i-l) pq.pop();
        cout << -pq.top().first << ' ';
    }
    return 0;
}
