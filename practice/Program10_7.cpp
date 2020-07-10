// Program 10-7

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

const char DELIMITER = ',';  // the field delimiter

int main()
{
   // Variables for the fields.
   string name;
   int idNumber;
   string department;
   string junk;  // junk variable used to clear the input buffer

   // Variable for the number of employee records.
   double numEmployees;

   // Counter variable for the loop.
   int counter;

   // Get the number of employees.
   cout << "How many employee records do you want to create? " << endl;
   cin >> numEmployees;

   // When switching between input methods, a dummy input with the new
   // method may be necessary to clear left over newline characters.
   getline(cin, junk);

   // Open a file named employees.dat.
   ofstream employeeFile;
   employeeFile.open("employees.dat");

   // Get each employee's data and write it to the file.
   for (counter = 1; counter <= numEmployees; counter++)
   {
      // Get the employee name.
      cout << "Enter the name of employee #" << counter << endl;
      getline(cin, name);

      // Get the employee ID number.
      cout << "Enter the employee's ID number: " << endl;
      cin >> idNumber;
      getline(cin, junk);

      // Get the employee name.
      cout << "Enter the employee's department: " << endl;
      getline(cin, department);

      // Write the record to the file.
      employeeFile << name << DELIMITER;
      employeeFile << idNumber << DELIMITER;
      employeeFile << department << endl;

      // Display a blank line.
      cout << endl;
   }

   // Close the file.
   employeeFile.close();
   cout << "Employee records written to employees.dat.";
   return 0;
} // end main()
