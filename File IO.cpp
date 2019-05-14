// File I/O 
// Access/manipulate a char in a string one at a time. Index each char. 
for (int i = 0; i < myString.length(); i++)
{
	cout << myString[i];
}

// File input : Reads one string at a time.
string myString;
ifstream myFile;
myFile.open("input.txt");
while (myFile >> myString)
{
	cout << myString << endl;
}

// File input : getline method reads one line at a time
string myLine;
ifstream myFile;
myFile.open("input.txt");
while (getline(myFile, myLine))
{
	cout << myLine << endl;
}

// using the insertion operator
myFile >> myString 

// reading numbers
int num1, num2, num3
myFile >> num1 >> num2 >> num3;

int int1, int2;
float float1;
myFile int1 >> float1 >> int2;
