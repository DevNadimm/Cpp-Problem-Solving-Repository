#include <iostream>
#include <string> // For using string type
using namespace std;

int main()
{
    string fullName = "Md. Nadimul Haque Chowdhury";
    char gender = 'M';       // 'M' for Male, 'F' for Female
    int age = 20;            // Age in years
    double height = 5.8;     // Height in feet
    float weight = 65.5;     // Weight in kg
    bool isStudent = true;   // true for student, false for not a student

    cout << "\n--- User Information ---" << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "Gender: " << (gender == 'M' ? "Male" : "Female") << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Student Status: " << (isStudent ? "Yes" : "No") << endl;

    /*
    ---------------------------------------------------
    | Data Type      | Variable       | Size (in bytes)|
    ---------------------------------------------------
    | string         | fullName       | Varies         |
    | char           | gender         | 1              |
    | int            | age            | 4              |
    | double         | height         | 8              |
    | float          | weight         | 4              |
    | bool           | isStudent      | 1              |
    ---------------------------------------------------
    */

    return 0;
}
