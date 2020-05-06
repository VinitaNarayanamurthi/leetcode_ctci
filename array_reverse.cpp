#include <iostream>
#include <vector>
#include <iterator>

//  How to reverse array wothout extra space 


void swap(int &a, int &b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

std::vector<int> array_rev(std::vector <int> & a, int start, int end)
{
//    std::vector <int> ans;
swap(start, end);



return a;



}




int main()

{
    std::vector <int> a, b;
    a = {1,2,3,4,5};
    // b = array_rev(a);
    int start = a[0];
    int end = a[a.size()-1];
    std::vector <int>:: iterator itr;
    for(itr = a.begin(); itr!=a.end(); ++itr)
        {
            std::cout<< *itr << std::endl;
        }

    b = array_rev(a, a[0], a[4]);

     for(itr = b.begin(); itr!=b.end(); ++itr)
        {
            std::cout<< *itr << std::endl;
        }

    return 0;
}