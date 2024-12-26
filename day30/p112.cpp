/*
Internship activity - <Day 30>
  Project: Rapid Vision Measuring System.
  Task: <C++ activity>
  Compiler:Windows 10
  IDE:VS Code
  Author:YESWANTHRAM R 

Q2.write a c++ program for perform string operations
Print All Permutations of a Given String in Lexicographically Sorted Order.
*/

#include <iostream>
#include <cstring>
#include <algorithm> 
using namespace std;

void swap(char* a, char* b) 
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int findCeil(char str[], char first, int l, int h) 
{
    int ceilIndex = l;

    for (int i = l + 1; i <= h; i++)
    {
        if (str[i] > first && str[i] < str[ceilIndex]) 
        {
            ceilIndex = i;
        }
    }
    return ceilIndex;
}

void Permutations(char str[]) 
{
    int size = strlen(str);

    sort(str, str + size);

    bool isFinished = false;
    
    while (!isFinished)
    {
        cout << str << endl;
        
        int i;
        
        for (i = size - 2; i >= 0; --i) 
        {
            if (str[i] < str[i + 1])
            {
                break;
            }
        }


        if (i == -1)
        {
            isFinished = true;
        }
        else 
        {
            int ceilIndex = findCeil(str, str[i], i + 1, size - 1);

            swap(&str[i], &str[ceilIndex]);

            sort(str + i + 1, str + size);
        }
    }
}


int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    char str[input.length() + 1];
    strcpy(str, input.c_str());

    cout << "\nPermutations of the given string in lexicographical order:\n";

    Permutations(str);

    return 0;
}


Output:
Enter a string: level

Permutations of the given string in lexicographical order:
eellv
eelvl
eevll
elelv
elevl
ellev
ellve
elvel
elvle
evell
evlel
evlle
leelv
leevl
lelev
lelve
level
levle
lleev
lleve
llvee
lveel
lvele
lvlee
veell
velel
velle
vleel
vlele
vllee

