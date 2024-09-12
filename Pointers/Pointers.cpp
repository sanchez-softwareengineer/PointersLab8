#include <iostream>
#include <array>
using namespace std;

int main(){
    //Declaring and initzialing variables
    unsigned int array[5] = {2,4,6,8,10};
    unsigned int* vPtr;

    //subcript notation
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    vPtr = array;
    vPtr = &array[0];

    //pointer/offset notation
    for (int i = 0; i < 5; i++) {
        cout << *(vPtr + i) << " ";
    }
    cout << endl;


    //pointer/offset notation using array name as the pointer
    for (int i = 0; i < 5; i++) {
        cout << *(array + i) << " ";
    }
    cout << endl;


    //subcript notation on pointer
    for (int i = 0; i < 5; i++) {
        cout << vPtr[i] << " ";
    }
    cout << endl;
    cout << endl;


    //refering to the 5 element
    cout << array[4] << endl;
    cout << *(vPtr + 4) << endl;
    cout << *(array + 4) << endl;
    cout << vPtr[4] << endl;
    cout << endl;


    cout << "What address is refrenced by vPtr + 3? What value is stored at that location? Address:" << vPtr + 3 << " Value: " << *(vPtr + 3) << endl;
    vPtr -= 4;
    cout << "What address is refrenced by vPtr-=4? What value is stored at that location? Address:" << vPtr << " Value: " << *vPtr << endl;


}
