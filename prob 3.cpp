# include <iostream>
using namespace std;


/*C++ program to enter temperature in Celsius and convert it into Fahrenheit.*/


int main()
{
 float cel =0,f=0;
 cout<<"to convert temperature from  fahrenheit to celsius ";
 cout<<"\n \n temperature in fahrenheit";
 cin>>f;
 cel= (f-32)*((double )5/9);
 cout<<"\n \nthe temperature in celsius is: "<<cel;
 return 0;
}
