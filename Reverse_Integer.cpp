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
