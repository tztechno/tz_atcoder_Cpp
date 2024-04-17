abc070_b.cpp
##############################
##############################
##############################
##############################
##############################
##############################
#include <bits/stdc++.h>
using namespace std;
int main(){
 int A,B,C,D;
 int ini,en;
 cin >> A >> B >> C >> D;
 if(max(A,C) == A){
   ini = A;
  }else{
   ini = C;
 }
 if(min(B,D) == B){
   en = B;
  }else{
    en = D;
  }
 if(en - ini >= 0){
   cout << (en - ini);
 }
 else{
   cout << 0;
 }
}
##############################
// LUOGU_RID: 154723207
#include <bits/stdc++.h>
using namespace std;
	
int main()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  cout<<max(0,min(b,d)-max(a,c));
  return 0;
}
##############################
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c,d,t;
  cin >>a>>b>>c>>d;  
  t=0;
  for (int i = a; i < b; i++) {
  if (c<=i && i<d) {
    t=t+1;      
    };
  };
  cout<<t;
}
##############################
