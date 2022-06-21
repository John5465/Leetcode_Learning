#include <iostream>

#include "Array/119_YangHuiTriangle_2/yanghui_triangle.h"

using namespace std;

int main(int argc, char** argv) {
  leetcode::YangHuiTriangle yanghui_triangle;

  vector<int> ret = yanghui_triangle.getRow(4);

  for (auto num : ret) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}