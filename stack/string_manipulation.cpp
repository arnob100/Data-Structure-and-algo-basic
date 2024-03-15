//concept : check everytime with with the neighbours 
//tips : take a stack and compare with the vector element if not matched then pop the stack value and increase the index value
class Solution{
    public:
    int removeConsecutiveSame(vector <string > v) 
    {
      stack<string>st;
      int i = 0 ; 
      while(i < v.size()){
          if(st.empty()||st.top()!=v[i]){
              st.push(v[i++]);
          }
          else{
              st.pop();
              i++;
          }
      }
      return st.size();   
      }
      
};