#include <iostream> 
using namespace std;

class complex {
    int real;
    int img;
public:
    complex(int r = 0, int i = 0):real(r),img(i){
    };
    complex operator+(const complex obj){
        complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }
    void print(void){
        cout<< real << "i " << img << endl;
    }
};

int main (void)
{
    class complex c1 = complex(1,2);
    c1.print();
    class complex c2 = complex(2,3);
    c2.print();
    class complex c3 = c1 + c2;
    c3.print();
    return 0;
}