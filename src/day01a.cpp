#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <range/v3/all.hpp>

using namespace std;
using namespace ranges;

int main(int argc, char* argv[])
{
    ifstream fin("day01a.txt");

    int res = ranges::accumulate(istream_range<int>(fin), 0);
           
    cout << res << "\n";
}