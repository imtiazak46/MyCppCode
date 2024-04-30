#include <iostream>

using namespace std;

int main(){
	int a = 10;
	int* ptr = &a;
	
	cout << "this address of a  " << &a << endl << " this pointer value  " << *ptr;
  // this address of a  0x6ffe04
 // this pointer value  10
}
