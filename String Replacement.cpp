#include<bits/stdc++.h>
//using namespace std;
//By using the std:: prefix, you specify that you are using elements from the std namespace explicitly.
int main()
{
    std::string text,old_string,new_string;
    getline(std::cin,text);

    std::cin>>old_string>>new_string;

    int x = text.size();
    int y = old_string.size();

    int MAX = x-y+1;

    for(int i=0; i<MAX; i++)
    {
        int found = 1;
        for(int j=0; j<y; j++)
        {
            if(text[i+j] == old_string[j]) continue;
            else
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            text.replace(i,y,new_string);
        }
    }

    std::cout<<text<<std::endl;

    return 0;
}

