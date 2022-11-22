/***************************************************************************************************
** assignment.cpp
** Author: Kaushik Dontula
** Date: 04/04/2022
** Description: This program is a calculator that computes the monthly mortgage and details related to mortgage payments.
** Input: Home price(in dollars), Down Payment(in dollars), Length of loan(in years), annual interest rate (in percentage)
** Output: Monthly mortgage payment, total paid, principle paid, interest paid
**************************************************************************************************/

//including all allowed libraries based on assignment template
 #include <iostream>
 #include <cmath>: pow()
 #include <iomanip>: setprecision()


int main() {

//Introducing the monthly mortgage calculator. 
//Asking for user inputs for home price, down payment, loan length, annual interest rate. 
//Storing these inputs from the user into variables.
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	
    std::cout << "Welcome to the monthly mortgage calculator!" << std::endl << std::endl;

	std::cout << "Home Price, in dollars: ";
	double price;
	std::cin >> price;

	std::cout <<"Down payment, in dollars: ";
	double downpayment;
	std::cin >> downpayment;

	std::cout << "Loan Length, in years: "; 
	double loanlength;
	std::cin >> loanlength;

	std:: cout << "Annual interest rate, in percentage: " ;
	double interestrate;
	std::cin >> interestrate;
	std:: cout << std::endl << std::endl;



// defining our variables to be used in the monthly mortgage equation that was given.
// creating math equations to define these variables
	double Principle;
	Principle == 0;
	Principle = price - downpayment;

	double Rate;
	Rate = ((interestrate * .01) /12); 

	double Payments;
	Payments = (loanlength * 12);

//creating variables in order to solve the calculation required by the mortgage equation
//split up equation into 2 (top and bottom)
//use pemdas to solve equation step by step

//Top half of monthly payments equation
	double a; 
	a = (1 + Rate);
	double b;
	b = (pow(a,Payments));
	double c;
	c = (Rate * b);
	double d;
	d = (Principle * c);

//bottom half of monthly payments equation
	double e;
	e = (1 + Rate);
	double f;
	f = (pow(e,Payments));
	double g;
	g = (f - 1); 

//Using the variables previously created to answer the outputs
// creating equations for the monthly payment, total amount paid, principle paid, and interest paid. 
//using setprecision to allow outputs to output up to 2 decimal places
	double monthlypayment;
	monthlypayment = (d / g);
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	std::cout << "Your estimated monthly payment will be: $" << monthlypayment << std::endl;

	double totalpaid;
	totalpaid = (monthlypayment * Payments);
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	std::cout << "Your total amount paid will be: $" << totalpaid << std::endl;

	double principlepaid;
	principlepaid = (Principle);
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	std::cout << "Your principle amount paid will be: $" << principlepaid << std::endl;

	double interestpaid;
	interestpaid = (totalpaid - Principle);
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	std::cout << "Your total interest paid will be: $" << interestpaid << std::endl;

return 0;
}
