#include "Series.h"	

Series::Series(int n)
{
	this->n=n;
}
// Estos metodos son los que vimos en clase
//Fibonacci Metodo Iterativo
double Series::fibonacciIt()
{
	if (this->n < 2)
		return this->n;
	int a=0;
	int b=1;
	int c=0;
	for (int i = 2; i <= this->n; ++i)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}

//Fibonacci Metodo Recursivo
double Series::fibonacciRec(int n)
{
	if (n < 2)
		return n;
	return fibonacciRec(n-1)+fibonacciRec(n-2);

}

//Factorial Metodo Iterativo
double Series::factorialIt()
{
	if (this->n < 2)
		return 1;
	double a=1;
	for (int i = 2; i <= this->n ; ++i)
		a*=i;
	return a;
}

//Factorial Metodo recursivo
double Series::factorialRec(int n)
{
	if(n<2)
		return 1;
	return factorialRec(n-1)*n;
}
