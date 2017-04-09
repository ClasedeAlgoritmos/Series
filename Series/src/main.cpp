#include "Series.h"

int main()
{
	//variables
	int n; 
	//Ingresa el numero
	std::cout<< "Ingrese un numero "<<std::endl;
	//Recibe el numero 
	std::cin>>n; 
	//Objeto s de la clase Series
	Series s(n);
	//metodos y munestra los resultados
	std::cout<<s.fibonacciIt()<<std::endl;
	std::cout<<s.fibonacciRec(n)<<std::endl;
	std::cout<<s.factorialIt()<<std::endl;
	std::cout<<s.factorialRec(n)<<std::endl;

	return 0;
}
