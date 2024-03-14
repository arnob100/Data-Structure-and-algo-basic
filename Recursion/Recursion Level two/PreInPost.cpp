#include<bits/stdc++.h>
using namespace std;
void preinpost(int n ){
if(n == 0 )return ;
cout<<"PRE "<<n<<endl;
preinpost(n-1);
cout<<"IN "<<n<<endl;
preinpost(n-1);
cout<<"POST "<<n<<endl;
}
int main(){
preinpost(3);

}