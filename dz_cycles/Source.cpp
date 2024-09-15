#include <iostream>;

using namespace std;

int main()
{

	int start = 0;
	cout << "enter start -> ";
	cin >> start;
	if (start < 500) {
		for (int i = start; i < 500; i++) {
			cout << i << endl;
		}
	}
	else {
		cout << "Start must be less than 500" << endl;
	}

	int num1, num2, num3;
	cout << "Enter two numbers -> ";
	cin >> num1 >> num2;
	num3 = num1;
	for (int i = 1; i < num2; i++)
	{
		num1 *= num3;
	}
	cout << num3<< " ^ " << num2 << " = " << num1;

	int ar = 0;
	for (int i = 0; i <= 1000; i++)
	{
		ar += i;
	}
	cout<< "Ar = "<<(float)ar / 1000;

	int num ,prod=1;
	cout << "enter your num -> ";
	cin >> num;
	if (num >= 1 && num <= 20) {
		for (int i = num; i <= 20; i++) {
			prod *= i;
		}
		cout << prod;
	}
	else {
		cout << "Invalid value of num";
	}

	int num = 0;
	cout << "enter ur num -> ";
	cin >> num;
	for (int i = 1; i <= 10; i++) {
		cout << num << " * " << i << " = " << i * num<<endl;
	}

	int count = 0;

	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int x = 0; x < 10; x++)
			{
				if (i == j || j == x || i == x) {
					++count;
				}
			}
		}
	}
	cout << count;

	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int x = 0; x < 10; x++)
			{
				if (i != j && j != x && i != x) {
					++count;
				}
			}
		}
	}
	cout << count;

	int num, saved_num1 = 0, saved_num2 = 0, saved_num3 = 0;

	cout << "enter num -->";
	cin >> num;

	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int x = 0; x < 10; x++)
			{
				if (i * 100 + j * 10 + x == num) {
					saved_num1 += i;
					saved_num2 += j;
					saved_num3 += x;
				}
			}
		}
	}
	if (saved_num1 == 3 && saved_num2 != 3 && saved_num3 != 3) {
		cout << saved_num2 * 10 + saved_num3 << endl;
	}
	else if (saved_num1 != 3 && saved_num2 == 3 && saved_num3 != 3) {
		cout << saved_num1 * 10 + saved_num3 << endl;
	}
	else if (saved_num1 != 3 && saved_num2 != 3 && saved_num3 == 3) {
		cout << saved_num1 * 10 + saved_num2 << endl;
	}
	else if (saved_num1 == 3 && saved_num2 == 3 && saved_num3 != 3) {
		cout << saved_num3 << endl;
	}
	else if (saved_num1 != 3 && saved_num2 == 3 && saved_num3 == 3) {
		cout << saved_num1 << endl;
	}
	else if (saved_num1 == 3 && saved_num2 != 3 && saved_num3 == 3) {
		cout << saved_num2 << endl;
	}
	else if (saved_num1 == 3 && saved_num2 == 3 && saved_num3 == 3) {
		cout << " " << endl;
	}
	else {
		cout << num;
	}
	
	int num = 0;
	cout << "Enter ur num -> ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		if (num % (i * i) == 0 && num % (i * i * i) != 0) {
			cout << i << endl;
		}
	}
	
	int num = 0, sum = 0;
	cout << "enter ur num -> ";
	cin >> num;

	for (int i = 0; i <= num; i++)
	{
		sum += i;
	}
	if ((sum * sum * sum) == num * num) {
		cout << "kub symu = num*num";
	}
	else {
		cout << "kub symu != num*num";
	}
	int num = 0;
	cout << "enter ur num -> ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0) {
			cout << num << " % " << i << " == 0" << endl;
		}
	}

	int num1, num2;
	cout << "Enter ur nums -> ";
	cin >> num1 >> num2;
	if (num1 < num2) {
		for (int i = 1; i < num2; i++)
		{
			if (num1 % i == 0 && num2 % i == 0) {
				cout << num1 << " and " << num2 << " % " << i << " == 0" << endl;
			}
		}
	}
	else {
		for (int i = 1; i < num1; i++)
		{
			if (num1 % i == 0 && num2 % i == 0) {
				cout << num1 << " and " << num2 << " % " << i << " == 0" << endl;
			}
		}
	}

	return 0;
}