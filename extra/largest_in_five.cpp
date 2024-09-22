#include<iostream>
using namespace std;
int largest_in_two(int, int);
int largest_in_three(int, int, int);
int largest_in_four(int, int, int, int);
int largest_in_four_using_largest_in_two(int, int, int, int);

int largest_in_two(int a, int b){
    if(a>=b){
        return a;
    }else{
        return b;
    }
}

int largest_in_three(int a, int b, int c){
    if(a>=b && a>=c){
        return a;
    }else if(b>=a && b>=c){
        return b;
    }else{
        return c;
    }
}

int largest_in_four(int a, int b, int c, int d){
    if(a>=b && a>=c && a>=d){
        return a;
    }else if(b>=a && b>=c && b>=d){
        return b;
    }else if(c>=a && c>=b && c>=d){
        return c;
    }else{
        return d;
    }
}

int largest_in_four_using_largest_in_two(int a, int b, int c, int d){
    // int x = largest_in_two(a, b);
    // int y = largest_in_two(c, d);
    // int z = largest_in_two(x, y);
    //The above can be simply written as
    return largest_in_two(largest_in_two(a, b), largest_in_two(c, d));
}

int main(){
    int a, b, c, d;
    a=5; b=7; c=9; d=11;
    cout<<largest_in_two(a, b)<<endl;
    cout<<largest_in_three(a, b, c)<<endl;
    cout<<largest_in_four(a, b, c, d)<<endl;

    cout<<largest_in_two(largest_in_two(a, b), largest_in_two(c, d))<<endl;
    cout<<largest_in_two(largest_in_three(a, b, c), d)<<endl;
    cout<<largest_in_four_using_largest_in_two(a, b, c, d)<<endl;

    
    return 0;
}