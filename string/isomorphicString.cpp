#include <bits/stdc++.h>
using namespace std;
bool check(const string &s, const string &t){
    int n = s.size();
    vector<int>map(256,-1);
    for(int i = 0 ; i< n ; i++){
        int idx1 = (int)s[i];
        int idx2 = (int)t[i];
        if(map[idx1]==-1)map[idx1] = idx1-idx2;
        else if(map[idx1] != s[i]-t[i])return false;
    }
     for(int i = 0 ; i< n ; i++){
         map[i]=-1;
     }
       for(int i = 0 ; i< n ; i++){
        int idx1 = (int)s[i];
        int idx2 = (int)t[i];
        if(map[idx2]==-1)map[idx2] = idx2-idx1;
        else if(map[idx2] != idx2-idx1)return false;
     }
     return true;
     
}
int main()
{
    string s = "foo";
    string t = "baa";
    if(check(s,t)){
        cout<<"isomorphic";
    }
    else cout<<"not isomorphic";

    return 0;
}