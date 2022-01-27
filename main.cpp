#include <iostream>
using namespace std;

float gravity = 9.81;

void triple(int x);

int main() 
{
    triple(2);

    cout << gravity;

    return 0;
}


void triple(int x)
{
    int c = 3 * x;
    cout << c <<endl;
}