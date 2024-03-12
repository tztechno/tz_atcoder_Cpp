//abc091_a.cpp
################################
################################
################################
#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
#define ll long long
#define ld long double
#define rep(i, n) for(ll i = 0; i < n; i++)
#define rrep(i, n) for(ll i = n-1; i >= 0; i--)
#define rep2(i, a, b) for(ll i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define UNIQUE(v) v.erase(std::unique(v.begin(), v.end()), v.end());
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SZ(x) ((ll)(x).size())
#define eb emplace_back
#define fi first
#define se second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define endl '\n'
void Yes(bool i = true){ cout << (i ? "Yes" : "No") <<  '\n';}
template<class T> using pq = priority_queue< T >;
template<class T> using pqg = priority_queue< T , vector< T >, greater< T >>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
template<class T>
T ceil_div(T a, T b) {
    if(b < 0) a = -a, b = -b;
    return (a >= 0 ? (a + b - 1) / b : a / b);
}
template<class T>
T floor_div(T a, T b) {
    if(b < 0) a = -a, b = -b;
    return (a >= 0 ? a / b : (a - b + 1) / b);
}
const int inf = 1001001001;
const ll INF = 1001001001001001001;
const double PI = acos(-1);
bool range(int y, int x, int h, int w){
  return (0 <= y && y < h && 0 <= x && x < w);
}

void OUT() { cout << endl; }
template <class Head, class... Tail> void OUT(const Head &head, const Tail &...tail) {
    cout << head;
    if(sizeof...(tail)) cout << ' ';
    OUT(tail...);
}

int dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};
int dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};
pair<ll, ll> rotate(ll i, ll j, ll n){
  return {n-1-j, i};
}
//using mint = modint998244353;
//const int MOD = 998244353;
using mint = modint1000000007;
const int MOD = 1000000007;

signed main(){
  cout << fixed << setprecision(15);
  
  int a, b;
  cin >> a >> b;
  int c;
  cin >> c;
  Yes(a + b >= c);
  return 0;
}
################################
#include <iostream>
using namespace std;

int main() {
int a,b,c;
cin>>a>>b>>c;
if (a+b>=c){cout<<"Yes";}  
else cout<<"No";
}
################################
#include <iostream>
#include <string>
using namespace std;
int main()
{		   
	int A, B, C , sum;
	cin >> A >> B >> C;
	sum = A + B;
	if (sum >= C) {

		cout << "Yes";

	}
	else
		cout << "No"; 
}
################################
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b >= c)
		cout << "Yes" << endl;
	else
		cout << "No";
	return 0;
}
################################
#include <iostream>
using namespace std;
int main()
{int a,b,c,e;
cin >>a>>b>>c;
if(1<=a&&a<=500&&1<=b&&b<=500&&1<=c&&c<=1000){
e=a+b;
if(e>=c)
cout <<"Yes";
else cout<<"No";}
    return 0;
}
################################
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    string ans;
    if (a+b>=c) {
      ans="Yes";        
    }
    else {
      ans="No";
    }
    cout<<ans<<endl;     
    return 0;
}
################################
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b>=c) {
    cout<<"Yes"<<endl;        
    }
    else {
    cout<<"No"<<endl;          
    }
    return 0;
}
################################
