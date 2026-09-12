#include <iostream>
using namespace std;
int count = 0;
int getLength(char name[])
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[100];
    cout << "Enter the Name :";
    cin >> name;
    cout << "The Length of the string is :" << getLength(name);
    return 0;
}