#include <cstdio>
#include <stack>
#include <queue>
#include <iostream> 
using namespace std;

int main() {
  cout << " Check stack " ;
  stack<int> s1; 
  s1.push(10); s1.push(20); 
  while (!s1.empty()) cout << s1.top() << " " , s1.pop();  cout << endl; 
  cout << " Check queue " ; 
  queue<int> q1; 
  q1.push(10), q1.push(20);
  while (!q1.empty()) cout << q1.front() << " " << q1.back() << endl, q1.pop(); 
  cout << "===========check for stack and queue push/pop done ==============";
  stack<char> s;
  queue<char> q;
  deque<char> d;

  printf("%d\n", s.empty());                   // currently s is empty, true (1)
  printf("=======stack empty ===========\n");
  s.push('a');
  s.push('b');
  s.push('c');
  // stack is LIFO, thus the content of s is currently like this:
  // c <- top
  // b
  // a
  printf("%c\n", s.top());                                   // output 'c'
  s.pop();                                                  // pop topmost
  printf("%c\n", s.top());                                   // output 'b'
  printf("%d\n", s.empty());        // currently s is not empty, false (0)
  printf("=====top of stack / pop and top of stack / stack empty state done =============\n");

  printf("%d\n", q.empty());             // currently q is empty, true (1)
  printf("======check queue empty state ============\n");
  while (!s.empty()) {                   // stack s still has 2 more items
    q.push(s.top());                          // enqueue 'b', and then 'a'
    s.pop();
  }
  q.push('z');                                        // add one more item
  printf("%c\n", q.front());                                  // prints 'b'
  printf("%c\n", q.back());                                   // prints 'z'

  // output 'b', 'a', then 'z' (until queue is empty), according to the insertion order above
  printf("========check front and back of queue done ==========\n");
  while (!q.empty()) {
    printf("%c\n", q.front());                      // take the front first
    q.pop();                             // before popping (dequeue-ing) it
  }

  printf("=========queue pop and print done =========\n");
  d.push_back('a');
  d.push_back('b');
  d.push_back('c');
  printf("%c - %c\n", d.front(), d.back());               // prints 'a - c'
  d.push_front('d');
  printf("%c - %c\n", d.front(), d.back());               // prints 'd - c'
  d.pop_back();
  printf("%c - %c\n", d.front(), d.back());               // prints 'd - b'
  d.pop_front();
  printf("%c - %c\n", d.front(), d.back());               // prints 'a - b'
  printf("=============front and back operations done on deque ===================\n");
  return 0;
}
