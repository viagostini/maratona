void Solution::merge(vector<int> &A, vector<int> &B) {
    int i = 0, j = 0;
    vector<int> C;
    while (i < A.size() && j < B.size()) {
        if (A[i] <= B[j])
            C.push_back(A[i++]);
        else
            C.push_back(B[j++]);
    }
    while (i < A.size())    
        C.push_back(A[i++]);
    while (j < B.size())
        C.push_back(B[j++]);

    A = C;
}

