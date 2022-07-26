#include <iostream>
#include <string>
#include <fstream>



using namespace std;

int saldo_inicial = 1000;
int venta = 0;
int memoria = 0;
int memoria_de_venta = 0;
int cambio_final = 0;
int len = 0;


struct PRODUCTOS {
    string nombre;
    int ID;
    int Precio;
} Original, Hawaiana, Margarita, Queso, Combo, Extra;


string orden;
string User;
string User_Operations;
string metodoDpago;
string pedido[sizeof(len)];



void Start();
void menu();
void Cierre();
void Corte();
void setpedido();
void ingrediente_extra();
void Payment_method();
void extra_ingrediente();
void otro_ingrediente();
void seguir_orden();
void print_Tiked();
void Efectivo();
void Targeta();

// void Discount();
// void tiked();


int main(){

    Start();
    
return 0;
};

void Start(){

    cout << "\n***************** Welcome to UPY's PizzaTime ******************\n\n\n" << endl;
    cout << "Please enter your USER type; Si es cliente escriba client, Si es un operador escriba User1\n\t" << endl;
    getline(cin, User);
    
    menu();
};

void menu(){

    if (User == "User1"){

        cout << "Bienvenido Usuario vendedor, que operacion deseas realizar:\n" << endl;
        cout << "\n***********************************************************\n" << endl;
        cout << "Deseas terminar el corte de turno, escribe SI para finalizar" << endl;

        getline(cin, User_Operations);

        if (User_Operations == "SI"){
            Corte();
            Cierre();
        }
        if (User_Operations == "Si"){
            Corte();
            Cierre();
        }
        if (User_Operations == "si"){
            Corte();
            Cierre();
        }

        else {    
            Start();
        }
    }
    else if (User == "user1"){

        cout << "Bienvenido Usuario vendedor, que operacion deseas realizar:\n" << endl;
        cout << "\n***********************************************************\n" << endl;
        cout << "Deseas terminar el corte de turno, escribe SI para finalizar" << endl;

        getline(cin, User_Operations);

        if (User_Operations == "SI"){
            Corte();
            Cierre();
        }
        if (User_Operations == "Si"){
            Corte();
            Cierre();
        }
        if (User_Operations == "si"){
            Corte();
            Cierre();
        }

        else {    
            Start();
        }
    }
    else if (User == "client"){

        cout << "Bienvenido Usuario Cliente a la bodega virtual UPY's PizzaTime" << endl;
        cout << "aqui tiene nuestro menu!!!\n\n" << endl;


        ifstream myfile; myfile.open("menu.txt");
        string myline; 

        if (myfile.is_open()){ 

            char mychar; 
            while(myfile){
            
            getline(myfile, myline); 
            cout << myline << endl;
            }

        }
        
        cout << "\n\nQue le gustaria ordenar el dia de hoy?" << endl;
        cin >> orden;

        setpedido();
    }
    else if (User == "Client"){

        cout << "Bienvenido Usuario Cliente a la bodega virtual UPY's PizzaTime" << endl;
        cout << "aqui tiene nuestro catalogo de compra!!!\n\n" << endl;


        ifstream myfile; myfile.open("menu.txt");
        string myline; 

        if (myfile.is_open()){ 

            char mychar; 
            while(myfile){
            
            getline(myfile, myline); 
            cout << myline << endl;
            }

        }
        
        cout << "\n\nQue le gustaria ordenar el dia de hoy?" << endl;
        cout <<  "\nsi desea cancelar su orden escriba *Cancelar*" << endl;
        cin >> orden;

        setpedido();
    }
    else {

        cout << "(System): Error al acceder al sistema, intenta una vez mas" << endl;
        Start();
    }
};

void Cierre(){

    cout << "Upy's PizzaTime agradece tu colaboracion y preferencia, hasta pronto!!!" << endl;
};

void Corte(){


};

void setpedido(){

    // set ID:
    Original.ID = 001;
    Hawaiana.ID = 002;
    Margarita.ID = 003;
    Queso.ID = 004;
    Combo.ID = 011;
    Extra.ID = 012;

    // set price:
    Original.Precio = 90;
    Hawaiana.Precio = 115;
    Margarita.Precio = 100;
    Queso.Precio = 70;
    Combo.Precio = 35;
    Extra.Precio = 15;

    // set nombre:
    Original.nombre = "Peperoni Original";
    Hawaiana.nombre = "Hawaiana";
    Margarita.nombre = "Margarita (especias)";
    Queso.nombre = "Queso";
    Combo.nombre = "Refresco Incluido!!!";
    Extra.nombre = "Ingrediente agregado:";

    

    if (orden == "Clasica") {

       len++;
       pedido[sizeof(len)] = Original.nombre;
       venta = Original.Precio;
       memoria = memoria + venta;
    }
    else if (orden == "clasica"){

        len++;
        pedido[sizeof(len)] = Original.nombre;
        venta  = Original.Precio;
        memoria = memoria + venta;
    }
    else if (orden == "Hawaiana") {

        len++;
        pedido[sizeof(len)] = Hawaiana.nombre;
        venta = Hawaiana.Precio;
        memoria = memoria + venta;
    }
    else if (orden == "hawaiana") {

        len++;
        pedido[sizeof(len)] = Hawaiana.nombre;
        venta = Hawaiana.Precio;
        memoria = memoria + venta;
    }
    else if(orden == "Margarita") {

        len++;
        pedido[sizeof(len)] = Margarita.nombre;
        venta = Margarita.Precio;
        memoria = memoria + venta;
    }
    else if ( orden == "margarita") {

        len++;
        pedido[sizeof(len)] = Margarita.nombre;
        venta = Margarita.Precio;
        memoria = memoria + venta;
    }
    else if (orden == "Queso"){

        len++;
        pedido[sizeof(len)] = Queso.nombre;
        venta = Queso.Precio;
        memoria = memoria + venta;
    }
    else if (orden == "queso"){

        len++; 
        pedido[sizeof(len)] = Queso.nombre;
        venta = Queso.Precio;
        memoria = memoria + venta;
    }
    else if (orden == "Cancelar"){

        Cierre();

    }
    else {
        cout << "Seguro eres despistado y escribiste algo mal, vamos intentalo otra vez, se que puedes :) " << endl;

        menu();
    }
    
    ingrediente_extra();
};

void ingrediente_extra(){

    string x; //variable para valorar si queire un ingrediente extra

    cout << "Deseas agregar algun ingrediente extra?" << endl;
    cin >> x;


    if (x == "si"){

        len++;
        
        extra_ingrediente();

    }
    else if (x == "Si"){

        len++;
        
        extra_ingrediente();

    }
    else if (x == "SI"){

        len++;
        
        extra_ingrediente();

    }
    else if (x == "no"){

        seguir_orden();
    }
    else if( x == "No"){

        seguir_orden();
    }
    else if (x == "NO"){

        seguir_orden();
    }
    else {

        cout << "esta opcion solo acepta entradas de si o no, intentalo nuevamente por favor" << endl;

        ingrediente_extra();
        
    }
    
};

void extra_ingrediente(){

    string y; // variable para valorar cual ingradiente extra desea el cliente

    cout << "Que ingrediente deseas agregar?" << endl;
    cout << "\n\tescribe combo para agregarle refreco a tu orden.\n\tescribe extra para agregar un ingrediente extra." << endl;
    cin >>  y;

    if (y == "combo"){
        
        pedido[sizeof(len)] = Combo.nombre;
        venta = Combo.Precio;
        memoria = memoria + venta;

    }
    else if (y == "Combo"){

        pedido[sizeof(len)] = Combo.nombre;
        venta = Combo.Precio;
        memoria = memoria + venta;

    }
    else if (y == "extra"){

        string e;
        cout << "Que ingrediente extra deseas?" << endl;
        cin >> e;
        Extra.nombre = ("ingrediente extra: ", e);
        cout << "entendido!!!" << endl;

        pedido[sizeof(len)] = Extra.nombre;
        venta = Extra.Precio;
        memoria = memoria + venta;

    }
    else if (y == "Extra"){

        string e;
        cout << "Que ingrediente extra deseas?" << endl;
        cin >> e;
        Extra.nombre = ("ingrediente extra", e);
        cout << "entendido!!!" << endl;

        pedido[sizeof(len)] = Extra.nombre;
        venta = Extra.Precio;
        memoria = memoria + venta;

    }
    else {

        cout << "comando no existente, intentalo de nuevo\n" << endl;

        extra_ingrediente();

    }

    otro_ingrediente();

;}

void otro_ingrediente(){

    string w;

    cout << "Deseas agregar otro ingrediente?" << endl;
    cin >> w;
    
    if (w == "Si"){

        len++;

        extra_ingrediente();
    }
    else if (w == "si"){

        len++;

        extra_ingrediente();
    }
    else if (w == "SI"){

        len++;

        extra_ingrediente();
    }
    else if (w == "no"){

        seguir_orden();
    }
    else if (w == "No"){

        seguir_orden();
    }
    else if (w == "NO"){

        seguir_orden();
    }
    else {

        cout << "esta entrada solo acepta respuestas de si y no, porfavor intentalo de nuevo" << endl;

        otro_ingrediente();
    }
};

void seguir_orden(){
    
    string x;

    cout << "desea agregar algo mas a su orden?" << endl;
    cin >> x;

    if (x == "si"){

        len++;

        menu();
    }
    else if (x == "Si"){

        len++;

        menu();
    }
    else if (x == "SI"){

        len++;

        menu();
    }
    else if (x == "NO"){

        Payment_method();
    }
    else if (x == "No"){

        Payment_method();
    }
    else if (x == "no"){

        Payment_method();
    }
    else {

        cout << "Esta entrada solo acepta respuestas de si y no, por favor intentalo de nuevo" << endl;
    }

};

void Payment_method(){

    cout << "precio a pagar: " << memoria << "\n" << endl;

    cout << "Cual sera su metodo de pago?" << endl;

    cout << "> Escriba Efectivo para pagos en fisico\n> Escriba Targeta si desea pagar por transferencia" << "\n" << endl;
    cout << "lamentamos informarle que no aceptamos pagos con credito." << endl;
    cin >> metodoDpago;

    Targeta();

    Efectivo();

};

void print_Tiked(){

    string filename("Tiked.txt");
    fstream output_fstream;

    output_fstream.open(filename, std::ios_base::out);
    if (!output_fstream.is_open()) {
        cerr << "A ocurrido un Error, Intentelo nuevamente" << filename << '\n';

        print_Tiked();
    } 
    else {

        output_fstream << "*************************************************\n" << endl;
        output_fstream << "          Gracias por Comprar en UPY's           " << endl;
        output_fstream << "\n*************************************************" << endl;
        output_fstream << "\n" << endl;
        output_fstream << "Su compra ha sido realizada con exito!!!" << endl;
        output_fstream << "precio a pagar:\t " << "$" << memoria << endl; 
        output_fstream << "numero de items pedidos:\t" << len << endl;
        for (int  i = 0; i <= len; i++){

            output_fstream << pedido[i] << endl;
        }

        cerr << "\n**********************************************\n" << endl;
        cerr << "Su Tiked esta listo, Gracias por su compra!!!\n" << endl;
    }
};

void Efectivo(){


    if (metodoDpago == "Efectivo"){

        int cambio_client;
        string cambio;
        cout << "Desea cambio de algun tipo al momento de realiazar su pago?" << endl;
        cin >> cambio;

        if (cambio == "NO"){

            cout << "entendido, disfrute de su comida y gracias por la preferencia" << endl;
        }
        else if (cambio == "No"){

            cout << "entendido, disfrute de su comida y gracias por su preferencia" << endl;
        }
        else if (cambio == "no"){

            cout << "entendido, disfrute de su comida y gracas por su preferencia" << endl;
        }
        else if (cambio == "SI"){

            cout << "Cual es el monto de dinero para el que necesita cambio" << endl;
            cin >> cambio_client;

            if (cambio_client - venta < 0){

                cout << "El monto con e que desea pagar es insuficiente" << endl;
                cout << "Ingrese un monto de efectivo valido" << endl;

                Efectivo();
            }
            else {

                cambio_final = cambio_client - venta;

                cout << "Su cambio sera de: " << cambio_client - venta << endl;
                cout << "Disfrute su comida y gracias por su preferencia" << endl;
            }
        }
        else if (cambio == "Si"){

            cout << "Cual es el monto de dinero para el que necesita cambio" << endl;
            cin >> cambio_client;

            if (cambio_client - venta < 0){

                cout << "El monto con e que desea pagar es insuficiente" << endl;
                cout << "Ingrese un monto de efectivo valido" << endl;

                Efectivo();
            }
            else {

                cambio_final = cambio_client - venta;

                cout << "Su cambio sera de: " << cambio_client - venta << endl;
                cout << "Disfrute su comida y gracias por su preferencia" << endl;
            }
        }
        else if (cambio == "si"){

            cout << "Cual es el monto de dinero para el que necesita cambio" << endl;
            cin >> cambio_client;

            if (cambio_client - venta < 0){

                cout << "El monto con e que desea pagar es insuficiente" << endl;
                cout << "Ingrese un monto de efectivo valido" << endl;

                Efectivo();
            }
            else {

                cambio_final = cambio_client - venta;

                cout << "Su cambio sera de: " << cambio_client - venta << endl;
                cout << "Disfrute su comida y gracias por su preferencia" << endl;
            }
        }
        else {

            cout << "esta entrada solo acapta respuestas de si y no" << endl;
            
            Efectivo();

        }
    }
        if (metodoDpago == "efectivo"){

        int cambio_client;
        string cambio;
        cout << "Desea cambio de algun tipo al momento de realiazar su pago?" << endl;
        cin >> cambio;

        if (cambio == "NO"){

            cout << "entendido, disfrute de su comida y gracias por la preferencia" << endl;
        }
        else if (cambio == "No"){

            cout << "entendido, disfrute de su comida y gracias por su preferencia" << endl;
        }
        else if (cambio == "no"){

            cout << "entendido, disfrute de su comida y gracas por su preferencia" << endl;
        }
        else if (cambio == "SI"){

            cout << "Cual es el monto de dinero para el que necesita cambio?" << endl;
            cin >> cambio_client;


            if (cambio_client - venta < 0){

                cout << "El monto con e que desea pagar es insuficiente" << endl;
                cout << "Ingrese un monto de efectivo valido" << endl;

                Efectivo();
            }
            else {
                
                cambio_final = cambio_client - venta;

                cout << "Su cambio sera de: " << cambio_client - venta << endl;
                cout << "Disfrute su comida y gracias por su preferencia" << endl;
            }

            print_Tiked();

        }
        else if (cambio == "Si"){

            cout << "Cual es el monto de dinero para el que necesita cambio?" << endl;
            cin >> cambio_client;
        
            if (cambio_client - venta < 0){

                cout << "El monto con e que desea pagar es insuficiente" << endl;
                cout << "Ingrese un monto de efectivo valido" << endl;

                Efectivo();
            }
            else {

                cambio_final = cambio_client - venta;

                cout << "Su cambio sera de: " << cambio_client - venta << endl;
                cout << "Disfrute su comida y gracias por su preferencia" << endl;
            }

            print_Tiked();

        }
        else if (cambio == "si"){

            cout << "Cual es el monto de dinero para el que necesita cambio?" << endl;
            cin >> cambio_client;

            if (cambio_client - venta < 0){

                cout << "El monto con e que desea pagar es insuficiente" << endl;
                cout << "Ingrese un monto de efectivo valido" << endl;

                Efectivo();
            }
            else {

                cambio_final = cambio_client - venta;

                cout << "Su cambio sera de: " << cambio_client - venta << endl;
                cout << "Disfrute su comida y gracias por su preferencia" << endl;
            }

            print_Tiked();
        }
        else {

            cout << "Esta entrada solo acapta respuestas de si y no" << endl;
            
            Efectivo();

        }
    }

};

void Targeta(){

    if (metodoDpago == "Targeta"){

        memoria_de_venta = memoria_de_venta + memoria;

        cout << "Gracias por comprar en UPY's PizzaTime, Esperamos verlo pronto nuevamente!!!" << endl;

        print_Tiked();
    }
    else if (metodoDpago == "targeta"){

        memoria_de_venta = memoria_de_venta + memoria;

        cout << "Gracias por comprar en UPY's PizzaTime, Esperamos verlo pronto nuevamente!!!" << endl;

        print_Tiked();
    }
};

