#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    int i,maxx=0,ans=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>maxx){maxx=a[i];}
    }

    for(i=0;i<n;i++)
    {
        ans=ans+maxx-a[i];
    }

    cout<<ans;


    return 0;
}

