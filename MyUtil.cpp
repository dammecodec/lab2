#include <iostream>
#include <math.h>
using namespace std;
class MyUtil
{
	public: static long factorial (int num)
	{
	long result = 1;
	for (int i = 2; i<=num; i++)
	result*=i;
	return result;
	}
	public: static bool isPrime(long number)
	{
		long numberSqrt = (long) sqrt(number);
		bool result = true;
		for (int i=2; i < numberSqrt && result; i++)
		if (number%i==0) result = false;
		return result;
	}
	public: static bool isTriangle(double num1, double num2, double num3)
	{
		return (num1>(num2+num3) && num2>(num1+num3) && num3>(num1+num2));
	}
};
	
	
		int main()
		{
			MyUtil myutil1;
			double a=12, b=2, c=8;
			cout << "12, 2 and 8 create a triangle is : " << myutil1.isTriangle(12,2,8);
			cout << "The factorial of 6 is : " << myutil1.factorial(6);
			cout << "Saying that 17 is a prime number is : " << myutil1.isPrime(17);
		}
	
