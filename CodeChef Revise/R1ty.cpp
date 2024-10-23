// Can you guess what will happen when we print the following lines of code?

#include <iostream>
using namespace std;

int main() {
    cout<< I will complete one lesson of CPP every day;
} 

//'I' was not declared in this scope


// Since, the sentence is not enclosed within double quotes (" "). It will treat each word as a variable and checks for its initialization which is not there returning the word is not declared in this scope. So, this will happen during compile time and when it reaches I and stops compiling and returns the Compilation error along with the 'I was not declared in this scope.
