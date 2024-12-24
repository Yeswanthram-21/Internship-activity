/*
Internship activity - <Day 28>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q4.write a c++ program for
 ascending and descending order of numbers but print even number first and then print 
odd numbers using vector concepts .


*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class SortEvenOdd
{
private:
    std::vector<int> nums;

public:
    void readInput()
    {
        int n, value;
        cout << "Enter the number of elements: ";
        cin >> n;
        cout << "Enter " << n << " integers:\n";
        for (int i = 0; i < n; ++i)
        {
            cin >> value;
            nums.push_back(value);
        }
    }

    void sortAscending()
    {
        auto customComparator = [](int a, int b) {
            if ((a % 2 == 0) == (b % 2 == 0))
            {
                return a < b;
            }
            return a % 2 == 0;
        };
        sort(nums.begin(), nums.end(), customComparator);
    }

    void sortDescending()
    {
        auto customComparator = [](int a, int b) {
            if ((a % 2 == 0) == (b % 2 == 0))
            {
                return a > b;
            }
            return a % 2 == 0;
        };
        sort(nums.begin(), nums.end(), customComparator);
    }

    void printAscending() const
    {
        cout << "Sorted in ascending order:\n";
        for (const auto &num : nums)
        {
            cout << num << " ";
        }
        cout << "\n";
    }

    void printDescending() const
    {
        cout << "Sorted in descending order:\n";
        for (const auto &num : nums)
        {
            cout << num << " ";
        }
        cout << "\n";
    }
};

int main()
{
    SortEvenOdd sorter;

    sorter.readInput();

    sorter.sortAscending();
    sorter.printAscending();

    sorter.sortDescending();
    sorter.printDescending();

    return 0;
}

Output:

Enter the number of elements: 6   
Enter 6 integers:
1 2 3 4 5 6

Sorted in ascending order:
2 4 6 1 3 5 

Sorted in descending order:
6 4 2 5 3 1 
