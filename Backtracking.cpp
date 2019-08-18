/**
 * 一个无序，不重复的数组，从中取出N个数，求让这个N个数和为M 的组合有多少个?
 * 打印数组
 * 回溯法
 * */
#include <iostream>
#include <vector>
using namespace std;
class Backtracking
{
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> results{};
        vector<int> result{};
        sort(candidates.begin(), candidates.end());
        dfs(results, result, candidates, target, 0);
        return results;
    }
    void dfs(vector<vector<int>> &results, vector<int> &result, vector<int> &candidates, int target, int level)
    {
        if (target == 0)
        {
            results.push_back(result);
        }
        for (int i = level; i < candidates.size() && target - candidates[i] >= 0; i++)
        {
            result.push_back(candidates[i]);
            dfs(results, result, candidates, target - candidates[i], i+1);
            result.pop_back();
        }
    }
};

int main()
{
    Backtracking backtracking;
    vector<int> candidates = {15, 8, 95, 48, 64, 78, 52, 47, 12, 98, 63, 58, 89, 78, 124};
    auto result = backtracking.combinationSum(candidates, 130);
    for (auto &r : result)
    {
        cout << "[";
        for (auto &a : r)
        {
            cout << a << ",";
        }
        cout << "]" << endl;
        ;
    }
    return 1;
}