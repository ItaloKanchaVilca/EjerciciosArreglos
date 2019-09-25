#include <iostream>

using namespace std;
/*
// funcion q imprima los elemetos de un arreglo

void imprimir(int arr[],int tam){
    for(int i=0;i<tam;i++){
        cout<<"X ["<<i<<"]"<<"="<<arr[i]<<endl;
    }
}

int main()
{
    int x[5];
    for(int i=0;i<5;i++){
        cin>>x[i];
    }

imprimir(x,5);
}
*/
/*
// funcion q retorne la suma de los elemtos de un arreglo iterativa

int suma(int arr[],int tam){
    int sumar=0;
    for(int i=0;i<tam;i++){
        sumar=sumar+arr[i];
    }
     return sumar;
}

int main()
{
    int x[5];
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
cout<<"La suma de los elementos de mi arreglo son: "<<suma(x,5);
}
*/
// funcion q retorne la suma de los elemtos de un arreglo recursiva

// funcion q invierta los elementos de un arreglo iterativa
void imprimir(int arr[],int tam){
    for(int i=0;i<tam;i++){
        cout<<"X ["<<i<<"]"<<"="<<arr[i]<<endl;
    }
}

void invertir(int arr[],int tam){

    int v=tam/2;
    tam-=1;

    for(int i=0;i<v;i++){
        int c=arr[i];
        arr[i]=arr[tam];
        arr[tam--]=c;
    }
}
int main(){
    int x[5];
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
    invertir(x,5);
    imprimir(x,5);
}




// funcion q invierta los elementos de un arreglo recursiva
