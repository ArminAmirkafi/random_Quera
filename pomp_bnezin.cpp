//still run into time limitation error humbly accepted!!!!
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<unsigned long int>path;


bool check(vector<unsigned long int>& v1,int ch, unsigned long int k, unsigned long int l) {
	if (ch == v1.size()-1) {
		return true;
	}

	for (int i = v1.size() - 1; i > ch; i--) {
		if ( v1[i]-v1[ch] <= k&&v1[i]-v1[ch]<=l) {
			bool it= check(v1, i, k,l);
			if (it == true) {
				path.push_back(i);
				return true;
			}

		}
	}

		return false;

}

int main() {
	vector<unsigned long int>v1;
	int N;
	unsigned long int L, K, temp;
	cin >> N >> K >> L;
	v1.push_back(0);
	for (unsigned long int i = 0; i < N; i++) {
		cin >> temp;
		v1.push_back(temp);
	}
	v1.push_back(L);

	bool it = check(v1, 0, K,L);
	reverse(path.begin(), path.end());

	if (it == true) {
		cout << path.size()-1<<endl;
		for (auto x : path) {
			if (x == v1.size() - 1) {
				continue;
			}
			cout << x<<' ';
			
		}
	}
	else {
		cout<<-1;
	}

}

