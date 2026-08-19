// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true
// Problem     Class
// Difficulty  Easy
// Subdomain   Classes
// Platform    HackerRank
// Language    cpp20
// Status      Accepted
// Submitted   2026-08-19, 10:41 p.m.
// ──────────────────────────────────────────────────

#include<iostream>
#include<string>
using namespace std;
class student{
    int age,standard;
    string first_name,last_name;
    public :
    void getdata(void);
    void display(void);
};
void student :: getdata(void){
cin>>age;
cin>>first_name;
cin>>last_name;
cin>>standard;
}
void student :: display(void){
    cout<<age<<endl;
    cout<<last_name<<", "<<first_name<<endl;
    cout<<standard<<endl;
    cout<<endl;
    cout<<age<<","<<first_name<<","<<last_name<<","<<standard<<endl;
}
int main(){
    student s;
    s.getdata();
    s.display();
    return 0;
}
