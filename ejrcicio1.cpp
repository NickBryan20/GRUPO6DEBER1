#include <iostream>
using namespace std;

/*Una funcion recibe parametro 2 numeros enteros, que indican el inicio y fin de una serie.
Se pide calcular la sumatoria de los numeros comprendidos entre el inicio y fin de la serie.
Nota: El primer entero puede ser mayor o menor que el segundo.
Sumatoria (4,9) es la misma sumatoria (9,4). 4+5+6+7+8+9*/

int sum(int n1, int n2)
{
    int acum;
    if (n1<n2)
    {
        
        while (n1<=n2)
        {
            acum=acum+n1;
            n1++;
        }
    }
    else if (n1>n2)
    {
        while (n2<=n1)
        {
            acum=acum+n2;
            n2++;
        }
    }
    
    return acum;
}


int main()
{
  
  cout<<"\nPrueba de funcion de suma entre dos numeros";
  cout<<endl<<"La suma entre los numeros 4 y 9: "<<sum(4,9);
  cout<<endl<<"La suma entre los numeros 9 y 4: "<<sum(9,4);

  return 0;
}