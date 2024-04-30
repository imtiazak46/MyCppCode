#include <iostream>

using namespace std;

int main(){
	int a = 10;
	int* ptr = &a;
	
	cout << "this address of a  " << &a << endl << " this pointer value  " << *ptr;
 	// this address of a  0x6ffe04
 	// this pointer value  10
	// here we used direct pointer stored the value 
	*ptr = 20 ;
	cout << *ptr << endl ;
	// 20
}
