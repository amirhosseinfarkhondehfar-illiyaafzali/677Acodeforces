#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int count=0;
    for (int i = 0; i < a; i++)
    {
        int c;
        cin >> c;
        if (c>b)
        {
            count+=2;
        }
        else
        {
            count++;
        }        
    }
    cout<<count<<endl;
}