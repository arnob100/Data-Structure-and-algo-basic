#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<string,int>p;
    p.first = "arnob";
    p.second = 34;
    cout<<p.first<< ":"<<p.second<<endl;

    pair<string , pair<int,int>>p1;
    p1.first = " Arnob Bokshi ";
    p1.second.first = 23;
    p1.second.second= 5;
    cout<<"Name : "<<p1.first<< "Age :"<<p1.second.first <<" hight : "<< p1.second.second;
}