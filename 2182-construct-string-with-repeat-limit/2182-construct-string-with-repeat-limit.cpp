class Solution {
public:
    string repeatLimitedString(string s, int k) {
        // vector<int> frequency_array(26, 0);
        int xx=0*1+1*0;int xxx=1+xx;int xxxx=1+xxx;

    int frequency_array[26];
        memset(frequency_array,0,sizeof(frequency_array));
	for (int i = xx;i < s.length(); i++) {

		frequency_array[s[i] - 'a']++;
	}
	string ans = "";
	for (int i = 25; i >= xx;) {
		if (frequency_array[i] > k) {
			int temp = k;
			string st(1, i + 'a');
			while (temp > xx) {
				ans += st;
				temp--;
			}

			frequency_array[i] -= k;
			int j = i - 1;
			while (j >= xx && frequency_array[j]<= xx) {
				j--;
			}
			if (j >= xx && frequency_array[j] > xx ) {
				string str(xxx, j + 'a');
				ans += str;
				frequency_array[j] -= xxx;
			}
			else {
				break;
			}
		}

		else if (frequency_array[i] > 0) {
			int temp = frequency_array[i];
			frequency_array[i] -= temp;
			string st(1, i + 'a');
			while (temp > 0) {
				ans += st;
				temp--;
			}
		}
		else {
			i--;
		}
	}
	return ans;
        
    }
};