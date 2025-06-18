
//Deleting specific position from the list of array

#include <iostream>
#include <conio.h>

using namespace std;
class Arr
{
   // private:
    int arr[10],pos,i,size=5;

    public:
    void Set_data()
    {
        cout <<"Enter the numbers  ";
        for(i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        cout <<"The array before deleted ";
        for(i=0;i<size;i++)
        {
            cout<< arr[i];
            cout<<" ";
        }
        cout<<endl<<endl;

        cout <<"Enter position deletion number ";
        cin>>pos;
        for(i=pos-1;i<=size;i++) 
        {
            arr[i]=arr[i+1];
        }

    }

    void Get_data()
    {

         cout <<"The array after deleted ";
        for(i=0;i<size-1;i++)
        {
            cout<< arr[i];
            cout<<" ";
        }
    }
};

int main()
{    Arr a;
     a.Set_data();
     a.Get_data();

    return 0;
}