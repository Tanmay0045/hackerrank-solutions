// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
// Problem     Pointer
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp20
// Status      Accepted
// Submitted   2026-08-17, 10:23 p.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include <cmath>
using namespace std;
   void update(int*a,int*b){
    int sum = *a + *b;
    int diff = abs(*a - *b);
    *a=sum;
    *b=diff;
    cout<<*a<<endl;
    cout<<*b<<endl;
    }
    int main(){
    int x,y;
    cin>>x;
    cin>>y;
    update(&x,&y);
    return 0;
   }
