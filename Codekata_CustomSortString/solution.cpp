#include <string>
#include <vector>
#include <algorithm>

using namespace std;



vector<string> solution(vector<string> strings, int n) {
    vector<string> answer = strings;

    sort(answer.begin(), answer.end(),
        [n](string a, string b) {
            if (a.at(n) != b.at(n)) return a.at(n) < b.at(n);
            else return a < b;
        }
    );


    return answer;
}