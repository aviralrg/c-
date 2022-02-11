#include <iostream>
using namespace std;
class employee
{
    public:
    string name;
    int id;
    employee()
    {
        cout << "Default constructor called" << endl;
        id = -1;
        name = "Not set";
    }
    employee(string e_name, int e_id)
    {
        cout << "Parameterized constructor called" << endl;
        id = e_id;
        name = e_name;
    }
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
    employee somebody;
    somebody.print_name();
    somebody.print_id();
    employee me("Avi",10);
    me.print_name();
    me.print_id();
    return 0;
}