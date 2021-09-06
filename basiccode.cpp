#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(100,0);
    for(int i=0;i<100;i++)
    {
        v[i] = rand()%1000;
    }
    int x=v[0];
    for(int i=0;i<100;i++)
    {
        if(v[i]<x)
        {
            x=v[i];
        }
    }
    cout<<"smallest element is: "<<x;
}
