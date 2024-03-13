//abc092_a.cpp
################################
################################
################################
################################
################################
################################
################################
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, n, m;
    cin >> x >> y >> n >> m;
    int sum = 0;
    if (x > y)
    {
        sum += y;
    }
    else
    {
        sum += x;
    }
    if (n > m)
    {
        sum += m;
    }
    else
    {
        sum += n;
    }
    cout << sum << endl;
    return 0;
}
################################
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<min(a,b)+min(c,d);
	return 0;
}
################################
#include <iostream>
using namespace std;
    int main() {
    int a,b,c,d,ans;
    cin >>a>>b>>c>>d;
    ans=min(a,b)+min(c,d);
    cout <<ans;
}
################################
