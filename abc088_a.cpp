//abc088_a.cpp
###################################
###################################
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, A;
	cin >> N >> A;
	int count = 0;
	int sum;

	for (int i = 500; i <= N; i = i + 500) {
		count++;
	}

	sum = N - (500 * count);

	if (sum <= A) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}
###################################
#include <bits/stdc++.h>
using namespace std;
int main (){
  int a,b;
  cin >> a >> b;
  if (a%500<=b) cout << "Yes";
  else cout << "No";
}
###################################
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  
  if ((N%500) <= A) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

###################################
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	cin>>n>>a;
	if((n%500)<=a){
	  cout<<"Yes";
	} else {
	  cout<<"No";
    }
	return 0;
}
###################################
