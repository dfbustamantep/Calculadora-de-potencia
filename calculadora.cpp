#include<iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

class Calculadora
{
private:
    float a,b,c;
public:
    Calculadora(float a,float b,float c);
    Calculadora();
    ~Calculadora();
    float convertirdBWaW(float n);
    float calcular();
};

Calculadora::Calculadora(float a,float b,float c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}

Calculadora::Calculadora()
{
    a=0;
    b=0;
    c=0;
}

Calculadora::~Calculadora()
{
}

float Calculadora::convertirdBWaW(float n){
    return pow(10,n/10);
}

float Calculadora::calcular(){
    float dbW;
    dbW =a+(b+c);
//    w=(pow(10,))
    return dbW;
}
main(){
    float a=0,b=0,c=0;
    cout<<"---------------------------------------"<<endl;
    cout<<"\tCalculadora de potencia"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Ingrese el valor de B en decibell wats:"<<endl;
    cin>>b;

    cout<<"Ingrese el valor de A en decibell wats:"<<endl;
    cin>>a;

    cout<<"Ingrese el valor de C en decibells:"<<endl;
    cin>>c;

    // Crear un objeto de la clase Calculadora
    Calculadora calc(a, b, c);

    float potencia = calc.calcular();
    float potenciaW = calc.convertirdBWaW(potencia);

    cout<<"La potencia es de: "<<potencia<<" dBW"<<endl;
    cout<<"La potencia es de: "<<potenciaW<<" W"<<endl;

}

