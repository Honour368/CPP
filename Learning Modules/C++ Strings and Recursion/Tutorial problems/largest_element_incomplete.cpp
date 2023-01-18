#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int largest_element(int a[], int size) {
	int max = a[0];
	for (int i=0; i<size; i++){
		if (a[i]>max){
			max = a[i];
		}
	}
	return max;
}

int largest_element_R(int a[], int size){
	if (size==1){
		if (a[1]>a[0]){
			return a[1];
		}
		else{
			return a[0];
		}
	}
	else{
		int new_size = size-1;
		int max =  largest_element_R(a, new_size);
		if (a[new_size] > max){
			return a[new_size];
		}
		else{
			return max;
		}
	}
}





int main()
{
	const int SIZE = 10;
	int a[SIZE];

	// initialize random seed
	srand( time(NULL) );

	for (int i = 0; i < SIZE; ++i)
		a[i] = rand()%100 + 1;

	cout << "array contents: ";
	for (int i = 0; i < SIZE; ++i)
		cout << a[i] << " ";
	cout << endl;

	cout << "the largest element = " << largest_element(a, SIZE) << endl;
	cout << "the largest element using recursion = " << largest_element_R(a, SIZE) << endl;

	return 0;

}
