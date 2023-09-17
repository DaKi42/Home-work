#include <iostream>
using namespace std;

class Person {
private:
	char* name;
	char* surname;
	char* middleName;
	char* homePhone;
	char* workPhone;
	char* mobilePhone;
	char* addInfo;
public:

	Person() {
		name = nullptr;
		surname = nullptr;
		middleName = nullptr;
		homePhone = nullptr;
		workPhone = nullptr;
		mobilePhone = nullptr;
		addInfo = nullptr;

		cout << "Constructor by default" << endl;
	}
	Person(const char* n, const char* s, const char* mp, const char* ai) {
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);

		surname = new char[strlen(s) + 1];
		strcpy_s(surname, strlen(s) + 1, s);

		middleName = nullptr;
		homePhone = nullptr;
		workPhone = nullptr;

		mobilePhone = new char[strlen(mp) + 1];
		strcpy_s(mobilePhone, strlen(mp) + 1, mp);

		addInfo = new char[strlen(ai) + 1];
		strcpy_s(addInfo, strlen(ai) + 1, ai);

		cout << "Constructor with four parameters" << endl;
	}
	Person(const char* n, const char* s, const char* mn, const char* hp, const char* wp, const char* mp, const char* ai) {
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);

		surname = new char[strlen(s) + 1];
		strcpy_s(surname, strlen(s) + 1, s);

		middleName = new char[strlen(mn) + 1];
		strcpy_s(middleName, strlen(mn) + 1, mn);

		homePhone = new char[strlen(hp) + 1];
		strcpy_s(homePhone, strlen(hp) + 1, hp);

		workPhone = new char[strlen(wp) + 1];
		strcpy_s(workPhone, strlen(wp) + 1, wp);

		mobilePhone = new char[strlen(mp) + 1];
		strcpy_s(mobilePhone, strlen(mp) + 1, mp);

		addInfo = new char[strlen(ai) + 1];
		strcpy_s(addInfo, strlen(ai) + 1, ai);

		cout << "Constructor with full parameters" << endl;
	}

	~Person() {
		delete[]name;
		delete[]surname;
		delete[]middleName;
		delete[]homePhone;
		delete[]workPhone;
		delete[]mobilePhone;
		delete[]addInfo;
	}

	int GetName() {
		return*name;
	}
	int GetSurname() {
		return*surname;
	}
	int GetMiddleName() {
		return*middleName;
	}
	int GetHomePhone() {
		return*homePhone;
	}
	int GetWorkPhone() {
		return*workPhone;
	}
	int GetMobilePhone() {
		return*mobilePhone;
	}
	int GetAddInfo() {
		return*addInfo;
	}

	void SetName(const char* a) {
		if (name != nullptr) {
			cout << "Delete name: " << name << endl;
			delete[] name;
		}
		name = new char[strlen(a) + 1];
		strcpy_s(name, strlen(a) + 1, a);
	}
	void SetSurname(const char* a) {
		if (surname != nullptr) {
			cout << "Delete surname: " << surname << endl;
			delete[] surname;
		}
		surname = new char[strlen(a) + 1];
		strcpy_s(surname, strlen(a) + 1, a);
	}
	void SetMiddleName(const char* a) {
		if (middleName != nullptr) {
			cout << "Delete middlename: " << middleName << endl;
			delete[] middleName;
		}
		middleName = new char[strlen(a) + 1];
		strcpy_s(middleName, strlen(a) + 1, a);
	}
	void SetHomePhone(const char* a) {
		if (homePhone != nullptr) {
			cout << "Delete home phone: " << homePhone << endl;
			delete[] homePhone;
		}
		homePhone = new char[strlen(a) + 1];
		strcpy_s(homePhone, strlen(a) + 1, a);
	}
	void SetWorkPhone(const char* a) {
		if (workPhone != nullptr) {
			cout << "Delete work phone: " << workPhone << endl;
			delete[] homePhone;
		}
		workPhone = new char[strlen(a) + 1];
		strcpy_s(workPhone, strlen(a) + 1, a);
	}
	void SetMobilePhone(const char* a) {
		if (mobilePhone != nullptr) {
			cout << "Delete mobile phone: " << mobilePhone << endl;
			delete[] mobilePhone;
		}
		mobilePhone = new char[strlen(a) + 1];
		strcpy_s(mobilePhone, strlen(a) + 1, a);
	}
	void SetAddInfo(const char* a) {
		if (addInfo != nullptr) {
			cout << "Delete additional info: " << addInfo << endl;
			delete[] mobilePhone;
		}
		addInfo = new char[strlen(a) + 1];
		strcpy_s(addInfo, strlen(a) + 1, a);
	}

	void InputPerson() {
		char buff[64];

		cout << "Enter name: ";
		cin >> buff;
		if (name != nullptr) {
			cout << "Delete name: " << name << endl;
			delete[] name;
		}
		name = new char[strlen(buff) + 1];
		strcpy_s(name, strlen(buff) + 1, buff);

		cout << "Enter middlename: ";
		cin >> buff;
		if (middleName != nullptr) {
			cout << "Delete middlename: " << middleName << endl;
			delete[] middleName;
		}
		middleName = new char[strlen(buff) + 1];
		strcpy_s(middleName, strlen(buff) + 1, buff);

		cout << "Enter surname: ";
		cin >> buff;
		if (surname != nullptr) {
			cout << "Delete surname: " << surname << endl;
			delete[] surname;
		}
		surname = new char[strlen(buff) + 1];
		strcpy_s(surname, strlen(buff) + 1, buff);

		cout << "Enter home phone: ";
		cin >> buff;
		if (homePhone != nullptr) {
			cout << "Delete home phone: " << homePhone << endl;
			delete[] homePhone;
		}
		homePhone = new char[strlen(buff) + 1];
		strcpy_s(homePhone, strlen(buff) + 1, buff);

		cout << "Enter work phone: ";
		cin >> buff;
		if (workPhone != nullptr) {
			cout << "Delete work phone: " << workPhone << endl;
			delete[] workPhone;
		}
		workPhone = new char[strlen(buff) + 1];
		strcpy_s(workPhone, strlen(buff) + 1, buff);

		cout << "Enter mobile phone: ";
		cin >> buff;
		if (mobilePhone != nullptr) {
			cout << "Delete mobile phone: " << mobilePhone << endl;
			delete[] mobilePhone;
		}
		mobilePhone = new char[strlen(buff) + 1];
		strcpy_s(mobilePhone, strlen(buff) + 1, buff);

		cout << "Enter additional info: ";
		cin.getline(buff, sizeof(buff));
		if (addInfo != nullptr) {
			cout << "Delete additional info: " << addInfo << endl;
			delete[] addInfo;
		}
		addInfo = new char[strlen(buff) + 1];
		strcpy_s(addInfo, strlen(buff) + 1, buff);
	}
	void ShowBook() {
		cout << name << " " << middleName << " " << surname << endl;
		cout << "Home phone: " << homePhone << endl;
		cout << "Work phone: " << workPhone << endl;
		cout << "Mobile phone: " << mobilePhone << endl;
		cout << "Additional info: " << addInfo << endl;
	}
};

int main() {
	int choice, numcontacts = 0;
	Person phonebook[100];

	while (true) {
		cout << "1. Add to phonebook" << endl;
		cout << "2. Delete from phonebook" << endl;
		cout << "3. Find in phonebook" << endl;
		cout << "4. Show all in phonebook" << endl;
		cout << "5. Save phonebook to file" << endl;
		cout << "6. Import phonebook from file" << endl;
		cout << "7. Exit" << endl;

		cout << "\nYour choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			phonebook[numcontacts].InputPerson();
			numcontacts++;
			break;
		case 4:
			for (int i = 0; i > numcontacts; i++) {
				phonebook[i].ShowBook();
			}
			break;
		case 7:
			return 0;
		}

	}

}