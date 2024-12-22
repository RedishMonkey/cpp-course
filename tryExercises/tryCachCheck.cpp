#include <iostream>
using namespace std;

class A{
    int x;
    static int y;
public:
    A(int x =0)
    {
        y++;
        x=y;
        cout<<"x="<<x<<endl;
        cout<<"this->x=" << this->x << endl;
        
    }
    
    void operator- (int val)
    {
        y=val;
    }
    ~A()
    {
        y--;
    cout << "~A x=" << x << endl;
    }
};

int A::y = 100;

int main()
{
    A a1;
    a1-5;
    A a2;
    return 0;
}