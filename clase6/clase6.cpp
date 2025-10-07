#include <iostream>
#include <vector>
#include <string>

using namespace std;
bool capicua(int n)
{
    string aux = to_string(n);
    if (aux.at(0) == aux.at(5) && aux.at(1) == aux.at(4) && aux.at(2) == aux.at(3))
    {
        return true;
    }
    return false;
}
int ax = 10;
int main()
{
    int ax = 1022;
    cout << ax;
}
