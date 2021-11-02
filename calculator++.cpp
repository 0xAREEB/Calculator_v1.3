/*
	Name: Calculator++
	Copyright: 0xAREEB
	Author: Arieb
	Description: A Simple Noob Friendly Calculator Project.  :)
	Start Time: 31/10/21 - 3:09 PM
*/

#include <iostream>
#include <cmath>	//FOR POWER FUNCTION
#include <stdlib.h> //FOR COLOR  :)

using namespace std;

bool getIsLegitInput(char test){ 	//Its a function that I used in main()    :)
	if(test=='+' || test=='-' || test=='x' || test=='*' || test=='/' || test=='%'|| test=='^'|| test=='p'){
		// Condition: If character is  +, -, x, *, /, ^, p or %
		return true;
	}
	else
		return false;
}

float calculate(int x, int y, char op){
	if(op=='+')
		return x+y;
		
	if(op=='-')
		return x-y;
	
	if(op=='*' || op=='x')
		return x*y;
	
	if(op=='/' && y!=0)   // Denominator cant be zero  :(
		return x/y;
	
	if(op=='%' && y!=0)   // Denominator cant be zero  :(
		return x%y;
		
	if(op=='p' || op=='^')
		return pow(x, y);
		
	cout<<"\nMATH-ERROR: Denominator can't be Zero..."; // program will only come here when denominator is zero...
	return x*x*x*x*x*x*x*x;	  // A useless high value
}

bool getFilteredBoolean(){
	int in;
	cin>>in; 	
	if(in==1)
		return true;
	else
		return 0;	//false = 0
}

int main(){
	
	system("Color F4");  //Change Color   :D
	
	
	int num1, num2; //USER INPUT VARIABLES
	float result;   //Sometimes result maybe a decimal value... 
	char ch;		//The input Operator  like  +, -, * etc...
	bool restart = false;
	
	start: 		//I'll use that for restarting program  :D
	
	//It can be written in 1 cout but just for readablity, I splitted it  :D
	cout<<"\n\t\t Calculator++  v1.0 by 0xAREEB\n\n";
	cout<<"\tAdd(+), Subtract(-), Multiply(x or *), Divide(/), Reminder(%), Power(^ or p)\n\n";
	cout<<"\t\tInput should be like:  15x8";
	cout<<"\n\nINPUT:- ";
	
	//In this case, program will auto understand which Variable should be selected   XD
	cin>>num1>>ch>>num2; 
	
	
	if(getIsLegitInput(ch)){
		result = calculate(num1, num2, ch);
		cout<<"\nResult is :-  "<<result;
	}
	else
		cout<<"\n\n\t"<<ch<<" is not an allowed Operator  :(";
	
	cout<<"\n\n\tShould I restart? [1 for Yes , 0 for No]: ";
	restart = getFilteredBoolean(); 	// For fixing a bug which caused program to freeze...
	
	
	if(restart){
		system("cls"); //cls -> clear screen
		goto start;
	}
	
	return 0;
}
