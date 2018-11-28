#include"handy.hpp"

#include<vector>

int main(){
	std::vector<int> vec(0);
	
	TIME(vec.resize(10000));
	
	return 0;	
}