#include<iostream>
#include<strings>
using namespace std;

int main()
{
    string cars[5]={"VOlvo","Nano","bmw","sumo"};

    for (string car: cars){
        cout << car <<"\n";
    }
    return 0;
}
