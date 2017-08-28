# include <iostream> 
using namespace std;

/*C++ program to enter length in centimeter and convert it into meter and kilometer.*/


int main()
{
  float cm=0 ,m=0,km=0;
  cout <<"distance in cm";
  cin >> cm;
  m=cm/100;
  km=m/1000;
  cout<<"\n \nThe length in m is: "<<m;
  cout<<"\n \nThe length in km is: "<<km;
  return 0;
}
