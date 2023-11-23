#include <iostream>
#include <string.h>

using std::endl;
using std::cout;
using std::cin;


int main()
{
    const int SIZE = 5;
    char text[SIZE];
    char edit_text[SIZE];

    while (cin.getline(text, SIZE))
    {
        if (!strcmp(text, ""))
        {
            break;
        }
    }

    int checker = false;
    int index = 0;

    for (int i = 0; i < SIZE; ++i)
    {
        for (int n = 0; n < SIZE; ++n)
        {
            if (i == n)
            {
                continue;
            }

            if (text[i] != text[n])
            {
                checker = false;
            }
            else
            {
                checker = true;
                break;
            }
        }

        if (checker)
        {
            edit_text[index] = text[i];
            ++index;
        }
    }

    for (int i = 0; i < index; ++i)
    {
        cout << edit_text[i];
    }

}
