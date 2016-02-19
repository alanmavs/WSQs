#include <iostream>

using namespace std;
int main()
{
int inicial, final, contador=0;

cout << "\neste programa sumara el rango de los numero que igreses" << endl;
cout <<"\nporfavor ingrese el numero inicial"<< endl;
cin >> inicial;
cout << "\ningrese el segundo numero" << endl;
cin >>final;

do{
contador=contador+inicial;
inicial=inicial+1;
}while(inicial<=final);


cout <<"\nel resultado de la suma es="<<contador;
return 0;
}
