#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	string s;
	cin >> s;
	// the length of the string must be even
	// let x = 1 opening + 1 closing = 2 (balanced out)
	// let y = |s| - x
	// x + y = z
	// even + ? = even
	// in order to produce an even sum, y must be even as well
	// for the edge case: the first character != ')' and the last character != '('
	if((int) s.size() % 2 == 0 && s[0] != ')' && s.back() != '(') {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

