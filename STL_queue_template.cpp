// CPP code to illustrate Queue in 
// Standard Template Library (STL)
#include <iostream>
#include <queue>
  
using namespace std;
  
// Print the queue
void showq(queue<int> q)
{
    queue<int> q = q;
    while (!q.empty()) {
        cout << '\t' << q.front();
        q.pop();
    }
    cout << '\n';
}
  
// Driver Code
int main()
{
    queue<int> q_quiz;
    q_quiz.push(10);
    q_quiz.push(20);
    q_quiz.push(30);
  
    cout << "The queue q_quiz is : ";
    showq(q_quiz);
  
    cout << "\nq_quiz.size() : " << q_quiz.size();
    cout << "\nq_quiz.front() : " << q_quiz.front();
    cout << "\nq_quiz.back() : " << q_quiz.back();
  
    cout << "\nq_quiz.pop() : ";
    q_quiz.pop();
    showq(q_quiz);
  
    return 0;
}
