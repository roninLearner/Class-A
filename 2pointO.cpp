/* Classification A Program
williford, uriah
13april2017

MISC DETAILS:
instructons and pointers contributing to program's completion given by,
- Dr. Cain

PROGRAM PURPOSE:

Derive an Advisor class from your Person class.

Create one (and only one) private data member:
	int NumberOfAdvisees

Create a constructor member function that has exactly 3 parameters: 
	char * fname
	char * lname
	int age

Create public member functions:
	void AddAdvisee ()  // This function simply adds 1 to the current NumberOfAdvisees data member
	int HowManyAdvisees ()  // This function simply returns how many Advisees the Advisor currently has
	
Derive an Advisee class from your Person class.
Create one (and only one) private data member:
	Advisor * AcademicAdvisor

Create a constructor member function that has exactly 4 parameters: //ADD :person(fname,lname,age)
	char * fname
	char * lname
	int age
	Advisor * NewAdvisor
	
Create public member function:
	Advisor * GetAdvisor ()  // This function simply returns the Advisee's AcademicAdvisor
	
Include the following code as part of your code in your main function:  Provided by Dr. Cain
		Advisor Prof1 ("Donald", "Knuth", 79);
		cout << Prof1.GetFName()  << "\n";
		cout << Prof1.GetLName()  << "\n";
		cout << Prof1.GetAge()  << "\n";
		Prof1.ChangeFName("Prof.");
		Prof1.Birthday();
		cout << Prof1.GetFName()  << "\n";
		cout << Prof1.GetAge()  << "\n";
		cout << Prof1.HowManyAdvisees()  << "\n"; // This should print out 0.
		Advisee Student1 ("Robert", "Sedgewick", 70, & Prof1);
		Student1.ChangeLName("Sedgewick, Ph.D.");
		cout << Student1.GetLName()  << "\n";
		cout << (*(Student1.GetAdvisor())).GetLName()  << "\n";
		cout << (*(Student1.GetAdvisor())).HowManyAdvisees()  << "\n"; // This should print out 1.
*/

//SLIDE 10-96
#include <iostream>
using namespace std;

class Aperson {
public:
	Aperson(char * FN, char * LN, int Age);
	char * getFName();
	char * getLName();
	int getAge();
private:
	char * FirstName;
	char * LastName;
	int Age;
};

class Advisor : public Aperson {
public:
	Advisor(int NOA);
	int grabsees();
	
	void AddAdvisee(int NOA);
	// int HowMAnyAdvisees();
	
	char * fname;
	char * lname;
	int age;
private:
	int NumberOfAdvisees;
};

int main() {
	char p;
	do {
		cout << "\n You have requested a profile: \n";
		Aperson objec("Larry", "Boy", 20);
		cout << " Full name:  ";
		cout << objec.getFName();
		cout << "  ";
		cout << objec.getLName();
		cout << "\n Age: ";
		cout << objec.getAge();

		//!!!under construction!!!:
		/*
		Advisor Prof1 ("Donald", "Knuth", 79);
		cout << Prof1.GetFName()  << "\n";
		cout << Prof1.GetLName()  << "\n";
		cout << Prof1.GetAge()  << "\n";
		Prof1.ChangeFName("Prof.");
		Prof1.Birthday();
		cout << Prof1.GetFName()  << "\n";
		cout << Prof1.GetAge()  << "\n";
		cout << Prof1.HowManyAdvisees()  << "\n"; // This should print out 0.
		Advisee Student1 ("Robert", "Sedgewick", 70, & Prof1);
		Student1.ChangeLName("Sedgewick, Ph.D.");
		cout << Student1.GetLName()  << "\n";
		cout << (*(Student1.GetAdvisor())).GetLName()  << "\n";
		cout << (*(Student1.GetAdvisor())).HowManyAdvisees()  << "\n"; // This should print out 1.
		*/


		cout << "\n Consider this game, 'p'ostponed...\t";
		cin >> p;
		if (p != 'p') {
			cout << "\n    !!!WARNING!!! \n"
				<< " !!!INCORRECT INPUT!!! \n";
		}
	} while (p != 'p');


	return 0;
}

// FUNCTIONS:
Aperson::Aperson(char * FN, char * LN, int AG) {
	FirstName = FN;
	LastName = LN;
	Age = AG;
}
Advisor::Advisor(int NOA) {
	NumberOfAdvisees = NOA;
}
Advisor::AddAdvisee(int NOA) {
	return NumberOfAdvisees;
}

// DEFINITIONS:
char * Aperson::getFName() {       
	return FirstName;
} 
char * Aperson::getLName() {
	return LastName;
}
int Aperson::getAge() {
	return Age;
}
int Advisor::grabsees() {
	return NumberOfAdvisees;
}







