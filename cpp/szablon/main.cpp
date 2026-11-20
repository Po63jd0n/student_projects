#include <iostream>
#include <vector>
#include <cassert>
#include "sortowanie.h"

void uruchomTesty(){
	//test 1: Standaroda niposortowana tablica
	std::vector<int> t1 = {64, 34, 25, 12, 22, 11, 90};
	sortowanieBabelkowe(t1);
	assert((t1 == std::vector<int>{11, 12, 22, 25, 34, 64, 90}));

	std::vector<int> t2 = {1, 2, 3, 4, 5};
	sortowanieBabelkowe(t2);
	assert((t1 == std::vector<int>{1, 2, 3, 4, 5}));



}




int main(){
	 uruchomTesty();
	return 0;
}
