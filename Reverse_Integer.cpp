#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//consider int as string this time. will try another
class Solution {
public:
    int reverse(int x) {
        int single_digit;
        long long remainer = x;
        long long new_number = 0;
        int counter = 0;

        while(x != 0){
            x = x/10;
            counter++;
        }

        if(remainer>0){
            while(remainer != 0)
            {
                single_digit = remainer %10;
                remainer = remainer/10;

                new_number = new_number + single_digit*pow(10,counter-1);
                counter--;
            }
             if(new_number>INT_MAX){
                return 0;
             }else{
                return  new_number;
             }
        //x>0
        }else if(remainer<0){

            remainer = remainer * (-1);
            while(remainer != 0)
            {
                single_digit = remainer %10;
                remainer = remainer/10;

                new_number = new_number + single_digit*pow(10,counter-1);
                counter--;
            }
              if(-new_number<INT_MIN){
                return 0;
             }else{
                return  -new_number;
             }
        // x==0
        }else{

            return 0;
        }
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


/*int main()
{
    //Solution test;
    //test.reverse(56799000);
    int single_digit;
        int remainer;
        string new_raw_string = "1";
        string y = "2";
        string x = new_raw_string + y;
        cout<<x;


    //Solution(0);
    //Solution(-121234);
    //Solution(-123);

    return 0;
}*/
