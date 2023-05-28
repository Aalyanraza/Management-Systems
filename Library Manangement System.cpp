/*
Syed Aalyan Raza Kazmi
22I-0833
A
*/

#include<iostream>
#include<string>
using namespace std;

class studyBooks {
private:
	string name;
	string author;

	int ID;
	int editionNum;
	string purchaseDate;

	string issue;
public:
	//Getters and setters for each member variable.
	studyBooks(int id = 0, string bname = "", string bauthor = "", int edNum = 0, string date = "") {
		name = bname;
		author = bauthor;

		ID = id;
		editionNum = edNum;
		purchaseDate = date;

		issue = "available";
	}

	void setIssue(string i) {
		issue = i;
	}
	string getIssue() const {
		return issue;
	}

	void setName(string n) {
		name = n;
	}
	string getName() const {
		return name;
	}

	void setAuthor(string a) {
		author = a;
	}
	string getAuthor() const {
		return author;
	}

	void setPurchaseDate(string pd) {
		purchaseDate = pd;
	}
	string getPurchaseDate() const {
		return purchaseDate;
	}

	void setID(int id) {
		ID = id;
	}
	int getID() const {
		return ID;
	}

	void setEditionNum(int eN) {
		editionNum = eN;
	}
	int getEditionNum() const {
		return editionNum;
	}

	~studyBooks() {}
};

class Magazines {
private:
	string name;
	string author;

	int ID;
	int editionNum;
	string purchaseDate;

	string issue;
public:
	//Getters and setters for each member variable.
	Magazines(int id = 0, string mname = "", string mauthor = "", int edNum = 0, string date = "") {
		name = mname;
		author = mauthor;

		ID = id;
		editionNum = edNum;
		purchaseDate = date;

		issue = "available";
	}

	void setIssue(string i) {
		issue = i;
	}

	string getIssue() const {
		return issue;
	}

	void setName(string n) {
		name = n;
	}
	string getName() const {
		return name;
	}

	void setAuthor(string a) {
		author = a;
	}
	string getAuthor() const {
		return author;
	}

	void setPurchaseDate(string pd) {
		purchaseDate = pd;
	}
	string getPurchaseDate() const {
		return purchaseDate;
	}

	void setID(int id) {
		ID = id;
	}
	int getID() const {
		return ID;
	}

	void setEditionNum(int eN) {
		editionNum = eN;
	}
	int getEditionNum() const {
		return editionNum;
	}

	~Magazines() {}
};

class Journals {
private:
	string name;
	string author;

	int ID;
	int editionNum;
	string purchaseDate;

	string issue;
public:
	//Getters and setters for each member variable.
	Journals(int id = 0, string jname = "", string jauthor = "", int edNum = 0, string date = "") {
		name = jname;
		author = jauthor;

		ID = id;
		editionNum = edNum;
		purchaseDate = date;

		issue = "available";
	}

	void setIssue(string i) {
		issue = i;
	}
	string getIssue() const {
		return issue;
	}

	void setName(string n) {
		name = n;
	}
	string getName() const {
		return name;
	}

	void setAuthor(string a) {
		author = a;
	}
	string getAuthor() const {
		return author;
	}

	void setPurchaseDate(string pd) {
		purchaseDate = pd;
	}
	string getPurchaseDate() const {
		return purchaseDate;
	}

	void setID(int id) {
		ID = id;
	}
	int getID() const {
		return ID;
	}

	void setEditionNum(int eN) {
		editionNum = eN;
	}
	int getEditionNum() const {
		return editionNum;
	}

	~Journals() {}
};

class Library {
protected:
	studyBooks* books;
	Magazines* magazine;
	Journals* journal;

	int total;

	int numBooks;
	int numMagazines;
	int numJournals;
public:
	Library();

	friend ostream& operator<<(ostream& output, const Library& L);

	~Library();
};

Library::Library() {
	//Default constructor.
	total = 0;

	numBooks = 0;
	numMagazines = 0;
	numJournals = 0;

	books = nullptr;
	magazine = nullptr;
	journal = nullptr;
}

ostream& operator<<(ostream& output, const Library& L) {
	//To output all the materials that exist in the library.
	output << "Total Number of Items in Library:  " << L.total << endl;
	output << endl;

	output << "Number of Study Books:  " << L.numBooks << endl << endl;
	for (int b = 0; b < L.numBooks; b++) {
		output << "Book " << b + 1 << endl;
		output << "Book ID: " << L.books[b].getID() << endl;
		output << "Book Name: " << L.books[b].getName() << endl;
		output << "Book Author: " << L.books[b].getAuthor() << endl;
		output << "Book Edition Number: " << L.books[b].getEditionNum() << endl;
		output << "Book Purchase Date: " << L.books[b].getPurchaseDate() << endl;
		output << endl;
	}
	output << endl;
	output << "Number of Magazines:  " << L.numMagazines << endl << endl;
	for (int m = 0; m < L.numMagazines; m++) {
		output << "Magazine " << m + 1 << endl;
		output << "Magazine ID: " << L.magazine[m].getID() << endl;
		output << "Magazine Name: " << L.magazine[m].getName() << endl;
		output << "Magazine Author: " << L.magazine[m].getAuthor() << endl;
		output << "Magazine Edition Number: " << L.magazine[m].getEditionNum() << endl;
		output << "Magazine Purchase Date: " << L.magazine[m].getPurchaseDate() << endl;
		output << endl;
	}
	output << endl;
	output << "Number of Journals:  " << L.numJournals << endl << endl;
	for (int j = 0; j < L.numJournals; j++) {
		output << "Journal " << j + 1 << endl;
		output << "Journal ID: " << L.journal[j].getID() << endl;
		output << "Journal Name: " << L.journal[j].getName() << endl;
		output << "Journal Author: " << L.journal[j].getAuthor() << endl;
		output << "Journal Edition Number: " << L.journal[j].getEditionNum() << endl;
		output << "Journal Purchase Date: " << L.journal[j].getPurchaseDate() << endl;
		output << endl;
	}

	return output;
}

Library::~Library() {
	delete[] books;
	books = nullptr;

	delete[] magazine;
	magazine = nullptr;

	delete[] journal;
	journal = nullptr;
}

class Person {
protected:
	int ID;
	string name, address, phoneNum;
	string type;
	float dueDate;

	int fine;

	studyBooks* B;
	Magazines* M;
	Journals* J;

	int itemCount;
	int bookCount;
	int magazineCount;
	int journalCount;

	static const int totalforStudents = 3;
	static const int totalforFaculty = 5;

public:
	Person(int id=0, string n="", string addr="", string ph_num="", string stu_fac="");
	~Person();

	friend class Librarian;
};

Person::Person(int id, string n, string addr, string ph_num, string stu_fac) {
	//Parametrized constructor. It can never be default.
	ID = id;
	dueDate = 0.0;
	name = n;
	address = addr;
	phoneNum = ph_num;
	type = stu_fac;

	fine = 0;

	itemCount = 0;
	bookCount = 0;
	magazineCount = 0;
	journalCount = 0;

	B = nullptr;
	M = nullptr;
	J = nullptr;
}

Person:: ~Person() {
	delete[] B;
	B = nullptr;

	delete[] M;
	M = nullptr;

	delete[] J;
	J = nullptr;
}

class Librarian : public Library{
private:
	static const string Password;
	bool passwordCheck;
	
	float currentDate;

	Person* P;
	int personIndex;
public:
	//Parametrized constructor. It can never be default constructor. These parameters are a must.
	Librarian(string password, float date);
	
	//To add magazines, booksand journals in the library.
	void addItems(const studyBooks& sB);
	void addItems(const Magazines& ms);
	void addItems(const Journals& js);
	void printLibrary();

	//To search for books, magazines and journals.
	void searchItems(const studyBooks *sB, const Magazines *ms, const Journals *js);

	//To add people as member of the library.
	void addPerson(const Person& p);

	int caclulatePersonIndex(const int idPerson);
	//To issue the books, magazines and journals to the person using their 'ID'.
	void issueItem(const int idPerson, const studyBooks& sB);
	void issueItem(const int idPerson, const Magazines& ms);
	void issueItem(const int idPerson, const Journals& js);
	//To print the person and their information.
	void printPerson(const Person& p);

	//To calculate the due date.
	float calculateDueDate(const int idPerson);

	//To return the issued books, magazines and journals.
	void returnItem(const int idPerson);

	~Librarian();
};

Librarian::Librarian(string password, float date) {
	if (password == Password)
		passwordCheck = true;
	else
		passwordCheck = false;

	currentDate = date;
	
	int personIndex = 0;
	P = nullptr;
}

void Librarian::addItems(const studyBooks& sB) {
	if (!passwordCheck) {
		cout << "You don't have access." << endl;
		return;
	}
	else {
		//Makes temporary, to store previous values.
		studyBooks* temporary = new studyBooks[numBooks];
		for (int t = 0; t < numBooks; t++)
			temporary[t] = books[t];

		//Makes new one, with increased capacity/size.
		Library::books = new studyBooks[++numBooks];
		for (int b = 0; b < numBooks - 1; b++)
			books[b] = temporary[b];

		delete[] temporary;
		temporary = nullptr;

		//Stores the information in it.
		Library::books[numBooks - 1].setName(sB.getName());
		Library::books[numBooks - 1].setAuthor(sB.getAuthor());

		Library::books[numBooks - 1].setID(sB.getID());
		Library::books[numBooks - 1].setEditionNum(sB.getEditionNum());
		Library::books[numBooks - 1].setPurchaseDate(sB.getPurchaseDate());
		Library::books[numBooks - 1].setIssue(sB.getIssue());

		Library::total++;
	}
}

void Librarian::addItems(const Magazines& ms) {
	if (!passwordCheck) {
		cout << "You don't have access." << endl;
		return;
	}
	else {
		//Makes temporary, to store previous values.
		Magazines* temporary = new Magazines[numMagazines];
		for (int t = 0; t < numMagazines; t++)
			temporary[t] = magazine[t];

		//Makes new one, with increased capacity/size.
		magazine = new Magazines[++numMagazines];
		for (int m = 0; m < numMagazines - 1; m++)
			magazine[m] = temporary[m];

		//Stores the information in it.
		magazine[numMagazines - 1].setName(ms.getName());
		magazine[numMagazines - 1].setAuthor(ms.getAuthor());

		magazine[numMagazines - 1].setID(ms.getID());
		magazine[numMagazines - 1].setEditionNum(ms.getEditionNum());
		magazine[numMagazines - 1].setPurchaseDate(ms.getPurchaseDate());
		magazine[numMagazines - 1].setIssue(ms.getIssue());

		total++;
	}
}
void Librarian::addItems(const Journals& js) {
	if (!passwordCheck) {
		cout << "You don't have access." << endl;
		return;
	}
	else {
		//Makes temporary, to store previous values.
		Journals* temporary = new Journals[numJournals];
		for (int t = 0; t < numJournals; t++)
			temporary[t] = journal[t];

		//Makes new one, with increased capacity/size.
		journal = new Journals[++numJournals];
		for (int j = 0; j < numJournals - 1; j++)
			journal[j] = temporary[j];

		//Stores the information in it.
		journal[numJournals - 1].setName(js.getName());
		journal[numJournals - 1].setAuthor(js.getAuthor());

		journal[numJournals - 1].setID(js.getID());
		journal[numJournals - 1].setEditionNum(js.getEditionNum());
		journal[numJournals - 1].setPurchaseDate(js.getPurchaseDate());
		journal[numJournals - 1].setIssue(js.getIssue());

		total++;

	}
}

void Librarian::searchItems(const studyBooks *sB=nullptr, const Magazines *ms= nullptr, const Journals *js= nullptr) {
	//Checks if the array[] existed or not.
	if (sB != nullptr) {
		//A check to see if item exists or not.
		bool bookCheck = false;
		for (int b = 0; b < numBooks; b++) {
			//Searches for the book, so index can be used.
			if (books[b].getID() == sB->getID()) {
				//Prints the information of searched book.
				cout << "The book you have searched for exists.\n";
				cout << "Book ID: " << books[b].getID() << endl;
				cout << "Book Name: " << books[b].getName() << endl;
				cout << "Book Author: " << books[b].getAuthor() << endl;
				cout << "Book Edition Number: " << books[b].getEditionNum() << endl;
				cout << "Book Purchase Date: " << books[b].getPurchaseDate() << endl;
				cout << endl;

				bookCheck = true;
			}
			if (bookCheck)
				break;
		}

		if (!bookCheck)
			cout << "The book you have searched for doesn't exist.\n";
	}
	//Checks if the array[] existed or not.
	if (ms != nullptr) {
		//A check to see if item exists or not.
		bool magazineCheck = false;
		for (int m = 0; m < numMagazines; m++) {
			//Searches for the magazine, so index can be used.
			if (magazine[m].getID() == ms->getID()) {
				//Prints the information of searched magazine.
				cout << "The Magazine you search for exists.\n";
				cout << "Magazine ID: " << magazine[m].getID() << endl;
				cout << "Magazine Name: " << magazine[m].getName() << endl;
				cout << "Magazine Author: " << magazine[m].getAuthor() << endl;
				cout << "Magazine Edition Number: " << magazine[m].getEditionNum() << endl;
				cout << "Magazine Purchase Date: " << magazine[m].getPurchaseDate() << endl;
				cout << endl;

				magazineCheck = true;
			}

			if (magazineCheck)
				break;
		}
		if (!magazineCheck)
			cout << "The magazine you've searched for doesn't exist.\n";
	}
	//Checks if the array[] existed or not.
	if (js != nullptr) {
		//A check to see if item exists or not.
		bool journalCheck = false;
		for (int j = 0; j < numJournals; j++) {
			//Searches for the magazine, so index can be used.
			if (journal[j].getID() == js->getID()) {
				//Prints the information of searched journal.
				cout << "The journal you've searched for exists.\n";
				cout << "Journal ID: " << journal[j].getID() << endl;
				cout << "Journal Name: " << journal[j].getName() << endl;
				cout << "Journal Author: " << journal[j].getAuthor() << endl;
				cout << "Journal Edition Number: " << journal[j].getEditionNum() << endl;
				cout << "Journal Purchase Date: " << journal[j].getPurchaseDate() << endl;
				cout << endl;

				journalCheck = true;
			}
			if (journalCheck)
				break;
		}
		if (!journalCheck)
			cout << "The journal you've searched for doesn't exist.\n";
	}
	
}

void Librarian::addPerson(const Person& p) {
	if (P == nullptr) {
		//For first instance.
		P = new Person[++personIndex];
	}
	else {
		//If the array is already filled before.
		//Stores the previous members in temporary.
		Person* temporary = new Person[personIndex];
		for (int t = 0; t < personIndex; t++) {
			temporary[t] = P[t];
		}

		delete[] P;
		//Makes space for new member.
		P = new Person[++personIndex];
		for (int t = 0; t < personIndex - 1; t++) {
			P[t] = temporary[t];
		}
		
		//memory management.
		delete[] temporary;
		temporary = nullptr;
	}

	//Stores the information of the person in that index.
	P[personIndex - 1].ID = p.ID;
	P[personIndex - 1].name = p.name;
	P[personIndex - 1].address = p.address;
	P[personIndex - 1].phoneNum = p.phoneNum;
	P[personIndex - 1].type = p.type;

}

int Librarian::caclulatePersonIndex(const int idPerson) {
	int index;
	//To first search which person is issuing the book.
	for (int p = 0; p < personIndex; p++) {
		if (P[p].ID == idPerson) {
			index = p;
			break;
		}
	}

	return index;
}

void Librarian::issueItem(const int idPerson, const studyBooks& sB) {
	int index = caclulatePersonIndex(idPerson);

	int total;
	if (P[index].type == "student")
		total = P->totalforStudents;
	else
		total = P->totalforFaculty;
	
	if (P[index].itemCount <= total-1) {
		for (int b = 0; b < numBooks; b++) {
			//Searches for the book in the library.
			if (books[b].getID() == sB.getID()) {
				//To see if the book has not already been issued.
				if (books[b].getIssue() == "available") {
				//To make the book[] array at first instance.
					if (P[index].B == nullptr) {
						P->bookCount++;
						P[index].B = new studyBooks[P->bookCount];
					}
					else {
						//Else, it stores the value of previous book[]array 
						studyBooks* temporary = new studyBooks[P->bookCount];
						for (int t = 0; t < P->bookCount; t++) {
							temporary[t] = P->B[t];
						}
						//and then makes a new one with increased capacity.
						delete[] P->B;
						P->bookCount++;
						P->B = new studyBooks[P->bookCount];
						for (int t = 0; t < P->bookCount - 1; t++) {
							P->B[t] = temporary[t];
						}

						delete[] temporary;
						temporary = nullptr;
					}

		
		
					//If found then issues that book to the student.
					P[index].B[P->bookCount - 1] = books[b];
					books[b].setIssue("issued");

					P[index].itemCount++;
				}
				break;
			}
		}

	}
	else
		return;
}

void Librarian::issueItem(const int idPerson, const Magazines& ms) {
	int index = caclulatePersonIndex(idPerson);

	int total;
	if (P[index].type == "student")
		total = P->totalforStudents;
	else
		total = P->totalforFaculty;

	if (P[index].itemCount <= total-1) {
		for (int b = 0; b < numBooks; b++) {
			//Searches for the book in the library.
			if (magazine[b].getID() == ms.getID()) {
				//To see if the book has not already been issued.
				if (magazine[b].getIssue() == "available") {
					//To make the book[] array at first instance.
					if (P[index].M == nullptr) {
						P->magazineCount++;
						P[index].M = new Magazines[P->magazineCount];
					}
					else {
						//Else, it stores the value of previous book[]array 
						Magazines* temporary = new Magazines[P->magazineCount];
						for (int t = 0; t < P->magazineCount; t++) {
							temporary[t] = P->M[t];
						}
						//and then makes a new one with increased capacity.
						delete[] P->M;
						P->magazineCount++;
						P->M = new Magazines[P->magazineCount];
						for (int t = 0; t < P->magazineCount - 1; t++) {
							P->M[t] = temporary[t];
						}

						delete[] temporary;
						temporary = nullptr;
					}



					//If found then issues that book to the student.
					P[index].M[P->magazineCount - 1] = magazine[b];
					magazine[b].setIssue("issued");

					P[index].itemCount++;
				}
				break;
			}
		}

	}
	else
		return;
}

void Librarian::issueItem(const int idPerson, const Journals& js) {
	int index = caclulatePersonIndex(idPerson);

	int total;
	if (P[index].type == "student")
		total = P->totalforStudents;
	else
		total = P->totalforFaculty;

	if (P[index].itemCount <= total-1) {
		for (int b = 0; b < numBooks; b++) {
			//Searches for the book in the library.
			if (journal[b].getID() == js.getID()) {
				//To see if the book has not already been issued.
				if (journal[b].getIssue() == "available") {
					//To make the book[] array at first instance.
					if (P[index].J == nullptr) {
						P->journalCount++;
						P[index].J = new Journals[P->journalCount];
					}
					else {
						//Else, it stores the value of previous book[]array 
						Journals* temporary = new Journals[P->journalCount];
						for (int t = 0; t < P->journalCount; t++) {
							temporary[t] = P->J[t];
						}
						//and then makes a new one with increased capacity.
						delete[] P->J;
						P->journalCount++;
						P->J = new Journals[P->journalCount];
						for (int t = 0; t < P->journalCount - 1; t++) {
							P->J[t] = temporary[t];
						}

						delete[] temporary;
						temporary = nullptr;
					}



					//If found then issues that book to the student.
					P[index].J[P->journalCount - 1] = journal[b];
					journal[b].setIssue("issued");

					P[index].itemCount++;
				}
				break;
			}
		}

	}
	else
		return;
}

void Librarian::printPerson(const Person& person) {
	int index = caclulatePersonIndex(person.ID);

	//Prints the information of the person.
	cout << "Student/Faculty: " << P[index].type << endl;
	cout << "Name: " << P[index].name << endl;
	cout << "Address: " << P[index].address << endl;
	cout << "Phone Number: " << P[index].phoneNum << endl;

	//Prints all the material/items issued.
	cout << endl;
	cout << "The Material Issued is:\n";
	for (int b = 0; b < P->bookCount; b++) {
		cout << "Book " << b + 1 << endl;
		cout << "Book ID: " << P[index].B[b].getID() << endl;
		cout << "Book Name: " << P[index].B[b].getName() << endl;
		cout << "Book Author: " << P[index].B[b].getAuthor() << endl;
		cout << "Book Edition Number: " << P[index].B[b].getEditionNum() << endl;
		cout << "Book Purchase Date: " << P[index].B[b].getPurchaseDate() << endl;
		cout << endl;
	}

	for (int m = 0; m < P->magazineCount; m++) {
		cout << "Magazine " << m + 1 << endl;
		cout << "Magazine ID: " << P[index].M[m].getID() << endl;
		cout << "Magazine Name: " << P[index].M[m].getName() << endl;
		cout << "Magazine Author: " << P[index].M[m].getAuthor() << endl;
		cout << "Magazine Edition Number: " << P[index].M[m].getEditionNum() << endl;
		cout << "Magazine Purchase Date: " << P[index].M[m].getPurchaseDate() << endl;
		cout << endl;
	}

	for (int j = 0; j < P->journalCount; j++) {
		cout << "Journal " << j + 1 << endl;
		cout << "Journal ID: " << P[index].J[j].getID() << endl;
		cout << "Journal Name: " << P[index].J[j].getName() << endl;
		cout << "Journal Author: " << P[index].J[j].getAuthor() << endl;
		cout << "Journal Edition Number: " << P[index].J[j].getEditionNum() << endl;
		cout << "Journal Purchase Date: " << P[index].J[j].getPurchaseDate() << endl;
		cout << endl;
	}
	cout << endl;
}

float Librarian::calculateDueDate(const int idPerson) {
	int index = caclulatePersonIndex(idPerson);

	//To seperate the floating point and the integer value.
	int beforeDecimal = currentDate;
	float afterDecimal = currentDate - beforeDecimal;

	//Checks if its a student or faculty.
	if (P[index].type == "student") {
		beforeDecimal += 14;
		if (beforeDecimal > 30) {
			beforeDecimal -= 30;
			afterDecimal += 0.01;
		}
	}
	else {
		afterDecimal += 0.02;
	}

	float dueDate = beforeDecimal + afterDecimal;

	return dueDate;
}

void Librarian::returnItem(const int idPerson) {
	int index = caclulatePersonIndex(idPerson);
	bool lateRecieve = true;

	//Calculates the due date.
	P[index].dueDate = calculateDueDate(idPerson);

	//To check if the person is returning items before or after due date.
	if (currentDate >= P[index].dueDate)
		lateRecieve = false;

	//Returns all the item or deletes them.
	delete[] P[index].B;
	P[index].B = nullptr;

	delete[] P[index].M;
	P[index].M = nullptr;

	delete[] P[index].J;
	P[index].J = nullptr;

	P[index].bookCount = 0;
	P[index].magazineCount = 0;
	P[index].journalCount = 0;
	P[index].itemCount = 0;
	P[index].dueDate = 0;

	//To generate chalan/fine on exceeding the due date.
	if (!lateRecieve) {
		cout << "You have returned the items late.\n";
		cout << "You will recieve a fine of Rs. 500.\n";
		P[index].fine = 500;
	}

}

Librarian::~Librarian() {
	delete []P;
	P = nullptr;
}

const string Librarian::Password = "Aalyan";

int main() {
	studyBooks b1(110, "kite runner", "khaled", 1, "02.04.23");
	studyBooks b2(111, "thousand splendid suns", "khaled", 2, "14.04.23");
	studyBooks b3(112, "diary of wimpy kid", "khaled", 2, "14.04.23");
	studyBooks b4(113, "dorothea", "khaled", 2, "14.04.23");

	Magazines m1(220, "GQ", "vogues", 14, "24.03.23");
	Magazines m2(221, "vogue", "paris", 20, "24.07.22");

	Journals j1(330, "life of pi", "unknown", 01, "30.11.23");
	Journals j2(331, "life of me", "me", 01, "18.04.04");
	Journals j3(332, "life of me", "me", 01, "18.04.04");
	
	Library l;

	Person P(1113, "Aalyan", "Rawalpindi", "03043280901", "student");
	Person P2(1000, "mahnoor", "Rawalpindi", "03043280901", "student");
	
	Librarian L("Aalyan", 12.04);
	L.addItems(b1);
	L.addItems(b2);
	L.addItems(b3);
	L.addItems(b4);
	L.addItems(m1);
	L.addItems(m2);
	L.addItems(j1);
	L.addItems(j2);
	
	L.searchItems(&b1);

	L.addPerson(P);
	L.addPerson(P2);

	L.issueItem(1113, b1);
	L.issueItem(1113, b1);
	L.issueItem(1113, m1);
	L.issueItem(1113, j1);
	L.issueItem(1113, b3);
	//P = L.issueItem(P, b4);
	L.printPerson(P);
	L.returnItem(1113);
	//L.issueItem(P, m1);

	return 0;
}