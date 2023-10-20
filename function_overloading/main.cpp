#include <iostream> 
using namespace std;

class demo_overloading {
public:
    void func (void) {
        cout << "This is func() with no argument" << endl;
    }
    void func (int i) {
        cout << "This is func(" << i << ") with interger argument" << endl;
    }
    void func (double d) {
        cout << "This is func(" << d << ") with double argument, double the data type not 2!" << endl;
    }
};

int main (void)
{
    class demo_overloading demo;
    demo.func();
    demo.func(1);
    demo.func(3.14);
    return 0;
}