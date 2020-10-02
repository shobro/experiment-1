# include<bits/stdc++.h>
# include <iostream>
using namespace std;
int main(){
    int rem =1;
    int recur=0;
    int max_recur = -1;
    int max_no = 0;
    int numerator = 10;
    for (int no = 100; no <= 999;++no){
        int pos = 0;
        int flag=0;
        numerator = 10;
        rem = 1;
        vector <int> remainder;
        while(1){
            numerator = 10 * rem;
            while (numerator < no){
                remainder.push_back(numerator);
                pos++;
                numerator *= 10;
            }
            rem = numerator%no;
            //cout << rem <<" ";
            if (rem == 0)
                break;
            pos++;
            remainder.push_back(rem);
            //if (rem == 647)
              //  cout << pos <<"found it";
            if (pos > 1)
            {
                int i;
                for (i = 0; i < pos - 1 ;++i){
                    if (rem == remainder[i])
                    {   
                        recur = pos-i-1;
                        flag = 1;
                        //cout << "found" << "\n";
                    }
                }
            }
            if (rem >= no)
                cout << "error";
            /*if (flag == 1){
                if (max_recur < recur){
                    max_recur = recur;
                    max_no = no;
                }
                break;
            }*/
            if(flag == 1){
                break;
            }
            if (pos > 100000)
                break;
        }
        if (flag == 1){
                if (max_recur < recur){
                    max_recur = recur;
                    max_no = no;
                }
            }
       // for (int i = 0 ; i < remainder.size();++i)
         //   cout << remainder[i] << " ";
       // cout << "\n";
    }
    cout << max_no ;
}