#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char* argv[]){

    int count = 0;
    int n = 0;
    int current = 0;
    cin >> count;

    if(count < 1 || count > 50){
        cout << "Please check the number of test case." << endl;
        return 0;
    }
    
    while(current < count){

        cin >> n;
    
        unsigned long long int index1, index2, index3, index4;
        unsigned long long int temp1, temp2, temp3, temp4;

        index1 = 2;
        index2 = 6;
        index3 = 19;
        temp1 = 0;
        temp2 = 0;
        temp3 = 0;
        temp4 = 0;

        for(int i=4; i<n; i++){
            
            index4 = 5*index3 - 7*index2 + 4*index1;

            index1 = index2;
            index2 = index3;
            
            if(index4 > 10000000){
                temp4 = index4/10000000;
                index3 = index4%10000000;
            }
            else 
                index3 = index4;
            
            temp1 = temp2;
            temp2 = temp3;
            
        }

        cout << index4 << endl;

        current ++;
    }

    return 0;
}
