#include <iostream>
using namespace std;

int main()
{
    int x = -1;

    try
    {

        cout << "1" << endl;
        if (x < 0)
        {
            throw x;
            cout << "2" << endl;
        }
    }
    catch (int err)
    {
        cout << "3" << endl;
    }
    cout << "4" << endl;
}