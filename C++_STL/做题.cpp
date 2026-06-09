#define _CRT_SECURE_NO_WARNINGS 1
// C
//#include <stack>
//#include <iostream>
//using namespace std;
//int main() {
//	int t; cin >> t;
//	while (t--) {
//		int n; cin >> n;
//		string s; cin >> s;
//		stack<int> st;
//		int count = 0;
//		for (int i = 0; i < s.length(); i++) {
//			if (s[i] == '(') {
//				st.push(s[i]);
//			}
//			if (st.size() && st.top() == '(' && s[i] == ')') {
//				st.pop();
//				count += 2;
//			}
//		}
//		cout << count << endl;
//		count = 0;
//	}
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1010;
//int a[N], b[N][N];
//bool c[N];
//int n, m;
//int dfs(int x, int time)
//{
//    if (time > m || x >= n || time <= 0)
//        return 0;
//    if (b[x][time] > 0)
//        return b[x][time];
//    for (int i = 1; i <= n; i++)
//    {
//        if (c[i] == false && dfs(x, time - 1) + x > a[i])
//        {
//            c[i] = true;
//            b[x][time] = max(dfs(x + 1, time + 1) - a[i], dfs(x, time + 1));
//            return b[x][time];
//        }
//    }
//}
//int main()
//{
//    int t, i, j;
//    cin >> t;
//    cin >> n >> m;
//    for (j = 1; j <= n; j++)
//        cin >> a[j];
//    cout << dfs(1, 0);
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        string s;
//        cin >> n >> s;
//        int balance = 0, ans = 0;
//        for (char c : s) {
//            if (c == '(') {
//                balance++;
//            }
//            else if (balance > 0) {
//                ans += 2;
//                balance--;
//            }
//        }
//        cout << ans << endl;
//    }
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//void solve() {
//    int n;
//    string s;
//    cin >> n >> s;
//    vector<vector<int>> f(n, vector<int>(n, 0));
//    for (int len = 2; len <= n; ++len) {
//        for (int l = 0; l + len <= n; ++l) {
//            int r = l + len - 1;
//            if (s[l] == '(' && s[r] == ')') {
//                f[l][r] = f[l + 1][r - 1] + 2;
//            }
//            for (int k = l; k < r; ++k) {
//                f[l][r] = max(f[l][r], f[l][k] + f[k + 1][r]);
//            }
//        }
//    }
//    cout << f[0][n - 1] << endl;
//}
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        solve();
//    }
//    return 0;
//}