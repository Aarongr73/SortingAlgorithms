#include <iostream>
#include "ordenador.h"
using namespace std;




double PruebasHeap(int tamano){
    int * arreglo1=new int[tamano];
    int * arreglo2=new int[tamano];
    int * arreglo3=new int [tamano];
    double t1;
    double t2;
    double t3;
    double promedio;

    cout<<tamano<<" intento 1        intento 2         intento 3"<<endl;
    cout<<"       ";

    for(int i=0;i<tamano;i++){
        arreglo1[i]=-1000+(rand()%(100000-1000));
    }
    for(int i=0;i<tamano;i++){
        arreglo2[i]=-1000+(rand()%(100000-1000));
    }
    for(int i=0;i<tamano;i++){
        arreglo3[i]=-1000+(rand()%(100000-1000));
    }
    Ordenador prueba;

    int start_s=clock();
    prueba.heapsort(arreglo1,tamano);
    int stop_s=clock();
    t1=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t1 <<"           ";

    start_s=clock();
    prueba.heapsort(arreglo1,tamano);
    stop_s=clock();
    t2=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t2 <<"           ";


    start_s=clock();
    prueba.heapsort(arreglo1,tamano);
    stop_s=clock();
    t3=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t3 <<"           ";
    promedio=(t1+t2+t3)/3;
    cout<<"   "<<promedio<<endl;

    return promedio;




}

double PruebasQS(int tamano){
    int * arreglo1=new int[tamano];
    int * arreglo2=new int[tamano];
    int * arreglo3=new int [tamano];

    double t1;
    double t2;
    double t3;
    double promedio;


    cout<<tamano<<" intento 1        intento 2         intento 3"<<endl;
    cout<<"       ";

    for(int i=0;i<tamano;i++){
        arreglo1[i]=-1000+(rand()%(100000-1000));
    }
    for(int i=0;i<tamano;i++){
        arreglo2[i]=-1000+(rand()%(100000-1000));
    }
    for(int i=0;i<tamano;i++){
        arreglo3[i]=-1000+(rand()%(100000-1000));
    }
    Ordenador prueba;

    int start_s=clock();
    prueba.quicksort(arreglo1,tamano);
    int stop_s=clock();
    t1=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t1 <<"           ";

    start_s=clock();
    prueba.quicksort(arreglo2,tamano);
    stop_s=clock();
    t2=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t2 <<"           ";


    start_s=clock();
    prueba.quicksort(arreglo3,tamano);
    stop_s=clock();
    t3=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t3 <<"           ";

    promedio=(t1+t2+t3)/3;
    cout<<"   "<<promedio<<endl;

    return promedio;




}

double PruebasRadix(int tamano){
    int * arreglo1=new int[tamano];
    int * arreglo2=new int[tamano];
    int * arreglo3=new int [tamano];
    double t1;
    double t2;
    double t3;
    double promedio;

    cout<<tamano<<" intento 1        intento 2         intento 3"<<endl;
    cout<<"       ";

    for(int i=0;i<tamano;i++){
        arreglo1[i]=-1000+(rand()%(100000-1000));
    }
    for(int i=0;i<tamano;i++){
        arreglo2[i]=-1000+(rand()%(100000-1000));
    }
    for(int i=0;i<tamano;i++){
        arreglo3[i]=-1000+(rand()%(100000-1000));
    }
    Ordenador prueba;

    int start_s=clock();
    prueba.radixsort(arreglo1,tamano);
    int stop_s=clock();
    t1=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t1 <<"           ";

    start_s=clock();
    prueba.radixsort(arreglo2,tamano);
    stop_s=clock();
    t2=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t2 <<"           ";


    start_s=clock();
    prueba.radixsort(arreglo3,tamano);
    stop_s=clock();
    t3=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t3 <<"           ";

    promedio=(t1+t2+t3)/3;
    cout<<"   "<<promedio<<endl;

    return promedio;

}

double PruebasMerge(int tamano){
    int * arreglo1=new int[tamano];
    int * arreglo2=new int[tamano];
    int * arreglo3=new int [tamano];
    double t1;
    double t2;
    double t3;
    double promedio;

    cout<<tamano<<" intento 1        intento 2         intento 3"<<endl;
    cout<<"       ";

    for(int i=0;i<tamano;i++){
        arreglo1[i]=-1000+(rand()%(100000-1000));
    }
    for(int i=0;i<tamano;i++){
        arreglo2[i]=-1000+(rand()%(100000-1000));
    }
    for(int i=0;i<tamano;i++){
        arreglo3[i]=-1000+(rand()%(100000-1000));
    }
    Ordenador prueba;

    int start_s=clock();
    prueba.mergesort(arreglo1,tamano);
    int stop_s=clock();
    t1=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t1 <<"           ";

    start_s=clock();
    prueba.mergesort(arreglo2,tamano);
    stop_s=clock();
    t2=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t2 <<"           ";


    start_s=clock();
    prueba.mergesort(arreglo3,tamano);
    stop_s=clock();
    t3=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t3 <<"           ";

    promedio=(t1+t2+t3)/3;
    cout<<"   "<<promedio<<endl;

    return promedio;

}

double PruebasSeleccion(int tamano){
    int * arreglo1=new int[tamano];
    int * arreglo2=new int[tamano];
    int * arreglo3=new int [tamano];
    double t1;
    double t2;
    double t3;
    double promedio;

    cout<<tamano<<" intento 1        intento 2         intento 3"<<endl;
    cout<<"       ";

    for(int i=0;i<tamano;i++){
        arreglo1[i]=-1000+(rand()%(100000-1000));
    }
    for(int i=0;i<tamano;i++){
        arreglo2[i]=-1000+(rand()%(100000-1000));
    }
    for(int i=0;i<tamano;i++){
        arreglo3[i]=-1000+(rand()%(100000-1000));
    }
    Ordenador prueba;

    int start_s=clock();
    prueba.seleccion(arreglo1,tamano);
    int stop_s=clock();
    t1=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t1 <<"           ";

    start_s=clock();
    prueba.seleccion(arreglo2,tamano);
    stop_s=clock();
    t2=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t2 <<"           ";


    start_s=clock();
    prueba.seleccion(arreglo3,tamano);
    stop_s=clock();
    t3=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t3 <<"           ";

    promedio=(t1+t2+t3)/3;
    cout<<"   "<<promedio<<endl;

    return promedio;

}


double PruebasInsercion(int tamano){
    int * arreglo1=new int[tamano];
    int * arreglo2=new int[tamano];
    int * arreglo3=new int [tamano];
    double t1;
    double t2;
    double t3;
    double promedio;

    cout<<tamano<<" intento 1        intento 2         intento 3"<<endl;
    cout<<"       ";

    for(int i=0;i<tamano;i++){
        arreglo1[i]=-1000+(rand()%(100000-1000));
    }
    for(int i=0;i<tamano;i++){
        arreglo2[i]=-1000+(rand()%(100000-1000));
    }
    for(int i=0;i<tamano;i++){
        arreglo3[i]=-1000+(rand()%(100000-1000));
    }
    Ordenador prueba;

    int start_s=clock();
    prueba.insercion(arreglo1,tamano);
    int stop_s=clock();
    t1=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t1 <<"           ";

    start_s=clock();
    prueba.insercion(arreglo2,tamano);
    stop_s=clock();
    t2=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t2 <<"           ";


    start_s=clock();
    prueba.insercion(arreglo3,tamano);
    stop_s=clock();
    t3=(stop_s-start_s)/double(CLOCKS_PER_SEC);
    cout <<t3 <<"           ";

    promedio=(t1+t2+t3)/3;
    cout<<"   "<<promedio<<endl;

    return promedio;

}


double PruebasMedia(int tamano){
    int * arreglo1=new int[tamano];
    int * arreglo2=new int[tamano];
    int * arreglo3=new int [tamano];
    double t1;
    double t2;
    double t3;
    double promedio;

    cout<<tamano<<" intento 1        intento 2         intento 3"<<endl;
    cout<<"       ";

    for(int i=0;i<tamano;i++){
        arreglo1[i]=-1000+(rand()%(100000-1000));
    }
    for(int i=0;i<tamano;i++){
        arreglo2[i]=-1000+(rand()%(100000-1000));
    }
    for(int i=0;i<tamano;i++){
        arreglo3[i]=-1000+(rand()%(100000-1000));
    }
    Ordenador prueba;

    int start_s=clock();
    prueba.mediana(arreglo1,tamano);
    int stop_s=clock();
    t1=(stop_s-start_s)/(float)(CLOCKS_PER_SEC);
    cout <<t1 <<"           ";

    start_s=clock();
    prueba.mediana(arreglo2,tamano);
    stop_s=clock();
    t2=(stop_s-start_s)/(float)(CLOCKS_PER_SEC);
    cout <<t2 <<"           ";


    start_s=clock();
    prueba.mediana(arreglo3,tamano);
    stop_s=clock();
    t3=(stop_s-start_s)/(float)(CLOCKS_PER_SEC);
    cout <<t3 <<"           ";

    promedio=(t1+t2+t3)/3;
    cout<<"   "<<promedio<<endl;

    return promedio;

}




int main()
{

        int arreglo[12]={5,22,333,545,66,1,2,3,4,-567,99,5000};
        Ordenador o;
        o.heapsort(arreglo,12);
        for(int i=0;i<12;i++){
            cout<<arreglo[i]<<",";
        }
        cout<<endl;
        cout<<o.mediana(arreglo,12);


    return 0;
}
