// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
// Problem     Arrays Introduction
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp20
// Status      Accepted
// Submitted   2026-08-17, 10:50 p.m.
// ──────────────────────────────────────────────────

#include<iostream>
using namespace std;
int main(){
    int i,N;
    cin>>N;
    int a[1000];
    for(i=1;i<N+1;i++){
        cin>>a[i];
    }
    for(i=N;i>=1;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}
