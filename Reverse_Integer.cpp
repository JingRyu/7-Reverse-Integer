#include <iostream>
#include <string>
using namespace std;

//consider int as string this time. will try another
class Solution {
public:
    int reverse(int x) {
        int single_digit;
        int remainer = x;
        string new_raw_string;

        //x<0
        if(x>0){
            while(remainer != 0)
            {
                single_digit = remainer %10;
                remainer = remainer/10;

                new_raw_string = new_raw_string + to_string(single_digit);

            }

             return  atoi(c_str(new_raw_string));
        //x>0
        }else if(x<0){

            remainer = x * (-1);
            while(remainer != 0)
            {
                single_digit = remainer %10;
                remainer = remainer/10;

                new_raw_string = new_raw_string + to_string(single_digit);
            }

                return -atoi(c_str(new_raw_string));
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
