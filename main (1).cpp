#include <iostream>
using namespace std;
int main()
{
    
    int arr[4][2] = { { 1, 1 },
        { 1, -1 },
        { -1, 1 },
        { -1, -1 }
    };
      
    
    int t[4] = { 1, 1, 1, -1 }, i, j;
    float yi, dif, dw1, dw2, db, w1 = 0.1, w2 = 0.1, b = 0.1,a = 0.1, err[4];
  
    
  
    for (i = 0; i < 5; i++)
    {
        float avg = 0;
          
        cout << "EPOCH " << i + 1 << " Errors" << endl
             << endl;
        for (j = 0; j < 4; j++)
        {
            
            yi = arr[j][0] * w1 + arr[j][1] * w2 +  b;
            cout<<"\n"<<yi;
            dif = t[j] - yi;
            cout<<"\n"<<dif<<"\n";  
           
            cout<<(a * dif * arr[j][0])<<" ";
            cout<<(a * dif * arr[j][1])<<" ";
            cout<<(a * dif * 1)<<" \n";
            w1 += a * dif * arr[j][0];
            w2 += a * dif * arr[j][1];
            b += a * dif * 1;
            err[j] = dif * dif;
            
            avg += err[j];
            cout<<w1<<" ";
            cout<<w2<<" ";
            cout<<b<<" ";
            cout << "\n"<<err[j] << "\n";
        }
        cout << endl
             << "Total Mean Error :" << avg << endl
             << endl
             << endl;
    }
    return 0;
}