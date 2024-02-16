#include<bits/stdc++.h>
using namespace std;
void subset(string str, string ans ){
if(str.length() ==  0 ){cout<<ans<<endl; return;}
subset(str.substr(1),ans+str[0]);
subset(str.substr(1),ans);
}
int main(){
string str = "abc";
subset(str,"");
}