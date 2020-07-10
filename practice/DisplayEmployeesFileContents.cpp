// Program 10-8

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

const char DELIMITER = ',';  // the field delimiter

int main()
{
   // Variables for the fields.
   string name;
   string idNumber;
   string department;
   string record;  // capture a single line from the file
   int delimiterPosition;  // the index of the field delimiter
   int fieldStart;  // the beginning of the next field

   // Open a file named employees.dat.
   ifstream employeeFile;
   employeeFile.open("employees.dat");

   cout << "Here are the employee records." << endl;

   // Display the records in the file.
   // quit loop when eof
   while (getline(employeeFile, record))
   {
      // clear the position pointers for the next record
      delimiterPosition = 0;
      fieldStart = 0;

      // First, read the name.
      // find the position of the first delimiter
      delimiterPosition = record.find(DELIMITER, fieldStart);
      name = record.substr(fieldStart, delimiterPosition-fieldStart);

      // Next read the ID number.
      // Read the newline that was left by nextInt...
      fieldStart = delimiterPosition + 1;  // position to the next field
      delimiterPosition = record.find(DELIMITER, fieldStart);
      idNumber = record.substr(fieldStart, delimiterPosition-fieldStart);

      // Read the department.
      fieldStart = delimiterPosition + 1;  // position to the next field
      delimiterPosition = record.find(DELIMITER, fieldStart);
      department = record.substr(fieldStart, delimiterPosition-fieldStart);

      // Display the record.
      cout << "Name: " << name << endl;
      cout << "ID Number: " << idNumber << endl;
      cout << "Department: " << department << endl;

      // Display a blank line.
      cout << endl;
   }

   // Close the file.
   employeeFile.close();
   return 0;
}  // end main()
