//abc173_a payment.cpp

##############################
#include <iostream>
int main() {
    int a;
    std::cin >> a;
    std::cout << (1000 - a % 1000) % 1000 << std::endl;
}
##############################
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cout << ceil(n/1000.0)*1000-n << endl;
    return 0;
}
##############################
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    int a,b;
    cin>>a;
    b=a%1000;
    if(b>0)
    	cout<<1000-b;
    else
    	cout<<0;
    return 0;
}
##############################
#include <iostream>
int main() {
    int N;
    int A;
    std::cin >> N;
    A=(1000-N%1000)%1000;
    std::cout << A << std::endl;
    return 0;
}
##############################
