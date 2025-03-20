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
    float convertirmWaW(float n);
    float convertirWadBW(float n);
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

float Calculadora::convertirmWaW(float n){
    return n/1000;
}

float Calculadora::convertirWadBW(float n){
    return 10*log10(n);
}

float Calculadora::calcular(){
    float dbW;
    dbW =a+(b+c);
//    w=(pow(10,))
    return dbW;
}


int main(){
    float a=0,b=0,c=0;
    int opc = 0;

    do
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"\tCalculadora de potencia"<<endl;
        cout<<"---------------------------------------"<<endl;
        cout<<"1. Convertir miliwatts (mW) a watts (W)"<<endl;

        cout<<"2. Convertir wats (W) a dBM"<<endl;
        cout<<"3. Calcular la potencia en W y en dBW"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"---------------------------------------"<<endl;
        cout<<"Seleccione una opcion:"<<endl;
        cin>>opc;
        cout<<"---------------------------------------"<<endl;
        if (opc==1)
        {
            cout<<"Ingrese el valor a convertir en miliwats (mW):"<<endl;
            cin>>a;
            Calculadora calc;
            float w = calc.convertirmWaW(a);
            cout << "El valor en watts es: " << w << " W" << endl;
        }

        else if (opc==2)
        {
            cout<<"Ingrese el valor a convertir en dBW:"<<endl;
            cin>>a;
            Calculadora calc;
            float dBW = calc.convertirWadBW(a);
            cout << "El valor en dBW es: " << dBW << " dBW" << endl;
        }
       
        else if (opc==3)
        {
            cout<<"Ingrese el valor de B en dBW:"<<endl;
            cin>>b;
        
            cout<<"Ingrese el valor de A en dBW:"<<endl;
            cin>>a;
        
            cout<<"Ingrese el valor de C en dB:"<<endl;
            cin>>c;
        
            // Crear un objeto de la clase Calculadora
            Calculadora calc(a, b, c);
        
            float potencia = calc.calcular();
            float potenciaW = calc.convertirdBWaW(potencia);
        
            cout<<"La potencia es de: "<<potencia<<" dBW"<<endl;
            cout<<"La potencia en Watts es de: "<<potenciaW<<" W"<<endl;
        }
        
        
    } while (opc!=4);
    

    return 0;
}

