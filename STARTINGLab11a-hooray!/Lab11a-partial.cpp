#include <iostream>
#include "Store.h"

using namespace std;

int main()
{
    Store someStore{ "Wal-mart", 12345678234567213456.12 };
    someStore.print(); 

    cout << std::boolalpha; 
    cout << "\n\n";

    WebStore amazon{ "AMAZON!", 9999999.17, "www.amazon.com", true };
    amazon.print(); 
    return 0;
}