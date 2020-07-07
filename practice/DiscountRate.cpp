// Chapter 6 Figure 6-15
//   psuedocode embedded as comments
// Ray Warren
// 5 June 2020 - create C++

#include <iostream>
#include <cstdlib>
using namespace std;

// Function prototypes
void housekeeping(int QUIT, int &quantity);
void determineDiscount(int SIZE, int QUIT, int &quantity, int QUAN_LIMIT[], double DISCOUNTS[] );
void finish();


// start
int main()
{
    // Declaration
      // num quantity
      int quantity;
      // num SIZE = 4
      const int SIZE = 4;
      // num DISCOUNTS[4] = 0, 0.10, 0.15, 0.20
      double DISCOUNTS[SIZE] = {0, 0.10, 0.15, 0.20};
      // num QUAN_LIMITS[4] = 0, 9, 13, 26
      int QUAN_LIMITS[SIZE] = {0, 9, 13, 26};
      // num x
      // int x;  // NOT USED
      // num QUIT = -1
      int QUIT = -1;
    // housekeeping()
    housekeeping(QUIT, quantity);
    // while quantity <> QUIT
    while (quantity != QUIT){
      // determineDiscount()
      determineDiscount(SIZE, QUIT, quantity, QUAN_LIMITS, DISCOUNTS);
    // endwhile
    } // end while
    // finish()
    finish();

  system("Pause");
  return 0;
}  // end main()
// stop

// housekeeping()
void housekeeping(int QUIT, int &quantity) {
    // output "Entry quantity ordered or ", QUIT, " to quit "
    cout << "Entry quantity ordered or " << QUIT << " to quit " << endl;
    // input quantity
    cin >> quantity;
// return
} // end housekeeping()

// determineDiscount()
void determineDiscount(int SIZE, int QUIT, int &quantity, int QUAN_LIMITS[], double DISCOUNTS[] ) {
    // x = SIZE - 1
    int x = (SIZE - 1);
    // while quantity < QUAN_LIMIT[x]
    while (quantity < QUAN_LIMITS[x]) {
        // x = x-1
        x = x-1;
    // endwhile
    } // end while
    // output "Your discount rate is ", DISCOUNTS[x]
    cout << "Your discount rate is " << DISCOUNTS[x] << endl;
    // output "Enter quantity ordered or ", QUIT, " to quit "
    cout << "Enter quantity ordered or " << QUIT << " to quit " << endl;
    // input quantity
    cin >> quantity;
// return
} // end determineDiscount()

// finish()
void finish() {
    // output "End of job"
    cout << "End of job" << endl;
// return
} // end finish()






