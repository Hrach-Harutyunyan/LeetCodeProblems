/* Given an n x n matrix where each of the rows and columns is sorted in ascending order, 
return the kth smallest element in the matrix.

Note that it is the kth smallest element in the sorted order, not the kth distinct element.

You must find a solution with a memory complexity better than O(n2) */

#include <iostream>
#include <vector>
#include <queue>

using std::vector;

int kthSmallest (vector <vector <int> >&, int);

int main () {
    int k = 1;
    vector <vector <int> > vec {
        {1,5,9},
        {10,11,13},
        {12,13,15}
    };
    std::cout << kthSmallest (vec,k);

    return 0;
}

int kthSmallest (vector<vector <int> >& matrix, int k) {
    std::priority_queue <int> pq;
    for (int i{}; i < matrix.size(); i++) {
        for (int j{}; j < matrix[0].size(); j++) {
            pq.push (matrix[i][j]);
            if (pq.size () > k) {
                pq.pop ();
            }
        }
    }
    return pq.top();
}