// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/inheritance-introduction/problem?isFullScreen=true
// Problem     Inheritance Introduction
// Difficulty  Easy
// Subdomain   Inheritance
// Platform    HackerRank
// Language    cpp20
// Status      Accepted
// Submitted   2026-08-22, 10:16 p.m.
// ──────────────────────────────────────────────────

#include<iostream>
using namespace std;
class Triangle{
    public:
    void triangle(){
        cout<<"I am a triangle"<<endl;
    }
};
class Isosceles : public Triangle{
    public:
    void isosceles(){
        cout<<"I am an isosceles triangle"<<endl;
    }
    void dimensions(){
        cout<<"In an isosceles triangle two sides are equal"<<endl;
    }
};
int main(){
    Isosceles isc;
    isc.isosceles();
    isc.dimensions();
    isc.triangle();
    return 0;
}

