#include<bits/stdc++.h>
using namespace std;
//list is doubly linked list
int main(){
    list<int>l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);
    l.pop_back();
    l.push_front(90);
  /*   auto it = l.begin();
    while(it != l.end()){
        cout<<*it<<endl;
        it++;
    }  */
    //reverse way to print
    for(auto it = l.rbegin() ; it != l.rend() ; it++){
        cout<<*it<<endl;
    }
}