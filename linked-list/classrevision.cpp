#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string Name;
    int ID;
    float marks;
  /*   student(string n,int id ,float M){
        Name = n;
        ID = id;
        marks =M; 
    } */
    //another way
    student(string Name, int ID, float marks){
    this->Name=Name ;
    this->ID=ID;
    this->marks=marks; 
    }
};
void change(student *s){
    s->Name = "Arunav";
}
int main(){
/* student s("arnob",10,80);
cout<<s.Name<<" "<<s.ID<<" "<<s.marks;
student* ptr =&s;
int x =6;
int *p = &x;
*p = 8;
cout<<*p;
(*ptr).Name="apu";
cout<<s.Name<<" ";
ptr->Name = "amit";
//pointer variable sobsomoy address store kore
cout<<s.Name; */
//using pointer
//student type er pointer variable. and s pointer ...
//student s("arnob",10,80);
student *s = new student("Arnob",10,85);
cout<<s->Name<<endl;
change(s);
cout<<s->Name<<endl;



}