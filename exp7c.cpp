/*PRN: 22070123117
Experiment-no: 7(c)*/

#include <iostream>
using namespace std;
int main() {
    int a1[10]={12,33,8,51,13,9,44,2,42,82},a,count=0;
    cout<<"Enter the value to find in the array: ";
    cin>>a;
    for(int i=0; i<10; i++){
        if(a==a1[i]){
            cout<<a<<" is present in the array at position "<<i;
        }else{
            count++;
        }
    }
    if(count==10){
        cout<<"The number is not present in the array";
    }
return 0;
}

/*OUTPUT
Enter the value to find in the array: 44
44 is present in the array at position 6

Enter the value to find in the array: 1
The number is not present in the array
*/
