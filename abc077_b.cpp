abc077_b.cpp
##############################################
##############################################
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = floor(sqrt(n));
    cout << x * x<< endl;
    return 0;
}
##############################################
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int N;
    cin>>N;
    int t=sqrt(N);
    cout<<t*t<<endl;
}
##############################################
#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int n,ans=0;
  cin >> n;
  for (int i = 0; i <=sqrt(n) ; i++)
  {
    ans = i*i;
  }
  cout << ans <<endl;
}
##############################################
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
    int m = sqrt(n);
	cout << m*m;
	return 0;
}
##############################################
[python]
import math
n=int(input())
m=int(math.sqrt(n))
print(m**2)
##############################################
