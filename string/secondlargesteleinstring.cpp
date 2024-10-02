#include <iostream>
using namespace std;
int main()
 { string str;
   cin>>str;
   int max1 = str[0]; int max2 = 0 ;
   for(int i = 0 ; i<str.length(); i++){
       int ascii = (int)str[i];
       if(ascii>max1){
           max2 = max1;
           max1 = str[i];
       }
       else if(ascii<max1 && ascii>=max2){
              max2 = str[i];                      
       }
       
   }
   cout<<max2-48;
   
}