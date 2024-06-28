#include<iostream>
#include<algorithm>
using namespace std;

#define size 3

int main() {
    int nums[size][size];
    
    // Input elements into the array
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cin >> nums[i][j];
        }
    }
    
    // Sort each row of the array
    for(int i = 0; i < size; i++) {
        sort(nums[i], nums[i] + size);
    }
    
    // Output the sorted array
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

