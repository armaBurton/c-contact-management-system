#include <deque> 
#include <iostream>
#include <fstream>
#include <string>

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
    string filename = "./contactList.txt";
    ifstream iFile;
    string array[MAX_LINES];

    iFile.open(filename);
    if(iFile.fail()){
      cout << "No such file exists." << endl;
      
      return 1;
    }
    int lines = 0;
    while(!iFile.eof()){
      getline(iFile, array[lines]);
      lines++;
      cout << lines << endl;
      // if(lines == MAX_LINES){
      //   cout << "Max storage reached" << endl;
      //   break;
      // }
    } 

    iFile.close();

    for (int i = 0; i < lines; i++){
      cout << array[i] << endl;
    }

    return 0;
  }
  
};