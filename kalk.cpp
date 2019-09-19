#include <iostream>

using namespace std;
char znak;
int b,c;
int main()
{

      while ( cin >> znak >> b >> c)
        {
        switch (znak)
        {
        case '+':
            cout << b+c << endl;
            break;
        case '-':
            cout << b-c << endl;
            break;
        case '*':
            cout << b*c << endl;
            break;
        case '/':
            if(c != 0)
                cout << b/c << endl;
            else cout << "blad" << endl;
            break;
        case '%':
            cout << b%c << endl;
            break;
        }
    }
    return 0;
}
