#include<bits/stdc++.h>
using namespace std;

bool exist(vector<vector<char>>& board, string word,int row, int col,int word_index) {
	cout<<row<<" "<<col<<endl;
	if(row < 0 || row >= board.size())
		return false;
	if(col < 0 || col >= board[row].size())
		return false;

	if(word_index >= word.size())
		return true;

    if(board[row][col] == word[word_index]){
	    //top
    	if(exist(board,word,row-1,col,word_index++))
    		return true;
		//bottom
    	if(exist(board,word,row+1,col,word_index))
    		return  true;
		// left
		if(exist(board,word,row,col-1,word_index))
    		return  true;
		//right	
		if(exist(board,word,row,col+1,word_index))
    		return  true;
	}
	return false;
}

int main()
{
	vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
	string word = "ABCCED";
	int i,j;
	int row = board.size();
	int col = board[0].size();
    for(i=0;i<row;i++){
    	for(j=0;j<col;j++){
    		if(exist(board,word,i,j,0)){
    			cout<<"True";
    			return true;
			}
    	}
    }
    cout<<"FALSE";
    return false;
}