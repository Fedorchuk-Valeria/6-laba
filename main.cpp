#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int lenght;
    char text[80];

    cout << "Enter text:" << endl;
    gets(text);

    lenght = strlen(text);

    cout << "Text: ";
    for(int i = 0; i <  lenght; i++)
    {
        cout << text[i];
    }
    cout << endl;

    cout << "Words: ";
    for (int i = 0; i < lenght; i++)     //// Будет перебираться каждый символ текста.
    {
        if (text[i-1] == ' ' || i == 0) ////Проверка на начало слова
        {
            if (text[i] == 'a' || text[i] == 'i' || text[i] == 'e' ||
                text[i] == '0' || text[i] == 'y' || text[i] == 'u' ||
                text[i] == 'A' || text[i] == 'I' || text[i] == 'E' ||
                text[i] == 'O' || text[i] == 'Y' || text[i] == 'U')
            {
                 int k = i;
                 while (text[k] != ' ' && text[k])    //// Вычисление длины слова
                  {
                    k++;
                  }
                 if (text[k-1] == ',' || text[k-1] == '.' || text[k-1] == '!' || text[k-1] == '?' || text[k-1] == ':')
                  {
                      k = k-1;
                  }
                  int t = k-1;
                  if (text[t] == 'a' || text[t] == 'i' || text[t] == 'e' ||
                      text[t] == '0' || text[t] == 'y' || text[t] == 'u'||
                      text[t] == 'A' || text[t] == 'I' || text[t] == 'E' ||
                      text[t] == 'O' || text[t] == 'Y' || text[t] == 'U')
                      {
                          for (int s = i; s <= t; s++)
                          {
                              cout << text[s];
                          }
                          cout << " ";
                      }

            }
        }
    }
    return 0;
}
