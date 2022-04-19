#include <iostream>
#include "funcs.h"

int main() {

//TASK A
  std::cout << "Task A: The easy one" << '\n';
  std::vector<int> v = makeVector(10);
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << " " << '\n';
  }
 
//TASK B
  std::cout << "\nTask B: A Happy Filter" << '\n';
  std::vector<int> v2 {1,2,-1,3,4,-1,6};
  std::cout << "orig vector v2:" << '\n';
  for (int i = 0; i < v2.size(); i++) {
    std::cout << v2[i] << " " << '\n';
  }
  v2 = goodVibes(v2);
  std::cout << "--> goodvibes(v2):" << '\n';
  for (int i = 0; i < v2.size(); i++) {
    std::cout << v2[i] << " " << '\n';
  }

//TASK C
  std::cout << "\nTask C: It’s over 9000!" << '\n';
  std::vector<int> v3{1,2,3};
  std::vector<int> v4{4,5};
  std::cout << "v3: ";
  for (int i = 0; i < v3.size(); i++) {
    std::cout << v3[i] << " " << '\n';
  }
  std::cout << "v4: ";
  for (int i = 0; i < v4.size(); i++) {
    std::cout << v4[i] << " " << '\n';
  }
  gogeta(v3, v4); 
  std::cout << "v3 --> gogeta(v3, v4): ";
  for (int i = 0; i < v3.size(); i++) {
    std::cout << v3[i] << " " << '\n';
  }
  std::cout << "v4 --> gogeta(v3, v4): ";
  for (int i = 0; i < v4.size(); i++) {
    std::cout << v4[i] << " " << '\n';
  }

//TASK D
  std::cout << "\nTask D: Pairwise sum" << '\n';
  std::vector<int> v5{1,2,3,8,12};
  std::vector<int> v6{4,5,12,3};
  std::cout << "v5: ";
  for (int i = 0; i < v5.size(); i++) {
    std::cout << v5[i] << " " << '\n';
  }
  std::cout << "v6: ";
  for (int i = 0; i < v6.size(); i++) {
    std::cout << v6[i] << " " << '\n';
  }
  std::cout << "sumPairWise(v5, v6): ";
  std::vector<int> result = sumPairWise(v5, v6);
  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << " " << '\n';
  }
  return 0;
}