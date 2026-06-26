#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    t=s;
    reverse(t.begin(),t.end());
    cout<<(s==t);
}
