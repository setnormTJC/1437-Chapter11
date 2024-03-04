#include <iostream>

using namespace std;

int main()
{

    using integer = int; //this is an ALIAS!  
    integer a = 32; 

    cout << a << endl; 

    cout.operator<<(4.21) << endl; 
    //cout.~basic_ios
    cout << "Hello World";

    return 0;
}