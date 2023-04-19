#include <iostream>
#include <string>

using namespace std;

int main() {
  string option {};

  cout << endl
       << "You have accessed the Contact Management System. Please select an numerical value associated with a following option." << endl
       << endl;

  while(true){
    cout << "1) View Contacts" << endl
         << "2) Add Contacts" << endl
         << "3) Edit Contacts" << endl
         << "4) Delete Contact" << endl
         << "5) Find Contact" << endl
         << endl
         << "#? ";

  }

  return 0;
}