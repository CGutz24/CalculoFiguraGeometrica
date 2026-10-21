#include<iostream>
using namespace std;

float areaCuadrado(float l){
    float resultado=0;
    resultado=l*l;
    return resultado;
}
float volumenCilindro(float r, float h){
    float resultado=0;
    resultado= (3.1416*r*r*h);
    return resultado;
}
float volumenEsfera(float r){
    float resultado=0;
    resultado=((4/3)*3.1416*r*r*r);
    return resultado;
}


int main(){
    float radio=0, lado=0,altura=0, areatotal=0, volumentotal=0;
    int opcion=0;
    double const pi=3.1416;

    cout<<"Elija el calculo que desea realizar: "<<endl;
    cout<<"1. Calcular el Area de un cuadrado. "<<endl;
    cout<<"2. Calcular el volumen de un cilindro. "<<endl;
    cout<<"3. Calcular el volumen de una esfera. "<<endl;
    cout<<"4. Salir"<<endl;
    cin>>opcion;

    switch(opcion){
        case 1: 
        cout<<"Ingrese el lado del cuadrado. "<<endl;
        cin>>lado;

        areatotal= areaCuadrado(lado);
        cout<<"El area es: "<<areatotal<<endl;
        break;

        case 2:

        cout<<"Ingrese el valor del radio."<<endl;
        cin>>radio;
        cout<<"Ingrese el valor de la altura. "<<endl;
        cin>>altura;

        volumentotal= volumenCilindro(radio, altura);
        cout<<"El volumen es: "<<volumentotal<<endl;
        break;

        case 3:
        cout<<"Ingrese el valor del radio: "<<endl;
        cin>>radio;

        volumentotal= volumenEsfera(radio);
        cout<<"El volumen es: "<<volumentotal<<endl;
        break;

        default:
        cout<<"Salir. "<<endl;
        break;







    }

    

    


















    return 0;
}