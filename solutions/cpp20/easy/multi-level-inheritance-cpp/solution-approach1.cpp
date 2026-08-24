// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/multi-level-inheritance-cpp/problem?isFullScreen=true
// Problem     Multi Level Inheritance 
// Difficulty  Easy
// Subdomain   Inheritance
// Platform    HackerRank
// Language    cpp20
// Status      Accepted
// Submitted   2026-08-24, 09:05 p.m.
// ──────────────────────────────────────────────────

#include<iostream>
using namespace std;
class a{
    public :
    void one(){
        cout<<"I am an equilateral triangle"<<endl;
    }
};
class b:public a{
    public :
    void two(){
        cout<<"I am an isosceles triangle"<<endl;
    }
};
class c:public b{
    public :
    void three(){
        cout<<"I am a triangle"<<endl;
    }
};
int main(){
    c x;
    x.one();
    x.two();
    x.three();
    
    return 0;
}
