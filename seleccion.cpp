#include <iostream>
using namespace std;
int main() {
    // Array = arreglo o coleccion o matriz
    // se utlizan para almacenar varios valores en una sola variable 
    int notas[4];
    notas[0]=80;
    notas[1]=65;
    notas[2]=60;
    notas[3]=75;
    for(int i=0; i<=3;i++) {
         cout<<i<<":"<<notas[i]<<endl;
    }
    
    system("pause");
}
