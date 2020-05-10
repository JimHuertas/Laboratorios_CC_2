#include <iostream>
using namespace std;


int main()
{
	cout<<"EJERCICIO 4\n"<<endl;
	int num=0;
	int max=0, a=0, b=0;
	
	for (int i=999; i>99; i--)
		for (int j=999; j>99; j--)
		{
			num=i*j;
			if (num>99999 && num<1000000)
			{
				a=num/1000; 
				b=((num%10)*100)+((num%100-num%10))+((num%1000)/100);
				if (a==b)
				{
					if (max<num)
					{
						max=num;
					}
				}
						
			}
		//	if else (a==b && )
		}
	cout<<"Este mayor producto entre el 2 numeros que den como producto capicua es: "<<max;
	return 0;
}

