#include<iostream>
#include<string>
/*
metodos de string:
length()
size()
append()
insert()
empty() -> bool

*/
using namespace std;


int main(){
    string userName = "Nico";
    /*
    cout<<"Lenght: "<< userName.length() << endl;
    cout<<"Size: "<< userName.size() << endl;
    if (userName.empty()){
        cout<<"El string esta vacio "<<endl;
    }else{
        cout<<"Bienvenido " << userName;
    }


    cout<<"Esta vacio userName?? " <<(userName.empty() ? "El string esta vacio" : "Bienvenido ") << userName;
    */
    string fraseIncompleta ="Hola a todes quiero que agreguen algo a la frase ";
    //fraseIncompleta.append("Mundo, bienvenidos al himalaya");
     //cout<<"Lenght: "<< s.length() << endl;

    fraseIncompleta.insert(fraseIncompleta.length(),"mundo");
    cout << fraseIncompleta;





    return 0;
}
