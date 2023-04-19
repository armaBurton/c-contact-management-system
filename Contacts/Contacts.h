#include <iostream>

using namespace std;

class Contacts{
public:
  string fname {}, lname {}, email {}, address {}, city {}, state {};
  int phoneNum {}, zipCode {};

  void exit () {
      cout << endl
        << "Thank you for using the Contact Management System." << endl
        << "Have a nice day" << "\U0001F600" << "!" << endl;
  }

};