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

    auto to_int = [](const auto& s){ return stoi(s); };
    int res = ranges::accumulate(getlines(fin) | view::transform(to_int)
            , 0);
           
    cout << res << "\n";
}