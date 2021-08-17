#include <bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix){
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();

        int sr, sc = 0;
        int er = m-1;
        int ec = n-1;
        int count = 0;

        while(sr<=er || sc<=ec){
            // print start row
            for(int i=sc; i<=ec; i++){
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            if (count == m*n) return ans;


            // print end column
            for(int i=sr; i<=er; i++){
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            if (count == m*n) return ans;


            // print end row
            for(int i=ec; i>=sc; i--){
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;
            if (count == m*n) return ans;


            // print start column
            for(int i=er; i>=sr; i--){
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
            if (count == m*n) return ans;
        }
        return ans;
}
int main(){
    vector<vector<int>> matrix;
    int m, n;
    cout << "Enter rows: ";
    cin >> m;
    cout << endl << "Enter columns: ";
    cin >>n;
    int a = 0;
    for(int i = 0; i<m; i++){
        vector<int> row;
        for(int j = 0; j<n; j++){
            cin >> a;
            row.push_back(a);
        }
        matrix.push_back(row);
        cout << endl;
    }

    vector<int> ans = spiralOrder(matrix);
    cout << ans.size();
    cout << endl;
    for(int i = 0; i<ans.size(); i++){
        cout << ans.at(i) << " ";
    }
    return 0;
}
