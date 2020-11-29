//інтераційний
#include <iostream>
#include <string>
using namespace std;

bool Not(char* x)
{
    for (size_t i = 0; i < strlen(x) - 2; i++)
    if (x[i] == '!' && x[i + 1] == '!' && x[i + 2] == '!')
    return true;
    return false;
}
char* change(char* x)
{
    char* xNew = new char[101];
    size_t l = 0;
    if (Not(x))
        for (size_t i = 0; i < strlen(x); i++)
        {
            if (x[i] == '!' && x[i + 1] == '!' && x[i + 2] == '!')
            {
                xNew[l] = '*';
                xNew[l + 1] = '*';

                l += 2;
                i += 2;
            }
            else
            {
                xNew[l] = x[i];
                ++l;
            }
        }
    xNew[l] = '\0';
    strcpy_s(x, strlen(xNew) + 1, xNew);
    delete[] xNew;
    return x;
}



int main()
{
    char* x = new char[101];
    cout << "Enter " << endl;
    cin.getline(x, 100);
    char* t = change(x);
    cout << t;

}