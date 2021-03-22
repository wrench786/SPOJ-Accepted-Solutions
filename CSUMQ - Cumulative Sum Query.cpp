#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

vector<int>vec;

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    int n,x,i,j,start,end;
    vector<int>vec;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        vec.pb(x);
    }
    cin>>x;
    for(i=0;i<x;i++){
        cin>>start>>end;
        ll int sum=0;
        for(j=start;j<=end;j++){
            sum+=vec[j];
        }
        cout<<sum<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
