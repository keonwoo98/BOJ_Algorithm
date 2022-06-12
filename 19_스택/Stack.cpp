// #include <iostream>
// #include <string>
// using namespace std;

// typedef struct
// {
// 	int data[10000];
// 	int top;
// 	int size;
// } Stack;

// void init_stack(Stack *s)
// {
// 	s->top = -1;
// 	s->size = 0;
// }

// int empty(Stack *s)
// {
// 	return s->size == 0;
// }

// int size(Stack *s)
// {
// 	return s->size;
// }

// int top(Stack *s)
// {
// 	if (s->size == 0)
// 		return -1;
// 	else
// 		return s->top;
// }

// void push(Stack *s, int item)
// {
// 	s->top = item;
// 	s->data[(s->size)++] = s->top;
// }

// int pop(Stack *s)
// {
// 	if (s->size == 0)
// 		return -1;
// 	s->top = s->data[s->size - 1];
// 	return s->data[--s->size];
// }

// int main(void)
// {
// 	int N, num;
// 	string cmd;
// 	Stack s;

// 	init_stack(&s);
// 	cin >> N;
// 	cin.ignore();
// 	while (N--)
// 	{
// 		getline(cin, cmd);
// 		if (cmd.substr(0, 4).compare("push") == 0)
// 			push(&s, stoi(cmd.substr(5)));
// 		else if (cmd == "pop")
// 			cout << pop(&s) << '\n';
// 		else if (cmd == "size")
// 			cout << size(&s) << '\n';
// 		else if (cmd == "top")
// 			cout << top(&s) << '\n';
// 		else if (cmd == "empty")
// 			cout << empty(&s) << '\n';
// 	}
// }




#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;      // 스택
	int N;             // 명령의 수
	string command;    // 명령어
	int num;           // push 연산 시, 스택에 넣을 정수
	int result = 0;    // 각 명령어의 결과값

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> command;

		// 1. push
		if (command == "push") {
			cin >> num;
			s.push(num);
		}

		// 2. pop
		//    스택이 비어있으면 -1을 출력, 그 외에는 top 값을 출력 후 pop
		else if (command == "pop") {
			if (s.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = s.top();
				cout << result << endl;
				s.pop();
			}
		}

		// 3. size
		else if (command == "size") {
			cout << s.size() << endl;
		}

		// 4. empty
		//    size함수를 통해, size가 0이면 스택이 빈 것이므로 1, 아니면 0 출력     
		else if (command == "empty") {
			if (s.size() == 0) {
				result = 1;
				cout << result << endl;
			}
			else {
				result = 0;
				cout << result << endl;
			}
		}

		// 5. top
		//    스택이 비어있으면 -1을 출력, 그 외에는 top 값을 출력
		else if (command == "top") {
			if (s.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = s.top();
				cout << result << endl;
			}
		}
	}

	return 0;
}
