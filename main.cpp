#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) 
{
    int sum = 0;
    int max = -999999999;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            sum = 0;
            for(int a = i; a<i+3; a++)
            {
                for(int b = j; b<j+3; b++)
                {
                    if( (a == i+1 && b== j) || (a == i+1 && b== j+2) )
                    {
                        
                    }else 
                    {
                        sum += arr[a][b];
                    }
                }
            }
            if(max < sum)
            {
                max = sum;
            }
            
            
            
        }
    }
    
    return max;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
