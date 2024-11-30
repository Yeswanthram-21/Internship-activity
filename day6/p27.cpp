/*Internship activity - <Day 6>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q2. C++ program to find 
    Given two integer arrays nums1 and nums2, return an array of their 
intersection Each element in the result must be unique and you may return the result in any order.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
 
*/
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    
    // Take input for the size of both arrays
    cout << "Enter the size of the first array: ";
    cin >> n1;
    int nums1[n1];
    
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }
    
    cout << "Enter the size of the second array: ";
    cin >> n2;
    int nums2[n2];
    
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }
    
    // Intersection array (maximum size is min(n1, n2))
    int intersection[n1 < n2 ? n1 : n2]; // Maximum possible size
    int count = 0;  // Keeps track of the number of unique intersection elements
    
    // Loop through nums1 and find common elements in nums2
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            // If nums1[i] is found in nums2
            if (nums1[i] == nums2[j]) {
                // Check if nums1[i] is already in the intersection array
                int alreadyAdded = 0;
                for (int k = 0; k < count; k++) {
                    if (intersection[k] == nums1[i]) {
                        alreadyAdded = 1;
                        break;
                    }
                }

                // If not already in intersection array, add it
                if (alreadyAdded == 0) {
                    intersection[count] = nums1[i];
                    count++;
                }
                break; // No need to check further for this nums1[i]
            }
        }
    }
    
    // Output the intersection
    cout << "Intersection of the arrays: ";
    for (int i = 0; i < count; i++) {
        cout << intersection[i] << " ";
    }
    cout << endl;
    
    return 0;
}

Output:
Enter the size of the first array: 4
Enter the elements of the first array: 1 2 3 4
Enter the size of the second array: 5
Enter the elements of the second array: 3 4 6 7 8
Intersection of the arrays: 3 4 
