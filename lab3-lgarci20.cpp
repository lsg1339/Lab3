//Created by Leonardo Garcia for Lab 3

#include <string>
#include <iostream>
using namespace std;

int main()
{
	// 1 and 2
	
	short count = 0;
	short sum = 0;
	short n = 0;
	
	cout << "Parts 1 and 2:\nEnter a value for n: ";
	cin >> n;

	while (count <= n)
	{
		sum += count;
		count++;
	}

	cout << "\nThe sum is: " << sum << endl;
	


	// 3

	long count3 = 0;
	long sum3 = 0;
	long n3 = 0;

	cout << "\nPart 3:\nEnter a value for n: ";
	cin >> n3;

	while (count3 <= n3)
	{
		sum3 += count3;
		count3++;
	}

	cout << "\nThe sum is: " << sum3 << endl;
	
	 

	//4

	long count4 = 1;
	float product4 = 1;
	long n4 = 0;

	cout << "\nPart 4: \nEnter a value for n: ";
	cin >> n4;

	while (count4 <= n4)
	{
		product4 *= count4;
		count4++;
	}

	cout << "\nThe product is: " << product4 << endl;
	


	// 5

	long count5 = 1;
	double product5 = 1;
	long n5 = 0;

	cout << "\nPart 5:\nEnter a value for n: ";
	cin >> n5;

	while (count5 <= n5)
	{
		product5 *= count5;
		count5++;
	}

	cout << "\nThe product is: " << product5 << endl;
	


	//6f
	
	float count6 = 1;
	float sum6 = 0;
	float n6 = 0;

	cout << "\nPart 6f:\nEnter a value for n: ";
	cin >> n6;

	while (count6 <= n6)
	{
		sum6 += 1 / n6;
		count6++;
	}

	sum6 = sum6 - 1;

	cout << "\nThe result is: " << sum6 << endl;
	

	//6d
	
	double count7 = 1;
	double sum7 = 0;
	double n7 = 0;

	cout << "\nPart 6d:\nEnter a value for n: ";
	cin >> n7;

	while (count7 <= n7)
	{
		sum7 += 1 / n7;
		count7++;
	}

	sum7 = sum7 - 1;

	cout << "\nThe result is: " << sum7 << endl;
	

	
	//7

	cout << "\nPart 7: \n";
	for (float i = 3.4; i < 4.4; i += 0.2)
	{   
		cout << "i = " << i << endl;
	}
	


	// 8
	
	cout << "\nPart 8: \n";
	for (double i = 3.4; i < 4.4; i += 0.2)
	{   
		cout << "i = " << i << endl;
	}
	
	

	system("pause");
	return 0;
}
