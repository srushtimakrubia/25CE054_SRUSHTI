#include "calculation.h"

int main()
{
    calculation c1[5];
    int ch, i, j;

    do
    {
        cout << "\n===== CALCULATE DIMENSION OF EACH PLOT =====\n";
        cout << "1. Calculate area and perimeter\n";
        cout << "2. Update the value\n";
        cout << "3. Show length and width\n";
        cout << "4. Check square\n";
        cout << "5. Compare two rectangles (by area)\n";
        cout << "6. Exit\n";
        cout << "Enter your choice:\n";
        cin >> ch;

        switch (ch)
        {
        case 1:
            for (i = 0; i < 5; i++)
            {
                cout << "\nPlot no. " << i + 1 << endl;

                if (c1[i].setLength() > 0 && c1[i].setWidth() > 0)
                {
                    c1[i].calculate_area();
                    c1[i].calculate_para();
                }
                else
                {
                    cout << "Negative and zero not valid\n";
                }
            }
            break;

        case 2:
            cout << "Enter index (0-4): ";
            cin >> i;

            if (i >= 0 && i < 5)
            {
                c1[i].setLength();
                c1[i].setWidth();
                c1[i].show_dimension();
                c1[i].calculate_area();
                c1[i].calculate_para();
            }
            else
                cout << "Invalid index\n";
            break;

        case 3:
            for (i = 0; i < 5; i++)
            {
                cout << "\nPlot no. " << i + 1 << endl;
                c1[i].show_dimension();
            }
            break;

        case 4:
            cout << "Enter index to check square: ";
            cin >> i;

            if (i >= 0 && i < 5)
            {
                if (c1[i].issquare())
                    cout << "It is a square\n";
                else
                    cout << "It is not a square\n";
            }
            else
                cout << "Invalid index\n";
            break;

        case 5:
            cout << "Enter two index values: ";
            cin >> i >> j;

            if (i >= 0 && i < 5 && j >= 0 && j < 5)
            {
                if (c1[i].getArea() > c1[j].getArea())
                    cout << "Index " << i << " has bigger area\n";
                else
                    cout << "Index " << j << " has bigger area\n";
            }
            else
                cout << "Invalid index\n";
            break;

        case 6:
            cout << "Exit\n";
            break;

        default:
            cout << "Enter valid number\n";
        }

    } while (ch != 6);
}
