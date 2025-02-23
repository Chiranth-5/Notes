#include <iostream>
using namespace std;

#include <stdexcept>

/*int main() 
{
    try {
        int choice;
        cout << "Enter 1 for int exception, 2 for float exception: ";
        cin >> choice;

        if (choice == 1) {
            throw 10;  // Throwing an integer exception
        } else if (choice == 2) {
            throw 3.14f;  // Throwing a float exception
        } else if (choice == 3){
            throw std::invalid_argument("this value is not allowed");
        } else {
            throw "Invalid choice!";  // Throwing a string exception
        }
    }
    catch (int e) {
        cout << "Caught an integer exception: " << e << endl;
    }
    catch (float e) {
        cout << "Caught a float exception: " << e << endl;
    }
    catch (const char* e) {
        cout << "Caught a string exception: " << e << endl;
    }
    catch (const std::invalid_argument& e) {
        cout << "Exception caught: " << e.what() << endl;
    }
    cout << "Program continues after exception handling." << endl;
    return 0;
}


If there is no catch block to handle an exception thrown by throw, the program will:

1.Terminate abruptly: The program will call the standard library function std::terminate(), which typically ends the program immediately.
2.No cleanup: Destructors for local objects may not be called, leading to potential memory leaks.
3.Error message: Depending on the compiler, an error message may be displayed indicating an unhandled exception.

*/
