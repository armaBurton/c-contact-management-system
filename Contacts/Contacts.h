#include <deque> 
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
#define MAX_LINES 1000




class Contacts{
public:
  string id{}, fname {}, lname {}, email {}, address {}, city {}, state {};
  int phoneNum {}, zipCode {};

  void exit () {
      cout << endl
        << "Thank you for using the Contact Management System." << endl
        << "Have a nice day" << "\U0001F600" << "!" << endl;
  }

  int viewAllContacts () {
    vector<string> contactArr;
    ifstream iFile("./Contacts/contactList.txt");
    string temp {};
    
    while(getline(iFile, temp, '\n')){
      contactArr.push_back(temp);
    }

    for (const auto& i : contactArr)
        std::cout << i << std::endl;

    return 0;
  }
  
};