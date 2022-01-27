#include <iostream>
using namespace std;

void triple(int x);

int main() 
{
    triple(2);

    return 0;
}


void triple(int x)
{
    int c = 3 * x;
    cout << c <<endl;
}