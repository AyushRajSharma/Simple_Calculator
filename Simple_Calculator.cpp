
#include <iostream> 
using namespace std; 

// Main program 
int main() 
{ 
	char op; 
	float num1, num2; 

    //it allows user to first number then operator ('+', '-', '*', '/') and then another number
    
	cin >> num1 >> op >> num2; 

	// Switch statement begins 
	switch (op) { 
		
		// If user enter + 
		case '+': 
			cout << num1 + num2; 
			break; 
		
		// If user enter - 
		case '-': 
			cout << num1 - num2; 
			break; 
		
		// If user enter * 
		case '*': 
			cout << num1 * num2; 
			break; 
		
		// If user enter / 
		case '/': 
			cout << num1 / num2; 
			break; 
		
		// If the operator is other than +, -, * or /, 
		// error message will display 
		default: 
			cout << "Error! operator is not correct"; 
			break; 
	} // switch statement ends 

	return 0; 
} 

