#include <iostream>
using namespace std;

int main()
{
int num1, num2, res1, res2, res3, res4;


cout << "please enter a number." << endl;
cin >> num1;
cout << "Please enter another number" << endl;
cin >> num2;
res1=num1-num2;
res2=num1*num2;
res3=num1/num2;
res4=num1%num2;
cout << "the difference between is…" << res1 << endl;
cout << "The product between is…" << res2 << endl;
cout << "The integer between is…" << res3 << endl;
cout << "The remainder is.." << res4 << endl;

return 0;
 }
