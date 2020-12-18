#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N;
    int digit_number = 1;
    int sum = 0;
    cout << "Enter amount of elements: ";
    cin >> N;

    char* line = new char [N];
    for (int i = 0; i < N; i++)
    {
        cout << "Enter line element: ";
        cin >> line[i];
    }

    cout << endl;

    cout << "Line: ";
    for (int i = 0; i < N; i++)
    {
        cout << line[i];
    }
    cout << endl;

    for (int i = 0; i < N; i++)
    {
        if (line[i] == '0' || line[i] == '1' || line[i] == '2' || line[i] == '3' || line[i] == '4' ||
            line[i] == '5' || line[i] == '6' || line[i] == '7' || line[i] == '8' || line[i] == '9')
        {
            int a = line[i] - '0';
            digit_number++;
            sum += pow(-1, digit_number) * a;
        }
    }
    cout << "Sum = " << sum;




    delete[] line;
    line = nullptr;
    return 0;
}
