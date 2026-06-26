#include <iostream>
using namespace std;
int main(){
    int secret=7,x;
    while(cin>>x){
        if(x==secret){cout<<"Win";break;}
        cout<<"Try again\n";
    }
}
