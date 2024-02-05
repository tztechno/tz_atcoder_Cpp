//abc170_a variables.cpp
#####################################
#include<bits/stdc++.h>
using namespace std;
int main(){
  int x[5];
  for(auto&& t:x)cin>>t;
  cout<<distance(x,find(x,x+5,0)+1)<<endl;
}
#####################################
#include <bits/stdc++.h>
using namespace std;
int main() {
    int x[5];
    for (int i=0; i<5; i++) cin >> x[i];

    for (int i=0; i<5; i++) {
        if (x[i]==0) cout << i+1 << endl;
    }
    return 0;
}
#####################################
#include <iostream>
using  namespace std;
int main(){
    int x,y,z,w,e;
    cin>>x>>y>>z>>w>>e;
    int s = x+y+z+w+e;
    cout<<15-s;
    return 0;
}
#####################################
#include <iostream>
#include <vector>
int main() {
    std::vector<int> X(5);
    for (int i=0;  i<5; ++i) {
        std::cin >> X[i];
    }
    for (int i=0; i<5; ++i) {
        if (X[i] == 0) {
            std::cout << i+1 << std::endl;
        }
    }
    return 0;
}
#####################################
