#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//consider int as string this time. will try another
class Solution {
public:
    int reverse(int x) {
        int single_digit;
        int remainer = x;
        long long new_number = 0;
        int counter = 0;

        while(x != 0){
            x = x/10;
            counter++;
        }


        while(remainer != 0)
            {
                single_digit = remainer %10;
                remainer = remainer/10;

                new_number = new_number + single_digit*pow(10,counter-1);
                counter--;
            }

        if(new_number<INT_MIN || new_number>INT_MAX){return 0;}else{return  new_number;}


    }
};


int main()
{
    Solution test;
    cout<<test.reverse(56799000)<<endl;
    cout<<test.reverse(0)<<endl;
    cout<<test.reverse(-121234)<<endl;
    cout<<test.reverse(1534236469)<<endl;


    //Solution(0);
    //Solution(-121234);
    //Solution(-123);

    return 0;
}



