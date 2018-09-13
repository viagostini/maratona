#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

string sumNumericStrings (string a, string b) {
  // we make a the longer string
  if (b.size() > a.size())
    swap(a, b);

  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  string sum = "";
  int carry = 0;
  for (int i = 0; i < b.size(); i++) {
    int x = a[i] - '0';
    int y = b[i] - '0';
    int add = x + y + carry;
    sum += ((add % 10) + '0');
    carry = add / 10;
  }

  // add the rest of a
  for (int i = b.size(); i < a.size(); i++) {
    int x = a[i] - '0';
    int add = x + carry;
    sum += ((add % 10) + '0');
    carry = add / 10;
  }

  // add carry
  if (carry)
    sum += (carry + '0');

  reverse(sum.begin(), sum.end());

  return sum;
}

int main() {
  string a = "827";
  string b = "395";
  string ans = sumNumericStrings(a, b);
  cout << ans << endl;
}
