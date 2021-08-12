#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <string>
#include <queue>
#include <map>
#include <stack>
 

using namespace std;

int main()
{

	// sequence_containers()

	deque<int> deq;
	for (int i = 0; i < 10; ++i)
	{
		deq.push_front(i);
		deq.push_back(i);
	}

	for (auto& e : deq)
		cout << e << " ";
	cout << endl;


	set<string> str_set;

	str_set.insert("Hello");
	str_set.insert("World");
	str_set.insert("Hello");

	cout << str_set.size() << endl;

	for (auto& e : str_set)
		cout << e << " ";
	cout << endl;

	std::multiset<string> str_set1;

	std::map<char, int> map1;

	map1['a'] = 10;
	map1['b'] = 20;
	map1['c'] = 50;

	cout << map1['a'] << endl;

	for (auto& e : map1)
		cout << e.first << " " << e.second << " ";




	return 0;
}












