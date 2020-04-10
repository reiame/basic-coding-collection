class Solution {
public:
    bool bracketsValidity(string str) {
        int num = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(') num++;
            else if (str[i] == ')')
            {
                if (num == 0) return false;
                num--;
            }
        }
        if (!num) return true;
        else return false;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> output;
        int limit = pow(2, 2 * n);
        for (int i = 0; i < limit; i++)
        {
            int itemp = i;
            int pointer = 2 * n - 1;
            string temp = "";
            temp.append(2 * n, '(');
            while (itemp)
            {
                temp[pointer--] = itemp % 2 == 1 ? ')' : '(';
                itemp = itemp / 2;
            }
            if (bracketsValidity(temp)) output.push_back(temp);
        }
        return output;
    }
};