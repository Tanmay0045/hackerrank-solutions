// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
// Problem     Functions
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp20
// Status      Accepted
// Submitted   2026-08-16, 11:19 p.m.
// ──────────────────────────────────────────────────

#include<iostream>
using namespace std;
    int max_of_four(int a,int b,int c,int d);
    int main(){
        int p , q , r , s;
        cin >> p >> q >> r >> s;
        cout<<max_of_four(p,q,r,s);
        return 0;
        }
        int max_of_four(int a,int b,int c,int d){
            if(a>b && a>c && a>d){
                return a;
            }
            else if(b>a && b>c && b>d){
                return b;
            }
            else if(c>a && c>b && c>d){
                return c;
            }
            else{
                return d;
            }
        }
    
    


