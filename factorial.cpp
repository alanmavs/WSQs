#include <iostream>
using namespace std;

int f, n, op;
char answer;

int facto(int x){
op=1;
for (n = 1; n <= x; n++){

op = op * n;
 }

return op;
}

int main(){

do {
 cout << "Enter the number that you want to obtain the factorial from: " << endl;
 cin >> f;
 cout << "The factorial of" << f << "is equal to:" << facto(f) << endl;
 cout << "Do you want to try another number? (type y if you do, type anything else if not): " << endl;
 cin >> answer;

} while (answer == 'y');

cout << "Thanks for using my program!";
}
