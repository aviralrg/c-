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
    ~employee()
    {
        cout << "destructor called for id " << id << endl;
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
    employee me("Avi",10);
    me.print_name();
    me.print_id();
    for(int i = 0; i< 5; i++)
    {
        employee somebody;
        somebody.print_name();
        somebody.print_id();
        somebody.id = i;
        somebody.print_id();
    }// destructor for these id in for loop will be called at the end of every iteration the scope of those objects end
    return 0;
}//destructor for the me obejct should be called last