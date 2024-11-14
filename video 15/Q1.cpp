#include <iostream>
using namespace std;

/**
 * @brief Convert a lowercase character to uppercase
 *
 * @param name The character to be converted
 *
 * @return The uppercase version of the character
 */
char convert(char name)
{
    char ans = name - 'a' + 'A';
    return ans;
}

int main()
{

    char name;
    cout << "Enter your character: ";
    cin >> name;

    cout << convert(name) << endl;
    return 0;
}