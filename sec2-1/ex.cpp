#include <bits/stdc++.h>
using namespace std;

// 階乗
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

// フィボナッチ数列
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    // stack
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top() << endl;
    s.pop();
    s.pop();
    cout << s.top() << endl;

    // queue
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.front() << endl;
    q.pop();
    q.pop();
    cout << q.front() << endl;

    return 0;
}
