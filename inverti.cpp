#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>



int main () {
	int n; 
	int i;
	  
	std::cout << "Inserire il numero di elementi:" << std::endl;
	std::cin >> n;
	std::vector<int> array(n);
	std::srand(std::time(0));

	for( i=0; i<n; i++){
		array[i]= std::rand() % n;
		std::cout << "array :"<< array[i] << std::endl;
		
	}
	for( i=0; i<n; i++){
		array[n-i]=array[i];
		std::cout << "array :"<< array[i] << std::endl;
	}

