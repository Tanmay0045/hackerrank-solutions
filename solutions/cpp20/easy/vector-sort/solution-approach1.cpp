// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=true
// Problem     Vector-Sort
// Difficulty  Easy
// Subdomain   STL
// Platform    HackerRank
// Language    cpp20
// Status      Accepted
// Submitted   2026-08-23, 09:29 a.m.
// ──────────────────────────────────────────────────

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int y:v)
    cout<<y<<" ";
    return 0;
}
