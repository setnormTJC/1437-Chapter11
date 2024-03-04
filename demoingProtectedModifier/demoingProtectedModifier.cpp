#include <iostream>

using namespace std;

class BaseClass
{
private:
    int privateMemberVar; 

protected:
    string protectedMemberVar; 
};

class SubClass : public BaseClass
{
private: 
    int subClassMemberVar; 

public: 
    void printSubClass()
    {
        cout << SubClass::protectedMemberVar << endl;  //CHILD Class DOES have access
                                                //to a protected member var (of its parent) 
    }
};

int main()
{
    //friend  //to be discussed in Chapter 12 (or 13) 
    BaseClass baseClassObj; 
    //baseClassObj.protectedMemberVar //INACCESSIBLE!

    return 0;
}