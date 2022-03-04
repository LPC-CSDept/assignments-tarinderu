#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14159;
    int user_choice;

    cout << "\nGeometru Calculator\n"
        << " 1. Calculate the area of a circle\n"
        << " 2. Calculate the area of a rectangle\n"
        << " 3. Calculate the area of a triangle\n"
        << " 3. Quiz\n"
        << " \nEnter your choice (1-4): ";
    cin >> user_choice;
    cout << endl;

    switch (user_choice)
    {
        float area;
        case 1:
            int radius;
            cout << "What is the radius: ";
            cin >> radius;
            
            if (radius < 0)
            {
                cout << "\nNo negative values\n" << endl;
            }
            else 
            {
                area = PI * pow(radius, 2);
                cout << "The area of the circle is " << area << endl;
            }
            break;
        
        case 2:
            float width, length;
            cout << "What is the length? " << endl;
            cin >> length;
            if (length > 0)
            {
                cout << "What is the width? " << endl;
                cin >> width;
                
                if (width > 0)
                {
                    area = length * width;
                    cout << "The area of the rectangle is " << area << endl;
                }
                else 
                {
                    cout << "\nNo negative values are accpeted." << endl;
                }
                break;
        case 3:
            float height, base;
            cout << "What is the base? ";
            cin >> base;

            if (base > 0)
            {
                cout << "What is the height? ";
                cin >> height;

                if (height > 0)
                {
                    area = (base * height) * .5;
                    cout << "Area of triangle is " << area << endl;
                }
                else 
                {
                    cout << "\nNo negative values are accpeted." << endl;
                }
            }
            break;
            case 4:
                cout << "Goodbye." << endl;
                break;
            }
    }
    cout << endl;

    return 0;
}

