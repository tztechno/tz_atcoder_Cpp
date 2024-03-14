//practiceA.cpp
##################################
1
2 3
test
##################################
##################################
##################################
##################################
##################################
##################################
##################################
##################################
##################################
##################################
##################################
[favorite]
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c;
  string s;
  cin >> a >> b >> c >> s;
  cout << a + b + c << endl << s << endl;
}
##################################
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  string s;
  cin >> a >> b >> c >> s;
  cout << a + b + c << ' ' << s << endl;
  
  return 0;
}
##################################
#include <iostream>

int main()
{
    int a, b, c;
    std::string s;

    std::cin >> a;
    std::cin >> b >> c;
    std::cin >> s;

    std::cout << a + b + c << ' ' << s.c_str() << std::endl;
}
##################################
#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    string s;
    cin >> a;
    cin >> b >> c;
    cin >> s;
    int G = a + b + c;
    string X = to_string(G) + " " + s;
    cout << X << endl;
}

##################################
#if __has_include("../include/bits/stdc++.h")
    #include "../include/bits/stdc++.h"
#else
    #include <bits/stdc++.h>
#endif
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    string s;
    cin >> s;
    cout << a+b+c << " " << s;
    return 0;
}
##################################
