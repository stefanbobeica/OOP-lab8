#include "Portocale.h"
#include "Banana.h"
#include "Nuci.h"
#include "Morcovi.h"
using namespace std;

int main() {
    base **vectorica;
    base *aux;
 cout<<"====Exercitiul 2:===="<<endl;
    vectorica=new base*[10];
    vectorica[0]=new Nuci(200,25);
    vectorica[1]=new Portocale(8,9);
    vectorica[2]=new Banana(8);
    vectorica[3]=new Banana(5);
    vectorica[4]=new Morcovi(100,5);
    vectorica[5]=new Nuci(300,18);
    vectorica[6]=new Banana(25);
    vectorica[7]=new Morcovi(300,4);
    vectorica[8]=new Portocale(5,10);
    vectorica[9]=new Portocale(21,3);

    for(int i=0; i<9; i++)
    vectorica[i]->afisare();
    cout<<endl;

    cout<<"====Exercitiul 3:===="<<endl;
   float count=0;
   for(int i=0; i<9 ;i++){
       count=count+vectorica[i]->getPret();
   }
   cout<<"Pretul total al alimentelor este de: "<<count<<" lei";
   cout<<endl;
    cout<<"====Exercitiul 4:===="<<endl;
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++) {
           if(vectorica[i]->ordine() > vectorica[j]->ordine()){
               aux=vectorica[j];
               vectorica[j]=vectorica[i];
               vectorica[i]=aux;
           }
        }
    }
    for(int i=0; i<10; i++)
        vectorica[i]->afisare();

      cout<<"====Exercitiul 5:===="<<endl;
     int pretPortocale=0;
    for(int i=0 ;i<10;i++)
        if(vectorica[i]->isPortocale())
            pretPortocale=pretPortocale+vectorica[i]->getPret();

        cout<<"Pretul total al tuturor portocalelor este de: "<<pretPortocale;

      for(int i=0; i<10; i++)
          delete vectorica[i];
      delete[] vectorica;


        return 0;

}
