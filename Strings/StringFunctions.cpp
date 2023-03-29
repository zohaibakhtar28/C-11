#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int choice;
    int l1, l2;
    char *token;
    cout << "Enter Your Choice\n";
    cout << "Length 2.)Concatanate, 3.) Copy, 4.) Substring, 5.)Compare, 6.)Tokenise" << endl;
    cin >> choice;
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[] = "el";
    char str4[] = "x1=10;y1=20;z1=25";
    l1 = strlen(str1), l2 = strlen(str2);
    switch (choice)
    {
    case 1:
        cout << l1 << " " << l2 << endl;
        break;

    case 2:
        strcat(str1, str2);
        cout << str1 << endl;
        break;
    case 3:
        strcpy(str1, str2);
        cout << str1;
        break;
    case 4:
        cout << strstr(str1, str3) << endl;
        break;
    case 5:
        cout << strcmp(str1, str2) << endl;
        break;
    case 6:
        token = strtok(str4, ";");
        while (token != NULL)
        {
            cout << token << endl;
            token = strtok(NULL, ";");
        }
        break;
    default:
        cout << "Wrong Choice\n";
        break;
    }
    return 0;
}