void display(vector<int> &out){
    for(auto el:out)
        cout<<el<<" ";
    cout<<endl;
}
void place(vector<int> &ret, int i, int j){
    int a = ret[i], b = ret[j];
    bool flag = false;
    while(a !=0 && b != 0){
        if(a/10 == b/10){
            a = a/10;
            b = b/10;
        }
        else{
            flag = true;
            if(a/10 < b/10){
                swap(ret[i], ret[j]);
            }
            break;
        }
    }
    if(!flag){
        if(a != 0) swap(ret[i],ret[j]); 
    }
}
string Solution::largestNumber(const vector<int> &A) {
    int n = A.size();
    vector<int> ret;
    ret = A;
    for(int i = 0 ; i < n; i++){
        if(A[i] == 9) continue;
        for(int j = i+1; j < n; j++){
            if(A[j] == 9){
                swap(ret[i], ret[j]);
                break;
            }
            else{
                place(ret, i, j);
            }
            display(ret);
        }
    }
    string out = "";
    for(auto el: ret){
        out += to_string(el);
    }
    return out;
}
