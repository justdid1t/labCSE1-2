#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string text,word;
    getline(cin,text);
    cin>>word;
    int cnt = 0;

//approach 1 : word counting
    /*
    stringstream ss(text);
    string s;
    while(ss >> s)
    {
        if(word == s) cnt++;
    }
    */

//approach 2 [it counts every occurance of words even if its not a word]
     /* int s = text.size();
     int r = word.size();
     int MAX = s-r+1;
     for(int i=0; i<MAX; i++)
     {
         bool found = true;
         for(int j=0; j<r; j++)
         {
             if(text[i+j] == word[j]) continue;
             else {
                found = false;
                break;
             }
         }

         if(found) cnt++;
     }  */

//word counting without using stringstream  O(MAX * r),

     int s = text.size();
     int r = word.size();
     int MAX = s-r+1;
     for(int i=0; i<MAX; i++)
     {
         bool before = false;
         bool after = false;
         if(i==0) before = true;
         else if(text[i-1] == ' ') before = true;
         bool found = true;

         if(before){
         for(int j=0; j<r; j++)
         {
             if(text[i+j] == word[j]) continue;
             else {
                found = false;
                break;
             }
         }

      }

        if(found==true && before==true && (text[i+r]==' ' || text[i+r]=='\0') ) cnt++;
     }

     cout<<cnt<<endl;
    return 0;
}

