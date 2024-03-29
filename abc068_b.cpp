abc068_b.cpp
#########################################
#########################################
#########################################
#########################################
#########################################
#include<bits/stdc++.h>
using namespace std;
int co[1000],ans=1;int k=1;
void ffind(int n){
    while(n%2==0){
        n/=2;
        co[k]++;
    }
    k++;
}
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        ffind(i);
    }
    int maxx=co[1];
    for (int i = 1; i <= n; i++)
    {
        //cout<<co[i];
        if(co[i]>maxx){
            maxx=co[i];
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}
#########################################
#include<bits/stdc++.h>
using namespace std;
int A(){
	int n;
	cin >> n;
	int cs = 1;
	while(cs * 2 <= n){
		cs *= 2;
	}
	return cs;
}
int main(){
	cout << A() << endl;
	return 0;
}


#########################################
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int ans=1,i=0;
  
  while(1)
  {
    if(ans<=N && ans*2>N)
    {
        cout << ans << endl;
        return 0;
    }
    ans*=2;
    i++;
  }
}
#########################################
#include <iostream>
using namespace std;
int main(){
  int N;
  cin >> N;
  int max = 0;
  int ans = 1;
  for (int i=1; i<=N; i++){
    int t = i;
    int temp = 0;
    while (t % 2 == 0){
      t /= 2;
      temp++;
    }
    if (max < temp){
      max = temp;
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}
#########################################
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, ans = 1;
    cin >> n;
    for(int i = 0; i <= n; i++) {
        if (pow(2, i) <= n) {
            ans = pow(2, i);
        }
        else {
            break;
        }
    }  
    cout << ans;
    return 0;
}
#########################################
