#include <thread>
#include <iostream>

using namespace std;

void hello() {
  cout << "Hello, world!\nFrom a thread!" << endl;
}

int main() {
  thread t(hello);
  t.join();
  return 0;
}
