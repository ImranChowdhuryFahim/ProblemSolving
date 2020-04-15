#include <iostream>
using namespace std;
int main()
{
    int event,police=0,crime=0,i,a;
    cin >> event;
    for(i=1;i<=event;i++)
    {
        cin >> a;
        if(a==-1){
            if(police)
            {
                police--;
            }
            else
                {
                    crime++;
                }
            }
        else
        {
            police+=a;
        }
    }
    cout << crime << endl;
 
}