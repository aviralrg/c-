#include <iostream>

int main (void)
{
  float rad;
  const float PI = 3.14159F;
  
  std::cout<<"Enter radius of circle: ";
  std::cin>>rad;
  float area = PI * rad * rad;
  std::cout<<"Area of circle is : " << area << std::endl;
  return 0;
}
