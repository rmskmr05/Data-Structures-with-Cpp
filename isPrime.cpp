#include <iostream>
using namespace std;

bool is_prime(int num){
	int div = 2;
	while(div <= num/2){
		if (num % div == 0)
			return false;
		else
			div += 1;
	}
	return true;
}

int main(){
	
	int n;
	cout << "Enter a number to check whether, it is Prime or Not: " ;
	cin >> n;
	
	if (is_prime(n))
		cout << n << " is a Prime number" << endl;
	else
		cout << n << " is Not a Prime number" << endl;
	
	return 0;
}
