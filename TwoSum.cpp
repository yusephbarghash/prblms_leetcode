#include <bits/stdc++.h>


using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    vector<int> result;
    map<int, int> m;
    int s=numbers.size();
    int pairNum;
    for(int i=0;i<s;i++)
    {
        pairNum=target-numbers[i];
        if(m.find(pairNum) != m.end())
        {
            result.push_back(m[pairNum]);
            result.push_back(i);
            return result;
        }
        m.insert(pair<int,int>(numbers[i],i));
    }
    return result;
}

int main()
{

    vector<int> v;
    vector<int> v2;
    v.push_back(2);
    v.push_back(7);
    v.push_back(11);
    v.push_back(15);

    for(auto i=v.begin(); i<v.end(); ++i)
        cout<<*i<<" ";

    v2 = twoSum(v,9);

    cout<<"\n";

    for(auto i=v2.begin(); i<v2.end(); ++i)
        cout<<*i<<" ";

    return 0;
}
