#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if(!fin ||  !fout){
        cout<<"ERROR"<<endl;
    }
    string line;
    int idx=1;

    while(getline(fin,line)){
        if(line.size()==0) continue;


        stringstream ss(line);
        int x;
        
        vector<int>v;
        map<int,int>mpp;
        
        int cnt=0, sum=0;
        while(ss >> x){
            v.push_back(x);
            cnt++;
            sum += x;
            mpp[x]++;
        }
        fout<<"Array "<<idx<<" is: ";
        for(auto it : v){
            fout<<it<<"  ";
        }
        fout<<endl<<endl;

        fout<<"No. of elements in Array "<<idx<<" is: "<<cnt<<endl<<endl;
        fout<<"Sum of those elements is: "<<sum<<endl<<endl;
        fout<<"Below mentioned are the frequencies of each element: "<<endl;
        for(auto it : mpp){
            fout<<it.first<<" occurs "<<it.second<<" times"<<endl;
        }
        fout<<endl<<endl<<endl;

        idx++;
    }

    
    return 0;
}
