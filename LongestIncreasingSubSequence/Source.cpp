#include <iostream.h>
using namespace std;

int n, arr[1000];
int len[1000];
int res = 1;

int main(){
	freopen("input.txt", "r", stdin);
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int n;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
			len[i] = 1;
		}
		int res = 1;
		for (int j = 0; j < n; j++){
			for (int k = j + 1; k < n; k++){
				if (arr[k]>arr[j] && len[j]>len[k] + 1){
					len[k] = len[j] + 1;
					if (res < len[k]) res = len[k];
				}
			}
		}

		cout << "#" << i << res << endl;
	}

}