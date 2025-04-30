class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {

        // int isEven1 = 0;
        // int isOdd1 = 0;

        // int isEven2 = 0;
        // int isOdd2 = 0;

        bool isxCoord1Even = false;
        bool isyCoord1Even = false;
        bool isxCoord2Even = false;
        bool isyCoord2Even = false;
// cout<<" false: "<<isyCoord2Even<<endl;
        bool isOneBlack = false;
        bool isSecondBlack = false;

        int coordinate1start = (int)coordinate1[0] - 96;
        int coordinate2start = (int)coordinate2[0] - 96;
        // cout << "coordinate1start : " << coordinate1start << endl;
        // cout << "coordinate2start : " << coordinate2start << endl;

        if (coordinate1start % 2 == 0) {
            // isEven1++;
            isxCoord1Even = true;
        }

        // else {

        //     //   isOdd1++;
        // }

        if (coordinate2start % 2 == 0) {

            isxCoord2Even = true;
            //   isEven2++;
        }
        // else {
        //     //   isOdd2++;
        // }

        // cout << "isOdd1 : " << isOdd1 << endl;
        // cout << "isEven1 : " << isEven1 << endl;
        // cout << "isOdd2 : " << isOdd2 << endl;
        // cout << "isEven2 : " << isEven2 << endl;

        int coordinate1last = coordinate1[1] - '0';
        int coordinate2last = coordinate2[1] - '0';
// cout<<"coordinate2last:  "<<coordinate2last<<endl;
        if (coordinate1last % 2 == 0) {
            isyCoord1Even = true;
            // isEven1++;
        }

        // else
        //     isOdd1++;

        if (coordinate2last % 2 == 0) {
            isyCoord2Even = true;
            // cout<< "isyCoord2Even in looop: " <<isyCoord2Even<<endl;
            //    isEven2++;
        }

        // else
        //     isOdd2++;
        // if (isEven1 == isEven2 && isOdd1 == isOdd2) {
        //     return true;
        // }
        // return false;
        if (isxCoord1Even && isyCoord1Even) {
            isOneBlack = true;
        } else if (isxCoord1Even && !isyCoord1Even) {
            isOneBlack = false;

        } else if (!isxCoord1Even && !isyCoord1Even) {
            isOneBlack = true;
        } else {
            isOneBlack = false;
        }
// cout<<"For Coord2 x is even :  "<<isxCoord2Even << ", y is even "<<isyCoord2Even<<endl;
        if (isxCoord2Even && isyCoord2Even) {
            isSecondBlack = true;
        } else if (isxCoord2Even && !isyCoord2Even) {
            isSecondBlack = false;

        } else if (!isxCoord2Even && !isyCoord2Even) {
            isSecondBlack = true;
        } else {
            isSecondBlack = false;
        }

        // cout<< "isOneBlack: "<< isOneBlack<<endl;
        // cout<< "isSecondBlack: "<< isSecondBlack<<endl;
return isOneBlack == isSecondBlack;
    }
};