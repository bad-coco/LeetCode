// #inc
class Solution {
public:
    // int generateKey(int num1, int num2, int num3) {
    //   int result =0;
    //     int multiple =10;
    //     int lastDigit =0;
    //     while(multiple<=10000)
    //     {
    //         int rem1=num1%10;
    //                    int rem2=num2%10;
    //                    int rem3=num3%10;
    //       lastDigit = findMin(rem1, rem2,rem3);

    //     result= result+(lastDigit*(multiple/10));

    //         multiple*=10;

    //         num1=num1/10;
    //          num2=num2/10;
    //         num3=num3/10;
    //     }

    //     return result;

    // }

    int generateKey(int num1, int num2, int num3) {
        int result = 0;
        int multiple = 1;
        int count = 0;
        while (count < 4) {
            int rem1 = num1 % 10;
            int rem2 = num2 % 10;
            int rem3 = num3 % 10;
            int lastDigitMin = min(rem1, min(rem2, rem3));

            result = result + (lastDigitMin * (multiple));

            multiple *= 10;

            num1 = num1 / 10;
            num2 = num2 / 10;
            num3 = num3 / 10;
            count++;
        }

        return result;
    }

    // 987
    // 879
    // 798

    // 98
    // 87
    // 79
    //
    //

    // min = 7
    // result =0
    // result =7+  70 = 77

    int findMin(int a, int b, int c) {
        if (a <= b) {
            if (a < c) {
                return a;
            } else
                return c;
        } else {
            if (b < c) {
                return b;
            } else
                return c;
        }
    }
};