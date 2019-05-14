// Creating Objects
	// Structs 
	struct Person 
	{
		string name;
		int age;
		Person(string n, int a) 
		{
			// to declare parameterized person like: Person p("my name", 21);
			name = n;
			age = a;
		}
		Person () 
		{
			// to declare empty person like: Person p;
		}	
	};
	

	// Objects
		// local object "stack"
		Person myPerson;  // no params
		Person myPerson (string firstName, string lastName, int age);  // with params
		// Dynamic object "heap"
		Person * personPtr = new Person;  // no params
		Person * personPtr = new Person(string firstName, string lastName, int age);  // with params
		