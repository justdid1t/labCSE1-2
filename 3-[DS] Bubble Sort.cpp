/*Problem: We need to read the records of N students that include name roll and mark.
Then sort them on the basis of roll in ascending order.*/

//approach: We can use an adjacency list or class to store and then apply bubble sort
//Complexity: O(n^2)

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int roll,mark;
    string name;

    Node(int roll,int mark,string name)
    {
        this-> roll = roll;
        this-> mark = mark;
        this-> name = name;
    }

};

int main()
{
    int n; cin>>n;
    vector<Node> arr;
    for(int i=0; i<n; i++)
    {
       int r,m;
       string nm;
       cin>>r>>m>>nm;
       arr.push_back(Node(r,m,nm));
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(arr[j].roll > arr[j+1].roll )
            {
                Node tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for(int i=0 ; i<n; i++) cout<<arr[i].roll<<" "<<arr[i].name<<" "<<arr[i].mark<<endl;
    return 0;
}

