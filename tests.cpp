#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <vector>

TEST_CASE("makeVector") {
  std::vector<int> v = makeVector(10);
  CHECK(v.size() == 10);
  for (int i = 0; i < v.size(); i++) {
      CHECK(v[i] == i);
  }
  v = makeVector(20);
  CHECK(v.size() == 20);
  for (int i = 0; i < v.size(); i++) {
    CHECK(v[i] == i);
  }
}

TEST_CASE("goodVibes") {
  std::vector<int> v2 {1,2,-1,3,4,-1,6};
  v2 = goodVibes(v2);
  std::vector<int> happyv2{1,2,3,4,6};
  for (int i = 0; i < v2.size(); i++) {
    CHECK(v2[i] == happyv2[i]);
  }
  std::vector<int> v3 {12, 3, 4, 0, -23, -32, 2};
  v3 = goodVibes(v3);
  std::vector<int> happyv3 {12, 3, 4, 2};
  for (int i = 0; i < v3.size(); i++) {
    CHECK(v3[i] == happyv3[i]);
  }
}

TEST_CASE("gogeta") {
  std::vector<int> v1{1,2,3};
  std::vector<int> v2{4,5};
  std::vector<int> v1v2{1,2,3,4,5};
  gogeta(v1, v2);
  for (int i = 0; i < v1.size(); i++) {
    CHECK(v1[i] == v1v2[i]);
  }
  CHECK(v2.size() == 0);
  gogeta(v1, v2); 
  for (int i = 0; i < v1.size(); i++) {
    CHECK(v1[i] == v1v2[i]);
  }
  gogeta(v2, v1);
  for (int i = 0; i < v2.size(); i++) {
    CHECK(v2[i] == v1v2[i]);
  }
  CHECK(v1.size() == 0);
}

TEST_CASE("sumPairWise") {
  std::vector<int> v1{1,2,3};
  std::vector<int> v2{4,5};
  std::vector<int> v1v2 = sumPairWise(v2, v1);
  std::vector<int> vtest1 {5, 7, 3};
  for (int i = 0; i < v1.size(); i++) {
    CHECK(v1v2[i] == vtest1[i]);
  }
  std::vector<int> v3{1,2,3,8,12};
  std::vector<int> v4{4,5,12,3};
  std::vector<int> v3v4 = sumPairWise(v3, v4);
  std::vector<int> vtest2 {5, 7, 15, 11, 12};
  for (int i = 0; i < v3.size(); i++) {
    CHECK(v3v4[i] == vtest2[i]);
  }
}