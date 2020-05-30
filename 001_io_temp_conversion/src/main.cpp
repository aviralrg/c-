#include <iostream>

int main (void)
{
  int ftemp; // for temperature in farenheit
  
  std::cout<<"Enter temperature in farenheit: ";
  std::cin>>ftemp;
  int ctemp = (ftemp-32)*5/9;
  std::cout<<"Equivalent in Celsius is : " << ctemp << std::endl;
  return 0;
}
