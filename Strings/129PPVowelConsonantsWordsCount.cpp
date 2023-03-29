#include<iostream>
#include<string>
using namespace std;
int main()
{
string str = "How Are You";
int vow=0,word=1,consonant=0;
string::iterator itr;
for (int i = 0; str[i]!= '\0'; i++)
{
    if (str[i] == 'A'|| str[i] == 'a'||str[i] == 'E'||str[i] == 'e'||str[i] == 'I'||str[i] == 'i'||str[i] == 'O'||str[i] == 'o'||str[i] == 'U'||str[i] == 'u')
    {
        /* code */
        vow++;
    }
    else if (str[i] == ' ')
    {
        word++;
    }
    else
        consonant++;
    
}
cout<<"Vowels :"<<" "<<vow<<"Consonants :"<<" "<<consonant<<"Words :"<<" "<<word;

return 0;
}