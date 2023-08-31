/*--------------------------------------------
 * Dato de Entrada: segundos (int)
 * Dato de Salida: hh, mm, ss (int)
 ---------------------------------------------*/


#include <iostream>
using namespace std;

void  convertir(int segundos, int & hh, int & mm, int & ss );

int main()
{ int segundos;
  int hh, mm, ss;

  do{
      cout << "Segundos : ";
      cin >> segundos;
  }while(segundos<2);

  convertir(segundos, hh, mm, ss);
  cout << "Equivale a: " << hh << " : " << mm << ": " <<  ss << "\n";

    return 0;
}


void  convertir(int segundos, int & hh, int & mm, int & ss )
{
    hh = segundos / 3600;
    segundos = segundos % 3600;
    mm = segundos / 60;
    ss = segundos % 60;
}