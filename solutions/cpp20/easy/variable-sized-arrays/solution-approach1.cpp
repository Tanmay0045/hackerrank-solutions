// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
// Problem     Variable Sized Arrays
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp20
// Status      Accepted
// Submitted   2026-09-03, 11:15 p.m.
// ──────────────────────────────────────────────────

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,q;
    cin>>n;
    cin>>q;
    vector<vector<int>> e(n);
    
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        for(int x=0;x<k;x++){
            int val;
            cin>>val;
            e[i].push_back(val);
        }
    }
    
    for(int query=0;query<q;query++){
        int r,s;
        cin>>r>>s;
        cout<<e[r][s]<<endl;
    }
    return 0;
}
