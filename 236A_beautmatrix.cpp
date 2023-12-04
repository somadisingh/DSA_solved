/*
You've got a 5 × 5 matrix, consisting of 24 zeroes and 
a single number one. Let's index the matrix rows by numbers 
from 1 to 5 from top to bottom, let's index the matrix 
columns by numbers from 1 to 5 from left to right. In one move, 
you are allowed to apply one of the two following transformations 
to the matrix:

Swap two neighboring matrix rows, that is, rows with indexes i and 
i + 1 for some integer i (1 ≤ i < 5).
Swap two neighboring matrix columns, that is, columns with indexes 
j and j + 1 for some integer j (1 ≤ j < 5).
You think that a matrix looks beautiful, if the single number one 
of the matrix is located in its middle (in the cell that is on the 
intersection of the third row and the third column). 
Count the minimum number of moves needed to make the matrix beautiful.

Input
The input consists of five lines, each line contains five integers: 
the j-th integer in the i-th line of the input represents the element 
of the matrix that is located on the intersection of the i-th row and 
the j-th column. It is guaranteed that the matrix consists of 24 zeroes 
and a single number one.

Output
Print a single integer — the minimum number of moves needed to make 
the matrix beautiful.

input
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
output

3
input
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
output
1

LOGIC: subtract 3,3 from x and y coords of 1 in the matrix.
no need to strore input in matrix. just iterate the input keep
a counter for x and y coords of 1. then subtract 3 from both.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int one, x, y;
    for (int i = 1; i <=5; i++) {
        for (int j = 1; j <=5; j++) {
            cin>>one;
            if (one==1) {
              x=i, y=j;
              break;
            }
        }
    }
    int res = abs(3-x) + abs(3-y);
    cout<<res;
    return 0;
}

int optimized()
{
    int one, res;
    for (int i = 1; i <=5; i++) {
        for (int j = 1; j <=5; j++) {
            cin>>one;
            if (one==1) {
                res = abs(3-i) + abs(3-j);
              break;
            }
        }
    }
    cout<<res;
    return 0;
}