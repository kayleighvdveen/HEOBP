// Huiswerkopdracht 01 - Kayleigh van der Veen - 3017779 


int main() {

class LogIn {
	string userName;			// needed to be able to log in
	string password;
};

class Student : public LogIn {
	string firstName;
	string surName;
};

class Teacher : public LogIn {
	string firstName;
	string surName
};

class ClassRoom {
	public:
		string classNumber;		
		string location;		// IBB, ON, PT, NK.

};

class Time {
	int year;					// schoolyear
	int month;					// what day and month on the calender
	int day;		
	int lessonStart;			// at what time the lesson starts
	int lessonEnd;				// at what time the lesson ends

};

class TimeTable {
	public:
		string lesson;			// name of the class or subject
		ClassRoom classRoom;	// what classroom
		string classCode;		// classcode, something like "G&I-2-KDRAWLI" 
		Teacher teacher;		// name of the teacher
		Time time;				// duration of the lesson 
};

return 0;
	
};
