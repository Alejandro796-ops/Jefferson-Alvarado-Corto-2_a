#include <iostream>
#include <cmath>

using namespace std;

int main () {
 int edad;
 char option,zapato;
    int saldo = 200;

    cout << "Bienvenido a nuestro sistema de compra de zapatos" << ":label:" << endl;
    cout << "Por favor ingrese su edad: " << endl;
    cin >> edad;
    
    if (edad>=0 && edad<=12){
        cout <<"Talla recomendada: 34" << endl;
    }
     else if (edad>=13 && edad<=17){
        cout <<"Talla recomendada: 38" << endl;
    }
    else if (edad>=18 && edad<=64){
        cout <<"Talla recomendada: 40" << endl;
    }
    else if (edad>65){
        cout <<"Talla recomendada: 42" << endl;
    }

    else (){
        cout <<"Por favor ingrese un dato valido" << endl;
    }

    cout << "Seleccione su genero: " <<endl;
    cout <<"a. Hombre"<<endl;
    cout <<"b. Mujer"<<endl;
    cout <<"c. Mostrar todo"<<endl;
    cout <<"Option:"<<endl;
    cin >>option;

    switch (option)
    {
    case 'a':
        cout << "1. Zapato Deportivo: $80 "<<" Descuento del 20% "<<" Precio final: $64"<endl;
        int zapato1 = 64;
        
        cout << "2. Zapato Formal: $120 "<<" Descuento del 20% "<<" Precio final: $96"<endl;
         int zapato2 = 96;
        cout << "3. Zapato Premium: $250 "<<" Descuento del 20% "<<" Precio final: $200"<endl;
         int zapato3 = 200;
        cout << "Seleccione una opcion: " <<enld;
        cin>>zapato;
        switch (zapato)
        {
        case '1':
            if(saldo>=zapato1){
               int (restante = (saldo - zapato1));
                cout<<"Ha seleccionado: Zapato deportivo"<<endl;
                cout<<"Precio final con descuento "<<zapato1<<endl;
                cout<<"Compra realizada con exito"<<endl;
                cout<<"Su saldo restante es: "<<restante<<"$"<<endl;
            else if (saldo<zapato1){
                int (faltante = (zapato1 - saldo));
                cout<<"El saldo es insuficiente"<<endl;
                cout<<"Necesitas: "<<faltante<<"$"<< endl;
                }
                else(){
                    cout <<"Datos invalidos"<<endl;
                }
            }
            break;
            case '2':
            if(saldo>=zapato2){
               int (restante = (saldo - zapato2));
                cout<<"Ha seleccionado: Zapato Formal"<<endl;
                cout<<"Precio final con descuento "<<zapato2<<endl;
                cout<<"Compra realizada con exito"<<endl;
                cout<<"Su saldo restante es: "<<restante<<"$"<<endl;
            }
            break;
            case '3':
            if(saldo>=zapato3){
               int (restante = (saldo - zapato3));
                cout<<"Ha seleccionado: Zapato Premium"<<endl;
                cout<<"Precio final con descuento "<<zapato3<<endl;
                cout<<"Compra realizada con exito"<<endl;
                cout<<"Su saldo restante es: "<<restante<<"$"<<endl;
            }
            break;
        
        default:
        cout<<"Error de sistema, disculpe las molestias"<<endl;        
            break;
        }
        break;

    case 'b':
        cout << "4. Zapato Deportivo: $70 "<<" Descuento del 15% "<<" Precio final: $59.5"<endl;
        int zapato4 = 59.5;
        
        cout << "5. Zapato Formal: $100 "<<" Descuento del 15% "<<" Precio final: $85"<endl;
         int zapato5 = 85;
        cout << "6. Zapato Premium: $250 "<<" Descuento del 15% "<<" Precio final: $212.5"<endl;
         int zapato3 = 212.5;
        cout << "Seleccione una opcion: " <<enld;
        cin>>zapato;
        switch (zapato)
        {
        case '4':
            if(saldo>=zapato4){
               int (restante = (saldo - zapato4));
                cout<<"Ha seleccionado: Zapato deportivo"<<endl;
                cout<<"Precio final con descuento "<<zapato4<<endl;
                cout<<"Compra realizada con exito"<<endl;
                cout<<"Su saldo restante es: "<<restante<<"$"<<endl;
            else if (saldo<zapato4){
                int (faltante = (zapato4 - saldo));
                cout<<"El saldo es insuficiente"<<endl;
                cout<<"Necesitas: "<<faltante<<"$"<< endl;
                }
                else(){
                    cout <<"Datos invalidos"<<endl;
                }
            }
            break;
            case '2':
            if(saldo>=zapato5){
               int (restante = (saldo - zapato5));
                cout<<"Ha seleccionado: Zapato Formal"<<endl;
                cout<<"Precio final con descuento "<<zapato5<<endl;
                cout<<"Compra realizada con exito"<<endl;
                cout<<"Su saldo restante es: "<<restante<<"$"<<endl;
            }
            break;
            case '3':
            if(saldo>=zapato6){
               int (restante = (saldo - zapato6));
                cout<<"Ha seleccionado: Zapato Premium"<<endl;
                cout<<"Precio final con descuento "<<zapato6<<endl;
                cout<<"Compra realizada con exito"<<endl;
                cout<<"Su saldo restante es: "<<restante<<"$"<<endl;
            }
            break;
        
        default:
        cout<<"Error de sistema, disculpe las molestias"<<endl;        
            break;
        }
        break;

    case 'c':
    cout << "1. Zapato Deportivo: $80 "<<" Descuento del 20% "<<" Precio final: $64"<endl;
    cout << "2. Zapato Formal: $120 "<<" Descuento del 20% "<<" Precio final: $96"<endl;
    cout << "3. Zapato Premium: $250 "<<" Descuento del 20% "<<" Precio final: $200"<endl;
    cout << "4. Zapato Deportivo: $70 "<<" Descuento del 15% "<<" Precio final: $59.5"<endl;
    cout << "5. Zapato Formal: $100 "<<" Descuento del 15% "<<" Precio final: $85"<endl;
    cout << "6. Zapato Premium: $250 "<<" Descuento del 15% "<<" Precio final: $212.5"<endl;
    cout << "Seleccione una opcion: " <<enld;
        cin>>zapato;

         switch (zapato)
        {
        case '1':
            if(saldo>=zapato1){
               int (restante = (saldo - zapato1));
                cout<<"Ha seleccionado: Zapato deportivo"<<endl;
                cout<<"Precio final con descuento "<<zapato1<<endl;
                cout<<"Compra realizada con exito"<<endl;
                cout<<"Su saldo restante es: "<<restante<<"$"<<endl;
            else if (saldo<zapato1){
                int (faltante = (zapato1 - saldo));
                cout<<"El saldo es insuficiente"<<endl;
                cout<<"Necesitas: "<<faltante<<"$"<< endl;
                }
                else(){
                    cout <<"Datos invalidos"<<endl;
                }
            }
            break;
            case '2':
            if(saldo>=zapato2){
               int (restante = (saldo - zapato2));
                cout<<"Ha seleccionado: Zapato Formal"<<endl;
                cout<<"Precio final con descuento "<<zapato2<<endl;
                cout<<"Compra realizada con exito"<<endl;
                cout<<"Su saldo restante es: "<<restante<<"$"<<endl;
            }
            break;
            case '3':
            if(saldo>=zapato3){
               int (restante = (saldo - zapato3));
                cout<<"Ha seleccionado: Zapato Premium"<<endl;
                cout<<"Precio final con descuento "<<zapato3<<endl;
                cout<<"Compra realizada con exito"<<endl;
                cout<<"Su saldo restante es: "<<restante<<"$"<<endl;
            }
            break;
            case '4':
            if(saldo>=zapato4){
               int (restante = (saldo - zapato4));
                cout<<"Ha seleccionado: Zapato deportivo"<<endl;
                cout<<"Precio final con descuento "<<zapato4<<endl;
                cout<<"Compra realizada con exito"<<endl;
                cout<<"Su saldo restante es: "<<restante<<"$"<<endl;
            else if (saldo<zapato4){
                int (faltante = (zapato4 - saldo));
                cout<<"El saldo es insuficiente"<<endl;
                cout<<"Necesitas: "<<faltante<<"$"<< endl;
                }
                else(){
                    cout <<"Datos invalidos"<<endl;
                }
            }
            break;
            case '2':
            if(saldo>=zapato5){
               int (restante = (saldo - zapato5));
                cout<<"Ha seleccionado: Zapato Formal"<<endl;
                cout<<"Precio final con descuento "<<zapato5<<endl;
                cout<<"Compra realizada con exito"<<endl;
                cout<<"Su saldo restante es: "<<restante<<"$"<<endl;
            }
            break;
            case '3':
            if(saldo>=zapato6){
               int (restante = (saldo - zapato6));
                cout<<"Ha seleccionado: Zapato Premium"<<endl;
                cout<<"Precio final con descuento "<<zapato6<<endl;
                cout<<"Compra realizada con exito"<<endl;
                cout<<"Su saldo restante es: "<<restante<<"$"<<endl;
            }
            break;
        
        default:
        cout<<"Error de sistema, disculpe las molestias"<<endl;        
            break;
        } 
    default:
    cout<<"Error de sistema, disculpe las molestias"<<endl;
        break;
    }

    return 0;
}