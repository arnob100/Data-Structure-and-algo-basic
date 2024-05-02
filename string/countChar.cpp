#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    
    //using map 
    map <char,int>m;
    for(char c : str){
          m[c]++;
    }
    for(auto it = m.begin() ; it!=m.end() ;it++){
        cout<<it->first<< " : "<<it->second <<endl;
    }
}
//anotehr appraoch
 vector<int> a(26,0);
    for(int i = 0 ; i<str.length(); i++){
        char ch = str[i];
        int ascii = str[i]-'a';
        a[ascii]++;         
    }
     for(int i = 0 ; i<a.size(); i++){
        if(a[i]>0){
        char ch = i+'a';
        cout<<ch<<" : "<<a[i]<<endl;   
        }   
    }