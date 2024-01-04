//ABC177_A late

int (整数型):
intは整数を表すためのデータ型です。
32ビットの環境では通常、-2,147,483,648から2,147,483,647までの範囲の整数を表現できます。
64ビットの環境では、より大きな範囲の整数を表現できます。

double (倍精度浮動小数点型):
doubleは浮動小数点数を表すためのデータ型で、倍精度浮動小数点型と呼ばれます。
64ビットの精度を持ち、広い範囲の実数値を表現できます。

#######################################
#include <bits/stdc++.h>

int main() {
    //int D,T,S;   error
    double D,T,S;

    std::cin >> D >> T >> S;

    if (D/S<=T) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;        
    }
    return 0;
}

#######################################
#include <bits/stdc++.h>
using namespace std;

int main (){
  double d,t,s,a;
  cin >> d >> t >> s;
  a = d/s;
  if(a <= t){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}

#######################################
#include<bits/stdc++.h>
using namespace std;
int main() {
  int d, t, s;
  cin >> d >> t >> s;
  // d / s <= t
  cout << (1LL * d <= 1LL * t * s ? "Yes" : "No") << '\n';
  return 0;
}

#######################################
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 int s,t,d;
  cin>>d>>t>>s;
  if(d<= s*t){
    cout << "Yes";
  }else{
    cout << "No";
  }
  return 0;
}

#######################################
#include<bits/stdc++.h>
using namespace std ;
int main(){

   double distance , time , speed ;
   cin >> distance >> time >> speed ;
   cout << (distance/speed<=time?"Yes" : "No") ;
   return 0 ;
}
#######################################

#include<bits/stdc++.h>
using namespace std;
int main () {
int a,b,c;
cin>>a>>b>>c;
if(a<=b*c)
{
cout<<"Yes";
}
else
{
cout<<"No";
}
}
#######################################
