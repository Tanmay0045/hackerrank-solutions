// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-struct/problem?isFullScreen=true
// Problem     Structs
// Difficulty  Easy
// Subdomain   Classes
// Platform    HackerRank
// Language    cpp20
// Status      Accepted
// Submitted   2026-08-20, 11:19 p.m.
// ──────────────────────────────────────────────────

 #include<iostream>
 #include<string>
 using namespace std;
 struct ss{
    int age;
    string first_name;
    string last_name;
    int standard;
    ss(){
        cin>>age;
        cin>>first_name;
        cin>>last_name;
        cin>>standard;
        cout<<age<<" "<<first_name<<" "<<last_name<<" "<<standard<<endl;
    }
 };
 int main(){
    ss aa;
    return 0;
 }
