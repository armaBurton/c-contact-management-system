#include <deque> 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Contacts{
public:
  string id{}, fname {}, lname {}, email {}, address {}, city {}, state {};
  int phoneNum {}, zipCode {};

  void exit () {
      cout << endl
        << "Thank you for using the Contact Management System." << endl
        << "Have a nice day" << "\U0001F600" << "!" << endl;
  }

  void viewAllContacts () {
    deque<string> contacts {};

    fstream contactFile("contactList.txt");

    string contact {};

    while(contactFile >> contact){
      contacts.push_back(contact);
    }

    for(string c : contacts){
      cout << c << endl;
    }
    cout << contacts << endl;
    contactFile.close();
  }

};