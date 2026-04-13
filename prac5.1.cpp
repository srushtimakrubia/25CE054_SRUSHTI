#include<iostream>
#include<string>
using namespace std;

int main()
{
    int flag;
    string paragraph;
    cout << "enter the paragraph : " ;
    getline(cin , paragraph);

    for(int i=0; paragraph[i]!='\0'; i++)
    {
        if('A'<= paragraph[i] && paragraph[i] <= 'Z')

        {
            paragraph[i] = paragraph[i] + 32;
        }
    }

    for(int i=0; paragraph[i]!='\0'; i++)
    {
        cout << paragraph[i];
    }
    char ch;
    int count=0 ;
    string temp = "" , word[100];
    for(int i=0; paragraph[i]!='\0'; i++)
    {
        ch = paragraph[i];
        if(ch!=' ')
        {
            temp += ch;
        }
        else
        {
            word[count] = temp;
            count++;
            temp = "";
        }
}
 if(temp!="")
    {
        word[count++] = temp;
    }
bool visited[100] = {false};

    for(int i=0; i<count; i++)
    {
        if(visited[i]==true)
        {
            continue;
        }

        int flag = 1;

        for(int j=i+1;j<count; j++)
        {
            if(word[i]==word[j])
            {
                flag++;
                visited[j] = true;

            }
        }
        cout << word[i] << " = " << flag;

    }
}

