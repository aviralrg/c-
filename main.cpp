#include <iostream>
using namespace std;
class employee
{
    public:
    string name;
    int id;
    void print_id();
    void print_name()
    {
        cout << "His name is " << name << endl;
    }
};

void employee::print_id()
{
    cout << "His id is " << employee::id << endl;
}
int main (void)
{
    employee me;
    me.name = "Avi";
    me.id = 10;
    me.print_name();
    me.print_id();
    return 0;
}