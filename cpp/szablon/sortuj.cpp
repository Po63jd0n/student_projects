#include "sortowanie.h"
#include <utility>


void sortowanie(std::vector<int>& tablica){
	int n = tablica.size();

	for(int i = 0; i < n -1; ++i){
	 for (int j = 0; j < n -1; ++j){
		if(tablica[j] > tablica[j+1]){
			std::swap(tablica[j], tablica[j + 1]);
			}
		}
	}
}
