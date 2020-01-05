#include <iostream>

using namespace std;

int value = 1234;


int main()
{
    cout << "What is the password?: " << endl;
    cin >> value;
    if(value == 1234) cout << "you are now logged in" << endl;
    else cout << "the password is wrong!" << endl;
    return 0;
}
