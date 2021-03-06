class Solution {
public:
    bool canWinNim(int n) {
        if(n%4==0) return false;
        else return true;
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

string boolToString(bool input) {
    return input ? "True" : "False";
}

int main() {
    string line;
    while (getline(cin, line)) {
        int n = stringToInteger(line);
        
        bool ret = Solution().canWinNim(n);

        string out = boolToString(ret);
        cout << out << endl;
    }
    return 0;
}
