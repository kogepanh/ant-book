#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> k(n);
    for(int i=0; i<n; i++) cin >> k[i];

    sort(k.begin(), k.end());

    bool f = false;

    for(int a=0; a<n; a++){
        for(int b=0; b<n; b++){
            for(int c=0; c<n; c++){
                for(int d=0; d<n; d++){
                    if(k[a] + k[b] + k[c] + k[d] == m){
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
