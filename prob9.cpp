#include <iostream>
#include<cmath>
using namespace std;

int main() 
{
int  a,b;
cout <<"sides of equilateral triangle";
cin >>a;
cout <<"area of triangle";
cin >>b;
b= (sqrt(3)/4)*a*a;
cout << "required area" << b;
return 0;
}
