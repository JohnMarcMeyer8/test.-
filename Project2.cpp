#include <iostream>
using namespace std;


int main() {
    float lengthOfARectangle;
    float widthOfARectangle;
    float perimeterOfARectangle;
    float areaOfARectangle;
    float calculation;


    cout << "Give me total lengthOfARectangle ";
    cin >> lengthOfARectangle;
    cout << "Give me total widtOfARectangle ";
    cin >> widthOfARectangle;

    perimeterOfARectangle = 2 * (lengthOfARectangle + widthOfARectangle);
    areaOfARectangle = lengthOfARectangle * widthOfARectangle;

    cout << "The permiter of a reactangle is " << perimeterOfARectangle << endl;
    cout << "The area of a rectanlge of " << areaOfARectangle << endl;

    return 0;
}
 
