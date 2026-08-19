// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true
// Problem     Strings
// Difficulty  Easy
// Subdomain   Strings
// Platform    HackerRank
// Language    cpp20
// Status      Accepted
// Submitted   2026-08-19, 11:04 p.m.
// ──────────────────────────────────────────────────

#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    int len = a.size();
    int ten = b.size();
    cout<<len<<" "<<ten<<endl;
    cout<<a+b<<endl;
    char temp = a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b<<endl;
    return 0;
}
