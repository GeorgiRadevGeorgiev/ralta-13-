#include <iostream>

using namespace std;


bool optimusPrime(int num) {

	bool flag = true;

	for (int i = 2; i < num / 2; i++)
	{
		if (num % i == 0) {
			flag = false;
			break;
		}
			
	}

	return flag;
}

int main() {

	/*
	int start, end;
	cout << "Input start : ";
	cin >> start;
	cout << "Input end : ";
	cin >> end;

	for (int startCopy = start; startCopy < end; startCopy++)
		if (optimusPrime(startCopy))
			cout << startCopy << " ";
*/

	int num;
	cout << "Input num : ";
	cin >> num;
	

	for (int i = 2; i < num / 2; i++)
		if (optimusPrime(i) && optimusPrime(num - i))
			cout <<"\n" <<  i << " + " << num - i << endl; 


	system("pause"); 
	return 0;
}