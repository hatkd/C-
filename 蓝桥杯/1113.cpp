
#include <bits/stdc++.h>
using namespace std;
 
int a[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
int main() {
	int ans = 0;
	for(int i = 20220101; i <= 20221231; i++) {
		int m = (i % 10000) / 100;
		int d = (i % 100);
		if(m > 12) continue;
		if(d == 0 || d > a[m])continue;
		string tmp = "";
		int t = i;
		while(t) {
			int aa = t % 10;
			tmp = tmp + (char)('0' + aa);
			t = t / 10;
		}
		reverse(tmp.begin(),tmp.end());
		int a1 = tmp.find("123");
		int a2 = tmp.find("012");
        //注释代码表示逆序也算顺子
		//int a3 = tmp.find("321");
		//int a4 = tmp.find("210");
        //if(a1 != -1||a2 != -1||a3 != -1||a4 != -1){
        if(a1 != -1||a2 != -1) {
			cout<<i<<endl;
			++ans;	
		}
	}
	cout<<ans<<endl;	
}
