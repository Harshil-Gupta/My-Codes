#include <iostream>

int get_change(int m) {
  //write your code here
  int count=0;
  while(m>=10){
    m-=10;
    count++;
    }
    while(m>=5){
      m-=5;
      count++;
    }
    while(m>=1){
      m--;
      count++;
  }
  return count;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
