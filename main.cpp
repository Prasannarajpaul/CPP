#include<iostream>
using namespace std;
int main(){
    int t, A, B, X, Y;
    cin>>t;
    while(t--){
        cin>>X>>Y>>A>>B;
        (X!=A && Y!=B) && (X!=B && Y!=A) ? cout<<2 :((X==A && Y==B) || (X==B && Y==A) ? cout<<0 : cout<<1);
        cout<<endl;
    }

    
}
// 3
// 4 3 1 2
// 4 2 1 2
// 2 1 1 2

// 2
// 1
// 0