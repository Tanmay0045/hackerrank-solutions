// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/vector-erase/problem?isFullScreen=true
// Problem     Vector-Erase
// Difficulty  Easy
// Subdomain   STL
// Platform    HackerRank
// Language    cpp20
// Status      Accepted
// Submitted   2026-08-23, 09:56 a.m.
// ──────────────────────────────────────────────────

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n,x,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>x;
    cin>>a>>b;
    
    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    
    cout<<v.size()<<endl;
    for(int y:v)
    cout<<y<<" ";
    return 0;

}
