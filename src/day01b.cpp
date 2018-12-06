#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_set>
#include <range/v3/all.hpp>

using namespace std;
using namespace ranges;

int main(int argc, char* argv[])
{
    ifstream fin("day01b.txt");

    unordered_set<int> nums;
    auto data = istream_range<int>(fin) | to_vector;
    auto sums = data | view::cycle | view::partial_sum;
    for(auto n: sums) {
        if (nums.count(n) != 0) {
            cout << n << "\n";
            break;
        }
        nums.insert(n);
    }
}