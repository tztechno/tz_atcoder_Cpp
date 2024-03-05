//abc168_a.cpp
################################
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a%10==2||a%10==4||a%10==5||a%10==7||a%10==9)
		cout<<"hon";
	else if(a%10==0||a%10==1||a%10==6||a%10==8)
		cout<<"pon";
	else
		cout<<"bon";
	cout<<"\n";
	return 0;
}
################################
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r=n%10;
    if(r==2||r==4||r==5||r==7||r==9)
    {
        cout<<"hon"<<endl;
    }
    else if(r==0 || r==1 || r==6 || r==8)
    {
        cout<<"pon"<<endl;
    }
    else if(r==3)
    {
        cout<<"bon"<<endl;
    }
    return 0;
################################
#include <bits/stdc++.h>
using namespace std;

int main(){
    string N;
    cin >> N;
    reverse(N.begin(),N.end());
    if(N[0]=='3'){
        cout << "bon" << endl;
    }
    else if(N[0]=='0' || N[0] =='1' || N[0]=='6' || N[0]=='8'){
        cout << "pon" << endl;

    }
    else{
        cout << "hon" << endl;
    }
    

################################
#include <iostream>
#include <algorithm>

int main() {
    int a[] = {2, 4, 5, 7, 9};
    int b[] = {0, 1, 6, 8};

    int s;
    std::cin >> s;

    if (std::find(std::begin(a), std::end(a), s % 10) != std::end(a)) {
        std::cout << "hon" << std::endl;
    }
    else if (std::find(std::begin(b), std::end(b), s % 10) != std::end(b)) {
        std::cout << "pon" << std::endl;
    }
    else {
        std::cout << "bon" << std::endl;
    }

    return 0;
}

################################
