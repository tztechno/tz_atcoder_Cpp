abc073_b.cpp
#######################################
#######################################
#######################################
#######################################
#######################################
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,x;
  cin >>N;
  x=0;
  for(int i=0;i<N;++i){
    int s,r;
    cin>>s >>r;
    x+=r-s+1;
  }
cout << x <<endl;
}

#######################################
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N ;
  int count = 0;
  for(int i = 0; i < N; i++){
    int a,b;
    cin >> a >> b ;
    count += b-a+1;
  }
  cout << count << endl;
}
    

#######################################
[自力AC]
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
    int t = 0;
    for (int i = 0; i <n; i+=1) {
        int l,r;
        std::cin >> l >> r;
        t+=r-l+1;    
    }
    cout << t << endl;
}
#######################################
