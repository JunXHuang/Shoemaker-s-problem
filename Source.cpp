#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct shoes {
	double weight;
	int index;
};
bool fun(shoes s1, shoes s2);

int main() {
	shoes temp;
	int cases, num_shoes;
	double n, m;
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		vector<shoes> jobs;
		cin >> num_shoes;
		for (int j = 0; j < num_shoes; j++) {
			cin >> n >> m;
			temp.index = j + 1;
			temp.weight = (n / m);
			jobs.push_back(temp);
		}
		sort(jobs.begin(), jobs.end(), fun);
		for (int k = 0; k < num_shoes; k++) {
			cout << jobs[k].index;
			if (k != num_shoes - 1)
				cout << " ";
		}
		cout << endl;
		if (i != cases - 1)
			cout << endl;
	}
	return 0;
}
bool fun(shoes s1, shoes s2) {
	return s1.weight < s2.weight;
}