#include <iostream>
using namespace std;

bool esPar(int num)
{
    return num%2==0;
}

int main()
{   int prim, seg, ter, cuar, aux=0;
    cout<<"Ingrese el primer valor: "<<endl;
    cin>>prim;
    cout<<"Ingrese el segundo valor: "<<endl;
    cin>>seg;
    cout<<"Ingrese el tercer valor: "<<endl;
    cin>>ter;
    cout<<"Ingrese el cuarto valor: "<<endl;
    cin>>cuar;
    if(esPar(prim)==1){aux++;}
    if(esPar(seg)==1){aux++;}
	if(esPar(ter)==1){aux++;}
    if(esPar(cuar)==1){aux++;}
    
    cout<<"Se ingresaron "<<aux<<" valores pares";
      
    
    
    //Escriba su codigo aqui
    
    return 0;
}
