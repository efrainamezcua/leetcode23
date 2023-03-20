class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for (auto& c: s){
            switch(c){
                case ')':
                if ((brackets.empty()) || (brackets.top() != '(')) return false;
                brackets.pop(); break;
                case '}':
                if ((brackets.empty()) || (brackets.top() != '{')) return false;
                brackets.pop(); break;
                case ']':
                if ((brackets.empty()) || (brackets.top() != '[')) return false;
                brackets.pop(); break;
                default:
                brackets.push(c);
            }
        }
        return brackets.empty();
    }
};
