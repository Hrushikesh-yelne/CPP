#include <iostream>
using namespace std;
void myFunction(string fname,int age)
{
    cout<<"name is "<<fname<<" age is "<<age<<"\n";
}
int main()
{
    myFunction("ajay",28);
    myFunction("raj",30);
    myFunction("rohit",31);
    return 0;
}