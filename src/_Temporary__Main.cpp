#include "Campus.h"
#include "Fountain.h"
#include "Review.h"
#include "User.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
  Campus wwup;
  cout << "Wellcome to the Walla Walla University Yelp for drinking "
          "fountains(WWUP)"
       << endl;
  while (true) {
    int choice;
    string stChoice;
    cout << "Here are your optinons" << endl
         << "----------------------" << endl
         << "1) Display All Fountains\n2)Select a Fountain\n3)Log in\n4)Sign up"
         << endl;
    cin >> choice;
    switch (choice) {
    case 1:
      wwup.displayFountains();
      break;
    case 2:
      cout << "Enter The Desired Fountain's ID Number: ";
      cin >> stChoice;
      wwup.printFountain(stChoice);
      break;
    }
  }
}