// FUNCTIONS

// *** Syntax ***
<returnType> <functionName> (args);

// pass by value.
void print (int n, float f, string s); // changes made inside the function and not permanent after the function returns.

// pass by reference. 
void print (int & n, float f, string & s);  // the arguments passed into the functions are permanently altered. 

// *** Different pointer return types ***
int * add (int n, int m); // returns point to an int.

Person * newPerson (string name); // returns pointer to a person object

Car * newCar()  // returns pointer to a car object
{
	Car * carPtr = new Car;
	reutrn carPtr;
}

