#include <bits/stdc++.h>
using namespace std;
typedef long long num;
typedef vector<int> vi;

const int MAX = 25;

int n;
int r[MAX];
int g[MAX];
int b[MAX];

int memo[MAX][4];

int minCost(int i, int last){
    if(i == n) return 0;

    int &m = memo[i][last];

    if(m != -1) return m;

    m = INT_MAX;

    if(last != 0) m = min(m, r[i] + minCost(i+1, 0));
    if(last != 1) m = min(m, g[i] + minCost(i+1, 1));
    if(last != 2) m = min(m,b[i] + minCost(i+1, 2));

    return m;
}

class RGBStreet {
public:
   int estimateCost( vector <string> houses ) {
       n = houses.size();
       memset(memo, -1, sizeof memo);
       for(int i = 0; i < n; i++){
            istringstream iss(houses[i]);
            iss >> r[i] >> g[i] >> b[i];
       }
       return minCost(0, 3);
   }
};

// BEGIN CUT HERE
#include <cstdio>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
namespace moj_harness {
	using std::string;
	using std::vector;
	int run_test_case(int);
	void run_test(int casenum = -1, bool quiet = false) {
		if (casenum != -1) {
			if (run_test_case(casenum) == -1 && !quiet) {
				std::cerr << "Illegal input! Test case " << casenum << " does not exist." << std::endl;
			}
			return;
		}

		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = run_test_case(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}

		if (total == 0) {
			std::cerr << "No test cases run." << std::endl;
		} else if (correct < total) {
			std::cerr << "Some cases FAILED (passed " << correct << " of " << total << ")." << std::endl;
		} else {
			std::cerr << "All " << total << " tests passed!" << std::endl;
		}
	}

	int verify_case(int casenum, const int &expected, const int &received, std::clock_t elapsed) {
		std::cerr << "Example " << casenum << "... ";

		string verdict;
		vector<string> info;
		char buf[100];

		if (elapsed > CLOCKS_PER_SEC / 200) {
			std::sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}

		if (expected == received) {
			verdict = "PASSED";
		} else {
			verdict = "FAILED";
		}

		std::cerr << verdict;
		if (!info.empty()) {
			std::cerr << " (";
			for (size_t i=0; i<info.size(); ++i) {
				if (i > 0) std::cerr << ", ";
				std::cerr << info[i];
			}
			std::cerr << ")";
		}
		std::cerr << std::endl;

		if (verdict == "FAILED") {
			std::cerr << "    Expected: " << expected << std::endl;
			std::cerr << "    Received: " << received << std::endl;
		}

		return verdict == "PASSED";
	}

	int run_test_case(int casenum__) {
		switch (casenum__) {
		case 0: {
			string houses[]           = {"1 100 100", "100 1 100", "100 100 1"};
			int expected__            = 3;

			std::clock_t start__      = std::clock();
			int received__            = RGBStreet().estimateCost(vector <string>(houses, houses + (sizeof houses / sizeof houses[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			string houses[]           = {"1 100 100", "100 100 100", "1 100 100"};
			int expected__            = 102;

			std::clock_t start__      = std::clock();
			int received__            = RGBStreet().estimateCost(vector <string>(houses, houses + (sizeof houses / sizeof houses[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			string houses[]           = {"26 40 83", "49 60 57", "13 89 99"};
			int expected__            = 96;

			std::clock_t start__      = std::clock();
			int received__            = RGBStreet().estimateCost(vector <string>(houses, houses + (sizeof houses / sizeof houses[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			string houses[]           = {"30 19 5", "64 77 64", "15 19 97", "4 71 57", "90 86 84", "93 32 91"};
			int expected__            = 208;

			std::clock_t start__      = std::clock();
			int received__            = RGBStreet().estimateCost(vector <string>(houses, houses + (sizeof houses / sizeof houses[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			string houses[]           = {"71 39 44", "32 83 55", "51 37 63", "89 29 100",
 "83 58 11", "65 13 15", "47 25 29", "60 66 19"};
			int expected__            = 253;

			std::clock_t start__      = std::clock();
			int received__            = RGBStreet().estimateCost(vector <string>(houses, houses + (sizeof houses / sizeof houses[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			string houses[]           = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = RGBStreet().estimateCost(vector <string>(houses, houses + (sizeof houses / sizeof houses[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			string houses[]           = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = RGBStreet().estimateCost(vector <string>(houses, houses + (sizeof houses / sizeof houses[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			string houses[]           = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = RGBStreet().estimateCost(vector <string>(houses, houses + (sizeof houses / sizeof houses[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
		default:
			return -1;
		}
	}
}


#include <cstdlib>
int main(int argc, char *argv[]) {
	if (argc == 1) {
		moj_harness::run_test();
	} else {
		for (int i=1; i<argc; ++i)
			moj_harness::run_test(std::atoi(argv[i]));
	}
}
// END CUT HERE
