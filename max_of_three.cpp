#include<iostream>
using namespace std;

#define	max3(a, b, c)	(((a>b?a:b)>c)?(a>b?a:b):b)

int main(){
	int n1, n2, n3, max;
	cout << "Enter 3 number to find maximum: ";
	cin >> n1 >> n2 >> n3;
	
	max = max3(n1, n2, n3);
	cout << "Maximum number is:  "<< max << endl;
	
	return 0;
}
