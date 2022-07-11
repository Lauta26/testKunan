#include <iostream>
#include <iomanip>

using namespace std;

char may_car(char a){
	char c;
	c=toupper(a);
	return c;
}
int main()
{   char car,aux,A,U,I;
    cout<<"Ingrese el caracter: "<<endl;
    cin>>car;
    A=A;
    U=U;
    I=I;
    
    if(car/32==0 && car!=A && car !=U && car!=I) { 
        
        cout<<"El caracter "<<car<<" no se puede convertir"<<endl;
    }
    else{ 
		cout<<""<<may_car(car)<<endl;
			}
    
  
    
    return 0;
}
