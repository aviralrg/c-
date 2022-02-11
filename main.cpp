#include <iostream>
using namespace std;
class human
{
    public:
    string name;
    void print_name()
    {
        cout << "His name is " << name;
    }
};
int main (void)
{
    human me;
    me.name = "Avi";
    me.print_name();
    return 0;
}