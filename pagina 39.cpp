#include <iostream>

int main(){
	
	int x{1};
	int y{2};
	
	std::cout << (++x, ++y);
	
	return 0;
	
}