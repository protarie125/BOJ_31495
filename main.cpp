#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  getline(cin, s);

  if (s.length() < 2) {
    cout << "CE";
    return 0;
  }

  if ('\"' == s.front() && '\"' == s.back()) {
    if (2 < s.length()) {
      cout << s.substr(1, s.length() - 2);
    } else {
      cout << "CE";
    }
  } else {
    cout << "CE";
  }

  return 0;
}