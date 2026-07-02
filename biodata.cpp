#include <iostream>
#include<conio.h>

using namespace std;
int main()

{

   int a[10];
    for (int i=0; i<10; i++)
    {
        cin>>a[i];

    }


    cout<< "In normal order \n";
    for (int i=0; i<10; i++)
     {
         cout<< a[i]<<",";

     }
     cout <<endl;
     for (int j=9; j>=0; j--)
     {
         cout << a[j]<< ",";

     }
     return 0;
    getch();
}
