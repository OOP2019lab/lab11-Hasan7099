#include "18l1009_Faculty.h"
#include "18l1009_Student.h"

using namespace std;

int main()
{
	//Student("Thompson", "Ted", 22, "Game", 3.9);
	//Faculty("Karp", "Richard", 45, 2, 420);

	Student s("Thompson", "Ted", 22, "Game", 3.9);
	Faculty f("Karp", "Richard", 45, 2, 420);
	s.print_Student();
	f.print_Faculty();

	cout << endl;
	system("pause");
}


/*
----------------Q.5 OUTPUT-------------------------
With the following lines

Student("Thompson", "Ted", 22, "Game", 3.9);
Faculty("Karp", "Richard", 45, 2, 420);

Person Constructor invoked...

Student Constructor invoked...

Student Destructor invoked...

Person Destructor invoked...

Person Constructor invoked...

Faculty Constructor invoked...

Faculty Destructor invoked...

Person Destructor invoked...

_________________________________________________________

With follwing lines

Student s("Thompson", "Ted", 22, "Game", 3.9);
Faculty f("Karp", "Richard", 45, 2, 420);

Person Constructor invoked...

Student Constructor invoked...

Person Constructor invoked...

Faculty Constructor invoked...

because destructors will be called after the execution (closing) of program

-----------------------Q.6 ERROR-------------------
Private Member of base class are not accessible.
To prevent this, I've used getters and setters
*/