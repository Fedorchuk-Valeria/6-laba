#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char stroka[80];
    int dlina, k, dl;

    cout << "Enter words (symbols<80):" << endl;
    gets(stroka);
    dlina = strlen(stroka);

    cout << "Stroka: ";
    for(int i = 0; i < dlina; i++)
    {
        cout << stroka[i];
    }

    cout << endl;

    cout << "Enter k < " << dlina << ": ";
    cin >> k;

    if (k > dlina)
    {
        cout << "Error";
    } else
    {
      if (stroka[k-1] == ' ')    ////Если в k-ой позиции пробел, то нужно предыдущее слово
        {
         k = k - 1;
        }
    int dll = 0;
    int i = k-1;
    while (stroka[i] != ' ' && stroka[i])
    {
        dll++;
        i--;
    }
    i = k-1;
    int m = k - dll; //// Позиция первой буквы слова
    cout << "Word: ";
    while (m < k-1)
    {
        cout << stroka[m];
        m++;
    }
    while (stroka[i] != ' ' && stroka[i])
    {
        cout << stroka[i];
        i++;
    }
    int gaps = 1;
    for (int l = 0; l < m; l++)
    {
        if (stroka[l] == ' ')
        {
            gaps++;
        }
    }
    cout << endl;
    cout << "Word number: " << gaps;
    }
return 0;
}

