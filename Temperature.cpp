#include <iostream>

using namespace std;

int main()
{
int gradF, gradC;

cout << "This progam is made to convert degrees farentheit to celcius and see if water will boil at that temperature" << endl;
cout << "Please type in the temperature in degrees farentheit" << endl;
cin >> gradF;
gradC= 5*(gradF-32)/9;
cout << "The temperetaure in degrees C is" << gradC << endl;
if (gradC>100){
cout << "This temperature will make water boil in normal conditions" << endl;
}
else if (gradC<100){
cout << "This temperature is not enough to boil water in normal conditions" << endl;
}

return 0;
}
