#include <iostream>


using namespace std;
int main(){
int sp, a, b, counter;
counter = 1 ;
sp = 1 ;

cout << "please write in the number" << endl;
cin >> a;
cout << "please write in the power" << endl;
cin >> b;

do {
sp= sp * a;
counter=counter+1;
} while (counter<=b);
cout << "The superpower of the numbers you tiped is" << sp << endl;

return 0;
}
