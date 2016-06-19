//============================================================================
// Name        : basic_data_structures.cpp
// Author      : Daniel Ramirez
// Version     : 1.1
// Copyright   :
// Description : tree order
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::ios_base;
using std::cin;
using std::cout;

class TreeOrders {
  int n;
  vector <int> key;
  vector <int> left;
  vector <int> right;

public:
  void read() {
    cin >> n;
    key.resize(n);
    left.resize(n);
    right.resize(n);
    for (int i = 0; i < n; i++) {
      cin >> key[i] >> left[i] >> right[i];
    }
  }

  void in_order(const int index){
	int i=index;
    if(i==-1){
    	return;
    }
    in_order(left.at(i));
    cout<<key[i]<<" ";
    in_order(right.at(i));
  }

  void pre_order(const int index) {
	int i=index;
	if(i==-1){
	   return;
	}
	cout<<key[i]<<" ";
	pre_order(left.at(i));
	pre_order(right.at(i));
  }

  void post_order(const int index) {
	int i=index;
	if(i==-1){
	   return;
	}
	post_order(left.at(i));
	post_order(right.at(i));
	cout<<key[i]<<" ";
  }
};

/*void print(vector <int> a) {
  for (size_t i = 0; i < a.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << a[i];
  }
  cout << '\n';
}*/

int main() {
  ios_base::sync_with_stdio(0);
  TreeOrders t;
  t.read();
  t.in_order(0);
  cout<<'\n';
  t.pre_order(0);
  cout<<'\n';
  t.post_order(0);
  return 0;
}

