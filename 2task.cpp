#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

int main() 
{
    int a=3;
    double b=0.151;
    double result;
    result = (1-pow(cos(b/a*M_PI),2)/(0.5*exp(b))+(0.312*exp(a)));

  std:: cout<< result;//std:cout - виведення на консоль.
  
}