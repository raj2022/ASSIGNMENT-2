#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
 
float P,T , R ,CI ;

cout <<"ENTER P ,T, R";
cin >>P>>T>>R;
CI=P*pow((1+R/100),T);


cout << "CI" << CI;

return 0;
}
