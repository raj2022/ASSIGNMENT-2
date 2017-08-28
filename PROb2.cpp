# include <iostream>
using namespace std;


/*C++ program to enter temperature in Celsius and convert it into Fahrenheit.*/


int main()
{
 float cel =0,f=0;
 cout<<"to convert temperature from celsius to fahrenheit";
 cout<<"\n \n temperature in celsius";
 cin>>cel;
 f= (((double)9/5)*cel)+32;
 cout<<"\n \nthe temperature in fahrenheit is: "<<f;
 return 0;
}
