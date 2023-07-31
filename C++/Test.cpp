#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string a = "Hello", b = "World", c;
    cout << "Begin," << c.size() << endl;
    for (size_t i = 0; i < a.size(); i++)
    {
        // cout << "Befor," << c.size() << endl;
        // c.push_back(a[i]);
        // cout << "After," << c.size() << endl;

        c[i] = a[i];
    }
    cout << c << endl;
}