#ifndef _CLASE_ORDENADOR
#define _CLASE_ORDENADOR
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "time.h"
using namespace std;

class Ordenador{
private:
//=============================MERGESORT==========================================================
void merge(int * ArregloPrincipal, int Izq, int Medio, int Der){
    int i, j, k;
    int  TamArreglo1 = Medio - Izq + 1;
    int TamArreglo2 =  Der - Medio;
    int *ArrUno=new int[TamArreglo1];
    int * ArrDos=new int[TamArreglo2];

    //Se copian los sub arreglos
    for (i = 0; i < TamArreglo1; i++)
        ArrUno[i] =  ArregloPrincipal[Izq + i];
    for (j = 0; j < TamArreglo2; j++)
        ArrDos[j] =  ArregloPrincipal[Medio + 1+ j];
    i = 0;//indice del arreglo 1
    j = 0;//indice del arreglo 2
    k = Izq;//indice del arreglo general

    //se comparan los subarreglos y se colocan en el arreglo mezclado
    while (i < TamArreglo1 && j < TamArreglo2){
        if (ArrUno[i] <= ArrDos[j]){
             ArregloPrincipal[k] = ArrUno[i];
             i++;
        }
        else{
             ArregloPrincipal[k] = ArrDos[j];
             j++;
        }
        k++;
    }
    //Se mueven los elementos restantes de los arreglos al arreglo general
    while (i<TamArreglo1){
         ArregloPrincipal[k] = ArrUno[i];
        i++;
        k++;
    }
    while (j<TamArreglo2){
         ArregloPrincipal[k] = ArrDos[j];
        j++;
        k++;
    }
}

void mergeSortR(int * ArregloPrincipal, int Izq, int Der){
    if (Izq < Der){
        int m = Izq+(Der-Izq)/2;
        mergeSortR(ArregloPrincipal, Izq, m);
        mergeSortR(ArregloPrincipal, m+1, Der);
        //------------------------
        merge(ArregloPrincipal, Izq, m, Der);
    }

}
//=========================HEAPSORT============================================
void BuildMaxHeap(int * Arreglo,int tamano, int &HeapSize){
    HeapSize=tamano;
    for (int i = tamano / 2 ; i >=0; i--){
        Heapify(Arreglo,tamano, i,HeapSize);

    }
}
   void Heapify(int * arreglo,int tamano,int indice,int HeapSize){
        int mayor;
        int izquierda=2*indice+1;//inicializamos el hijo derecho e izquierdo
        int derecha=2*indice+2;

        //se pregunta si el padre es menor a su hijo izquierdo
        if(izquierda<=HeapSize && arreglo[izquierda]>arreglo[indice])
            mayor=izquierda;
        else
            mayor=indice;

        //se pregunta si el padre es menor al hijo derecho
        if(derecha<=HeapSize && arreglo[derecha]>arreglo[mayor])
            mayor=derecha;
        //dado el caso intercambiamos
        if(mayor!=indice){
            int aux;
            aux=arreglo[indice];
            arreglo[indice]=arreglo[mayor];
            arreglo[mayor]=aux;
            Heapify(arreglo,tamano,mayor,HeapSize);

        }

}
//=========================QUICKSORT=============================
   void QuicksortR(int * Arreglo, int izq, int der){
       if(izq<der){
           int indice=Partition(Arreglo,izq,der);
           QuicksortR(Arreglo,izq,indice-1);
           QuicksortR(Arreglo,indice+1,der);
       }

   }

   int Partition(int * Arreglo,int inicio,int final){
       int x=Arreglo[final];//pivote
       int indice=inicio-1;
       //preguntamos si es menor o igual al pivote, dado el caso se intercambia
       //con quien este en la posicion "indice del arreglo"
       for(int i=inicio;i<final;i++){
           if(Arreglo[i]<=x){
               int aux;
               indice++;
               aux=Arreglo[indice];
               int var=Arreglo[i];
               Arreglo[indice]=Arreglo[i];
               Arreglo[i]=aux;
           }
       }
       //intercambiamos con el pivote
       int aux;
       aux=Arreglo[indice+1];
       Arreglo[indice+1]=Arreglo[final];
       Arreglo[final]=aux;

       return indice+1;

   }
//================================RADIXSORT===========================================================
   //metodo para asociar residuo con posicion el vector
   //para asi incrementar las ocurrencias de este

   int Indice(int numero){
       switch (numero) {
       case -9:
           return 0;
           break;
       case -8:
           return 1;
           break;
       case -7:
           return 2;
           break;
       case -6:
           return 3;
           break;
       case -5:
           return 4;
           break;
       case -4:
           return 5;
           break;
       case -3:
           return 6;
           break;
       case -2:
           return 7;
           break;
       case -1:
           return 8;
           break;
       case 0:
           return 9;
           break;
       case 1:
           return 10;
           break;
       case 2:
           return 11;
           break;
       case 3:
           return 12;
           break;
       case 4:
           return 13;
           break;
       case 5:
           return 14;
           break;
       case 6:
           return 15;
           break;
       case 7:
           return 16;
           break;
       case 8:
           return 17;
           break;
       case 9:
           return 18;
           break;


       default:
           break;
       }
   }

   int Mayor(int * Arreglo, int numero)
   {
       int max = Arreglo[0];
       for (int i = 1; i < numero; i++)
           if (Arreglo[i] > max)
               max = Arreglo[i];
       return max;
   }
   void countSort(int  * arreglo, int tamano, int exp)
   {
       long int * final=new long int [tamano];
       int i, Ocurencias[19] = {0};
       //contamos cuantas veces aparecio cada residuo de -9 a 9
       for (i = 0; i < tamano; i++){
           Ocurencias[ Indice((arreglo[i]/exp)%10) ]++;
       }
       //sumamos la cantidad de la posicion actual con la
       //suma total de las previas
       for (i = 1; i < 19; i++){
           Ocurencias[i] += Ocurencias[i - 1];
       }


       for (i = tamano - 1; i >= 0; i--) {
           //se toma el ultimo, se coloca en el vector nuevo en el indice que
           //esté en la posicion del residuo en el vector de ocurrencias -1
           //ya que se como se ve, hay que decrementar las ocurrencias
           final[Ocurencias[ Indice((arreglo[i]/exp)%10) ] - 1] = arreglo[i];
           //decrementamos el vectr de ocurrencias
           Ocurencias[ Indice((arreglo[i]/exp)%10) ]--;
       }
        //movemos al arreglo original
       for (i = 0; i < tamano; i++){
           arreglo[i] = final[i];
       }

   }
//=========================MEDIANA==============================================
   int MedianaR(int * Arreglo, int izq, int der,int mediana){
       if(izq<der){
           int indice=PartitionMed(Arreglo,izq,der);
           if(indice=mediana){
               return Arreglo[indice];

           }
           if(indice>mediana){
                MedianaR(Arreglo,izq,indice-1,mediana);

           }else{
                MedianaR(Arreglo,indice+1,der,mediana);
           }
       }

   }

   int PartitionMed(int * Arreglo,int inicio,int final){
       int x=Arreglo[final];
       int indice=inicio-1;

       for(int i=inicio;i<=final-1;i++){
           if(Arreglo[i]<=x){
               int aux;
               indice++;
               aux=Arreglo[indice];
               Arreglo[indice]=Arreglo[i];
               Arreglo[i]=aux;
           }
       }
       int aux;
       aux=Arreglo[indice+1];
       Arreglo[indice+1]=Arreglo[final];
       Arreglo[final]=aux;

       return indice+1;

   }
public:

Ordenador(){}
~Ordenador(){}

void seleccion(int * arreglo, int tamano){
    int menor,aux,pos;
    for(int i=0;i<tamano;i++){
        menor=arreglo[i];
        pos=i;
        for(int j=1+i;j<tamano;j++){
            if(arreglo[j]<menor){
                menor=arreglo[j];
                pos=j;
            }
        }
        aux=arreglo[i];
        arreglo[i]=menor;
        arreglo[pos]=aux;
        }

}
void insercion(int * arreglo, int tamano){
    int iterador=0,aux;
    for(int i=1;i<tamano;i++){
        iterador=i;
            while(iterador>0 && arreglo[iterador]<arreglo[iterador-1]){
                aux=arreglo[iterador-1];
                arreglo[iterador-1]=arreglo[iterador];
                arreglo[iterador]=aux;
                iterador--;

        }

    }

}
void mergesort(int * arreglo, int tamano){

    mergeSortR(arreglo,0,tamano-1);int stop_s=clock();

}
void heapsort(int * arreglo, int tamano){
    int HeapSize=tamano-1;
    BuildMaxHeap(arreglo,tamano-1,HeapSize);
    for(int i=tamano-1;i>=0;i--){
        int aux=arreglo[0];
        arreglo[0]=arreglo[i];
        arreglo[i]=aux;
        HeapSize--;
        Heapify(arreglo,i,0,HeapSize);

    }

}
void quicksort(int * arreglo, int tamano){
       QuicksortR(arreglo,0,tamano-1);

}
void radixsort(int * arreglo, int tamano){
    int mayor = Mayor(arreglo, tamano);

    for (int exp = 1; mayor/exp > 0; exp *= 10){
        countSort(arreglo, tamano, exp);

    }

}
int mediana(int * arreglo, int tamano){
    int mediana=MedianaR(arreglo,0,tamano-1,tamano/2);


}
};
#endif
