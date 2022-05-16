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
	cout << "Enter the range to print prime numbers: ";
	cin >> n;
	cout << "Prime numbers are: ";
	for(auto i = 1; i <= n; i++){
		if(is_prime(i))
			cout << i << "  ";
	}
	cout << endl;
	
	return 0;
}
