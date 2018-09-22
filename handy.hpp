#ifndef HANDY_HPP
#define HANDY_HPP
// functions that I have found handy for debugging, and various uses

#include <vector> 
#include <stack>
#include <queue>
#include <ctype.h>
#include <cstdlib>
#include <cmath>

#define PRINT(x) std::cout << #x << " = " << x << "\n" 

//returns -inf if it is not string with a digit
int getIntFromArgv(char * input){
	if(isdigit(input[0])){
		return std::atoi(input);
	}
	return -INT_MAX;
}

//returns -inf if it is not string with a digit
int getdoubleFromArgv(char * input){
	if(isdigit(input[0])){
		return std::atof(input);
	}
	return (int)-HUGE_VALF;
}

void printVector(std::vector<int> input){
	std::cout << "Vector size = " << input.size() << "\n";
	for (int i =0; i < input.size(); ++i){
		std::cout << "Element " << i << " = " << input[i] << "\n";
	}
}

void printStack(std::stack<int> input){
	
	std::cout << "Stack size = " << input.size() << "\nTop element first\n";
	while(!input.empty()){
		std::cout << " " << input.top() << "  ";
		input.pop();
	}
}

void printQueue(std::queue<int> input){
	
	std::cout << "Queue size = " << input.size() << "\nFront element first\n";
	while(!input.empty()){
		std::cout << " " << input.front() << "  ";
		input.pop();
	}
}

#endif //handy hpp