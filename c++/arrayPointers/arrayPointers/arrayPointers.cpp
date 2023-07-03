﻿#include <iostream>

using namespace std;


int main()
{
    int scores[]{ 100, 95, 89 };

    cout << "Value of scores: " << scores << endl; //0x61feb0

    int* scores_ptr{ scores };
    cout << "Value of score_ptr: " << scores_ptr << endl; //0x61feb0

    cout << "\nArray subscript notation -------------" << endl;
    cout << scores[0] << endl; //100
    cout << scores[1] << endl; //95
    cout << scores[2] << endl; //89

    cout << "\nPointer subscript notation -------------" << endl;
    cout << scores_ptr[0] << endl; //100
    cout << scores_ptr[1] << endl; //95
    cout << scores_ptr[2] << endl; //89

    cout << "\nPointer offset notation  ---------------" << endl;
    cout << *scores_ptr << endl; //100
    cout << *(scores_ptr + 1) << endl; //95
    cout << *(scores_ptr + 2) << endl; //89

    cout << "\nArray offset notation  ---------------" << endl;
    cout << *scores << endl; //100
    cout << *(scores + 1) << endl; //95
    cout << *(scores + 2) << endl; //89

    cout << endl;
    return 0;
}
