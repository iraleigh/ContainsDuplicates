#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool containsDuplicates(vector<int>& nums) {
  unordered_set<int> set; // set { 1, 2, 3 }
                          // map { { 0, 1 }, { 1, 2 } }

  for (int n : nums) { 
    // unordered_set -> HashSet
    // unordered_map -> HashMap

    // O(1)
    if (set.count(n) > 0) {
      return true;  
    }

    set.insert(n);
  }

  return false;
}

int main() {
  vector<int> nums { 1, 1, 3, 1 };

  if (containsDuplicates(nums)) {
    cout << "Contains Duplicates!" << endl;
  }
  
}