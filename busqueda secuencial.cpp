#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main ()
{
 
    int encontrado, i, dato;
    int a[] = {4,4,3,2,8,4,7,0,4,54,545,23,567,13,657,0};
    encontrado = 0; 

    cout << "Ingrese el elemento a buscar: "; cin >> dato;

    for (i=0; i<sizeof(a)/sizeof(*a); i++)
	{
        if (a[i] == dato)
		{ 
         cout<<"El numero esta en la pocision: "<<i; cout<<"\n";
         encontrado = 1;
        }  
 	}
 
	if (encontrado ==0) cout << "El numero no se encuentra";
   
    getch();
    return 0;
}
