
/*crear un programa en el que se ingrese una frase y cuente las vocales*/

#include <iostream>
using namespace std;

int contarVocales(string); /*que es un string? cadena de caracteres (char)ej: ['h','o','l','a']*/
bool esVocal(char);
int main(){
string frase;
int cantidad;
cout << "ingrese una frase"<<endl;
getline(cin,frase);
cantidad = contarVocales(frase);
cout << "Cantidad de vocales: "<<cantidad;
return 0;}

int contarVocales(string frase){
int suma = 0;for (int i=0;frase[i]!='\0';i++)
{
bool r = esVocal(frase[i]);if(r){suma++;}}
return suma;}
bool esVocal(char c){if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){return true;}
else{return false;}}
