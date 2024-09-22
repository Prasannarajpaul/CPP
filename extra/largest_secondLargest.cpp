#include <iostream>
using namespace std;
int largestAmoungThree(int, int, int);
int secondLargestAmoungThree(int, int, int);

int largestAmoungThree(int a, int b, int c){
    if(a>=b && a>=c){
        return a;
    }else if(b>=a && b>=c){
        return b;
    }else{
        return c;
    }
}
int secondLargestAmoungThree(int a, int b, int c){
    if(a>=b && a>=c){
        if(b>=c){
            return b;
        }else{
            return c;
        }
    }else if(b>=a && b>=c){
        if(a>=c){
            return a;
        }else{}
        return c;
    }else{
        if(a>=b){
            return a;
        }else{
            return b;
        }
    }
}


int main(){
    int a,  b, c;
    cin>>a>>b>>c;
    cout<<largestAmoungThree(a, b, c)<<endl;
    cout<<secondLargestAmoungThree(a, b, c)<<endl;
}