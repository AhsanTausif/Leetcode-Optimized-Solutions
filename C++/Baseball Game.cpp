class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> stack;
        int sum = 0;

        for(int i = 0; i < ops.size(); i++){
            if(ops[i] == "+"){
                int first = stack.top();
                stack.pop();

                int second = stack.top();
                stack.push(first);

                stack.push(first + second);
            }
            else if(ops[i] == "D"){
                stack.push(2 * stack.top());
            }
            else if(ops[i] == "C"){
                stack.pop();
            }
            else {
                stack.push(stoi(ops[i]));
            }
        }

        while(!stack.empty())
        {
            sum += stack.top();
            stack.pop();
        }
        return sum;
    }
};