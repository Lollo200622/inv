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
	
	//std::vector<std::std::vector<int>> matrix;

	
	
	for( i=0; i<n; i++){
		array[i]= std::rand() % n;
		std::cout << "array :"<< array[i] << std::endl;
		
		}
		std::cout << "\n"  << std::endl;
	for( i=0; i<n/2; i++){
		int t=array[i];
		array[i]=array[n-1-i];
		array[(n-1)-i]= t;
		
	}
	for( i=0 ; i<n ; i++){
		std::cout << "array :"<< array[i] << std::endl;
	}
}

