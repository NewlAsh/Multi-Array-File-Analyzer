#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    string line;
    int idx = 1;

    while(getline(fin,line)){
        stringstream ss(line);
        int x;
        
        vector<int>v;
        map<int, int>mpp;
        int cnt=0, sum=0, modeI = INT_MIN, mode=-1;

        while(ss >> x){
            v.push_back(x);
            cnt++;
            sum += x;
            mpp[x]++;
        }
        bool found = false;
        for(auto it : mpp){
            if(it.second>modeI && it.second>1){
                modeI = it.second;
                mode = it.first;
                found=true;
            }
        }

        fout<<"Array "<<idx<<" is:   ";
        for(auto it : v){
            fout<<it<<" ";
        }
        fout<<endl<<endl;
        fout<<"no. of elements are:   "<<cnt<<endl<<endl;
        fout<<"frequencies are mentioned below for each element of the array: "<<endl;
        for(auto it : mpp){
            fout<<it.first<<" repeats "<<it.second<<" times"<<endl;
        }
        fout<<endl<<endl;
        if(!found){
            fout<<"No mode for this data-set"<<endl<<endl;
        }
        else{
            fout<<"Mode for this is: "<<mode<<endl<<endl;
        }
        fout<<"This makes the sum equal to: "<<sum<<endl<<endl;
        float mean = float(sum)/cnt;
        fout<<"Mean for this data-set is: "<<(mean)<<endl<<endl;
        idx++;

        fout<<endl<<endl;
    }

    
    return 0;
}
