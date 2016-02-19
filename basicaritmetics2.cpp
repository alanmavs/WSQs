#include <iostream>
using namespace std;

int subtraction(int num1,int num2)
{
int res1;
res1=num1-num2;
return res1;
}

int product(int num1,int num2)
{
int res2;
res2=num1*num2;
return res2;
}
int division(int num1,int num2)
{
int res3;
res3=num1/num2;
return res3;
}
int remainder(int num1,int num2)
{
int res4;
res4=num1%num2;
return res4;
}
int main()
{
int num1, num2, res1, res2, res3, res4;

cout << "HEY FUN WITH NUMBERS" << endl;
cout << "please enter a number." << endl;
cin >> num1;
cout << "Please enter another number" << endl;
cin >> num2;

res1=subtraction(num1,num2);
res2=product(num1,num2);
res3=division(num1,num2);
res4=remainder(num1,num2);

cout << "the difference between is…" << res1 << endl;
cout << "The product between is…" << res2 << endl;
cout << "The integer between is…" << res3 << endl;
cout << "The remainder is.." << res4 << endl;

return 0;
 }
