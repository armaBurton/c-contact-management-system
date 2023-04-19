#include <iostream>
#include <string>
#include "Contacts/Contacts.h"

using namespace std;

int main() {
  string option {};
  Contacts contactList {};

  cout << endl
       << "You have accessed the Contact Management System. Please select an numerical value associated with a following option." << endl
       << endl;

  while(true){
    cout << "1) View Contacts" << endl
         << "2) Add Contacts" << endl
         << "3) Edit Contacts" << endl
         << "4) Delete Contact" << endl
         << "5) Find Contact" << endl
         << "6) Exit Contact Management System" << endl
         << endl
         << "#? ";
    cin >> option;
    cout << endl;

    if (option == "6"){ //exit CMS
      contactList.exit();
      break;
    }


  }

  return 0;
}