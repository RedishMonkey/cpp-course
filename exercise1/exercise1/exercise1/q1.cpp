#include <iostream>
using namespace std;

int* q1(int* arr, int length = 0, int num = 0)
{
    // first index value is first index
    // second values is the length of the longest repetition
    int retArr[2];
    int maxLen = 0;
    int longRepStart = 0;
    int curLen = 0;
    int curRepStart = 0;
    bool isRep = false;

    for (int i = 0; i < length; i++)
    {
        isRep = arr[i] == num;
        if (isRep)
        {
            curLen++;
        }
        else if (maxLen < curLen)
        {
            maxLen = curLen;
            longRepStart = curRepStart;
            curLen = 0;
            curRepStart = i;
        }
    }

    retArr[0] = longRepStart;
    retArr[1] = maxLen;

    return retArr;
}
//
//int main()
//{
//    int len = 5;
//    int num = 3;
//
//    int* arr = new int[len];
//
//    for (int i = 0; i < len; i++)
//    {
//        cout << "enter a number u dumb fuck: ";
//        cin >> arr[i];
//        cout << "\n";
//    }
//
//    int* vals = q1(arr, len, num);
//    int start = vals[0];
//    int maxLen = vals[1];
//
//    for (int i = 0; i < len; i++)
//    {
//        cout << i << " ";
//    }
//    cout << "\n";
//    cout << "start of sequence " << start << " length of sequence " << maxLen << " ";
//
//    return 0;
//
//}
//
