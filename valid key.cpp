#include <bits/stdc++.h>
using namespace std;
string validKeyWords(string key)
{
    string keyword[32]=
    {
        "auto","double","int","struct","break","else","long",
        "switch","case","enum","register","typedef","char",
        "extern","return","union","const","float","short",
        "unsigned","continue","for","signed","void","default",
        "goto","sizeof","voltile","do","if","static","while"
    } ;
    int flag=0;

    for(int i = 0; i < 32; i++)
    {
        if(key==keyword[i])
        {
            flag=1;
        }
    }
    if(flag==1)
        cout<<key<<" is keyword.";
    else
        cout<<key<<" is not keyword.";
    return key;
}
int main()
{
    string str;
    cout<<"Enter a keyword: ";
    cin>>str;
    validKeyWords(str);

}
