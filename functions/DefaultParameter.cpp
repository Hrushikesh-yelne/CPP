#include<iostream>
using namespace std;
void myFunction(string country="INDIA")
{
    cout << country<<"\n";
}
int main()
{
    myFunction("sweaden");
    myFunction("china"); 
    myFunction("dubai"); 
    myFunction();
    return 0;
}