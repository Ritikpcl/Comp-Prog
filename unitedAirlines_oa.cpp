
#include <bits/stdc++.h>
using namespace std;

string lexicographicalSmallestString(string& S, int n)
{
	set<string> collection;

	for (int i = 0; i < n; ++i) {
		string cur;
		for (int j = i; j < n; ++j) {
			cur.push_back(S[j]);

			collection.insert(cur);
		}
	}

	queue<string> q;

	for (int i = 0; i < 26; ++i) {
		q.push(string(1, i + 'a'));
	}

	while (!q.empty()) {

		auto cur = q.front();
		q.pop();

		if (collection.find(cur) == collection.end()) {
			return cur;
		}

		for (int i = 0; i < 26; ++i) {
			cur.push_back(i + 'a');
			q.push(cur);
			cur.pop_back();
		}
	}
    
    return "a";
}

int main()
{
    int n;
    cin>>n;
    string temp = "";
    for(int i=0; i<n; i++){
        string s ;
        cin>>s;
        temp += s;
        temp += '|';
    }
    cout<< lexicographicalSmallestString(temp,temp.length());
    return 0;
}
