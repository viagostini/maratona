void Solution::reverseWords(string &A) {
    string word = "";
    A += " ";
    vector<string> tokens;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] != ' ') {
            word += A[i];
        } else {
            if ((int)word.size() != 0)
                tokens.push_back(word);
            word = "";
        }
    }
    A = "";
    for (int i = tokens.size()-1; i >= 0; i--)
        A += tokens[i] + ' ';
    if ((int)A.size() != 0)
        A.pop_back();
}

