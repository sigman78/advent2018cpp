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
    ifstream fin("day02a.txt");

    int has_two = 0;
    int has_three = 0;
    for(auto s: istream_range<string>(fin)) {
	auto sizeup = [](auto r) -> int { return ranges::distance(r.begin(), r.end()); };
        auto counts = action::sort(s) | view::group_by(ranges::equal_to()) | view::transform(sizeup);
        has_two += ranges::count(counts, 2) > 0;
        has_three += ranges::count(counts, 3) > 0;
    }
    cout << has_two * has_three << "\n";
}