/*
Name: Saurav Kumar

Write a function that takes a collection, and two +ve integers size and step. 
The function should partition the collection into items represented by "size", at offset as denoted by "step".
Example input and output:
Say input_collection is [c]
function(input_collection, size=2, step=1) => [[1, 2], [2, 3], [3, 4], [4, 5], [5,6]]
function(input_collection, size=2, step=2) => [[1, 2], [3, 4], [5, 6]]
function(input_collection, size=2, step=3) => [[1, 2], [4, 5]]
function(input_collection, size=3, step=2) => [[1, 2, 3], [3, 4, 5]]
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> partition(vector<int> temp, int size, int step);

int main() {
    vector<int> temp = {1,2,3,4,5};
    vector<pair<int, int>> test = {{2, 1}, {2,2}, {2,3}, {3,2}};
    for(auto t : test) {
      int size = t.first;
      int step = t.second;
      vector<vector<int>>  res = partition(temp, size, step);
      for(auto i : res) {
	  for(int ii : i) {
	      cout << ii << " ";
	  } cout << "       ";
      } cout << '\n';
    }
}
vector<vector<int>> partition(vector<int> temp, int size, int step) {
    // assuming values of size & step are +ive ( step >= size > 0)
    vector<vector<int>> res;
    int len = temp.size();
    if(len == 0 || size == 0 || size > len ) return res;

    for(int i = 0; i+ size <= len  ; i+=step) {
        vector<int> currv;
        int curr = 0;
        while(curr < size && i+size <= len) {
            currv.push_back(temp[i+curr]);
            curr++;
        }
        res.push_back(currv);
    }
    return res;
}





