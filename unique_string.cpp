# include <iostream>
#include <vector>
using namespace std;

bool uniq_str(const string &str)
    {
    if(str.size() > 128)
        {
            return false;
        }
    // we create an array of 128 elts 
    vector <bool> arr(128);
    for(int i = 0; i<str.size(); i++)
    {
        int val = str[i]; 
        cout << "ascii value" << val << endl;
        if(arr[val] > 0)
            {
                return false;
            }
        arr[val] = 1;
        

    }

    return true;

}
int main()
    {
        bool ans;
        string str = "ba";
        ans = uniq_str(str);
        cout << "the ans is" << ans << endl;
        return 0;
    }