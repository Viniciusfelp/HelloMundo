#include <iostream>

using namespace std;

int main()
{
    int a;
    int passou = 0;
    while(a != -1){
        cin >> a;
        if (a >= 60){
            passou+=1;
            cout << a << '\n';
            }
        }
        cout << passou;
    return 0;
}
