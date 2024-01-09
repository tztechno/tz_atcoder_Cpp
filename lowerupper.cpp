//ABC192_B lowerupper

##################################

#include <iostream>

using namespace std;
bool solve ( int idx , string s) {
    if(idx == s.length()) return true; // base case
    if(idx%2 ==0) {
        if(s[idx] >= 'a' && s[idx] <= 'z') return solve(idx+1,s);
        else return false;
    }else{
        if(s[idx] >= 'A' && s[idx] <= 'Z') return solve(idx+1,s);
        else return false;
    }
}

int main(){
    string s; 
    cin>>s; 

    bool flag = solve(0,s);
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0; 
}

##################################

#include <bits/stdc++.h>
using namespace std;

int main() 
{
   string s;
   cin>>s;
   bool ans=true;
   for(int i=0; i<s.size(); i++){
     if(i%2==0){
       if(!islower(s[i])){
       ans=false;
       break;
       }
     }
     else {
       if(!isupper(s[i])){
       ans=false;
       break;
       }
     }
   }
   if(ans)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
    
  return 0;
}

##################################
