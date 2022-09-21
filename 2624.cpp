/*
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int d[101][10001]={1},p,n,t,k,i,j,l,a;
vector<pair<int, int> > v;
int main() {
    scanf("%d%d",&t,&k);
    for(i=0;i<k;++i) {
        scanf("%d%d",&p,&n);
        v.push_back(make_pair(p,n));
    }
    sort(v.begin(), v.end());
    for(i=1;i<=k;++i) {
        d[i][0] = 1;
        for(l=t;l>=1;--l)
            if(l<v[i-1].first) d[i][l] = d[i-1][l];
            else d[i][l] = d[i-1][l-v[i-1].first] + d[i-1][l];

        for(j=2;j<=v[i-1].second;++j) {
            for(l=t;l>=1;--l)
                if(l<v[i-1].first) d[i][l] = d[i-1][l];
                else d[i][l] = d[i][l-v[i-1].first] + d[i-1][l];
        }
    }
    printf("%d",d[k][t]);
}
*/

#include <iostream>
using namespace std;
int t, k, p, n, dp[10050]={1};
main()
{
	cin >>t >>k;
	for (int i=0; i<k; i++)
	{
		cin >>p >>n;
		for (int j=t; j>=p; j--)
			for (int h=1; h<=n; h++)
				if (p*h<=j) dp[j] += dp[j-p*h];
        for(int j=1;j<=t;++j)
            cout << dp[j] << " ";
        cout << '\n';
	}
	cout <<dp[t];
}
