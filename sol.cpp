#include <bits/stdc++.h>

using namespace std;

void decode(){
	double h, m, h2, m2;
	char c;
	cin >> h >> c >> m >> h2 >> c >> m2;
	if(h2 < h){
		h2 += 24;
	}
	double fs = (h*60*60)+(m*60);
	double ss = (h2*60*60)+(m2*60);
	double newHour = 0, sec;
	if(fs > ss){
		sec = fs-ss;
		newHour = sec/(60*60);
	} else{
		sec = ss-fs;
		newHour = sec/(60*60);
	}
	double newMins = sec - (newHour*3600);
	newMins /= 60;
	double ans = newHour+(newMins*(1/60));
	cout << ans*60 << "\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t = 4;
	while(t--){
		decode();
	}
	return 0;
}
