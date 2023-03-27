////// first.cpp : This file contains the 'main' function. Program execution begins and ends there.
//////
//////
//////#include<iostream>
//////
//////using namespace std;
//////
//////int main() {
//////	string num1;
//////	string num2;
//////	cin >> num1 >> num2;
//////	int len = num1.length();
//////	int len2 = num2.length();
//////	int numa=0;
//////	int numb = 0;
//////	for (int i = 0; num1[i] != 0; i++) {
//////		//numa =numa + ;
//////		len--;
//////		numa += pow(10, len)*(num1[i] - 48);
//////	}
//////	for (int i = 0; num2[i] != 0; i++) {
//////		//numa =numa + ;
//////		len2--;
//////		numb += pow(10, len2) * (num2[i] - 48);
//////	}
//////	int answer = numb * numa;
//////	char s3[200];
//////	int ind = 0;
//////	while(answer > 0) {
//////		int rem = answer % 10;
//////		s3[ind] = rem+'0';
//////		ind++;
//////		answer  = answer/10;
//////	}
//////	s3[ind] = '\0';
//////	char ans[200];
//////	for (int i = ind-1,k=0; i>=0; i--,k++) {
//////		ans[k] = s3[i];
//////		ans[k + 1] = '\0';
//////	}
//////	cout << ans << endl;
//////}
//////// 
////// // Online C++ compiler to run C++ program online
//////#include <iostream>
//////#include<vector>
//////using namespace std;
//////int main() {
//////
//////    int num;
//////    cin >> num;
//////    vector<int> nums(num);
//////    for (int i = 0; i < num; i++) {
//////        cin >> nums[i];
//////    }
//////    int target;
//////    cin >> target;
//////    int flag = 0;
//////    int ind = 0;
//////    for (int i = 0,j=1; i < nums.size()&&j<nums.size() && flag == 0; i++,j++) {
//////        cout << nums[j - 1] << nums[j] << endl;
//////        if (nums[i] == target) {
//////            cout << i << endl;
//////            flag = 1;
//////        }
//////       
//////        else if (target > nums[j - 1]&&target<nums[j]) {
//////            flag = 1;
//////            ind = j;
//////            cout << ind << endl;
//////        }
//////        else {
//////            flag = 0;
//////        }
//////    }
//////    if (flag ==0) {
//////       cout <<" " << nums.size();
//////    }
//////
////// 
//////}
//////
//////
////// #include<iostream>
////// using namespace std;
//////
////// int main(){
//////
////// long num;
////// long num2;
////// cin>>num;
////// cin>>num2;
////// long value=1;
////// int flag=0;
////// if(num<num2){
////// for(int i=num;i>=2 && flag==0;i--){
//////
//////     if(num%i==0&&num2%i==0){
//////         flag=1;
//////         value = i;
//////     }
//////
////// }
////// }
////// else{
//////  for(int i=num2;i>=2 && flag==0;i--){
//////
//////     if(num%i==0&&num2%i==0){
//////         flag=1;
//////         value = i;
//////     }
//////
////// }
////// }
////// cout<<value;
////// }
//////
//////
////
//// /*
//// #include<iostream>
//// using namespace std;
////
//// long gcd(long num,long num2){
////
////     long value=1;
////     int flag=0;
////     int gcd=1;
////
//// for(int i=2;i<=num && i<=num2;i++){
////
////     if(num%i==0&&num2%i==0){
////           gcd = i;
////     }
////     if(value<gcd){
////         value = gcd;
////     }
////
//// }
//// return gcd;
//// }
////
//// int main(){
////
//// long num;
//// long num2;
//// cin>>num;
//// cin>>num2;
//// long value = gcd(num,num2);
//// cout<<value<<endl;
//// }
////
////
//// #include <iostream>
//// #include <algorithm>
//// using namespace std;
//// int main()
//// {
////   int n1,n2;
////   cin>>n1>>n2;
////     cout<<__gcd(n1,n2)<<endl;
//// }
////
////#include<iostream>
////using namespace std;
////
////long long feb(long long num, long long m) {
////    long long ans=0;
////    long long num1 = 0;
////    long long num2 = 1;
////
////    for (int i = 2; i <=num; i++) {
////        ans = num1 + num2;
////        num1 = num2;
////        num2 = ans;
////    }
////    cout << ans << endl;
////    return ans % m;
////}
////int main() {
////
////    long long num;
////    cin >> num;
////    long long m;
////    cin >> m;
////    long long value = feb(num, m);
////    cout << value;
////
////}
//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
////
//// Tips for Getting Started: 
////   1. Use the Solution Explorer window to add/manage files
////   2. Use the Team Explorer window to connect to source control
////   3. Use the Output window to see build output and other messages
////   4. Use the Error List window to view errors
////   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
////   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
////}
////
////// Online C++ compiler to run C++ program online
////#include <iostream>
////using namespace std;
////#include<vector>
////int maxProfit(vector<int>& prices) {
////    int pro = 0;
////    int buy = 0;
////    int flag = 0;
////    int flag2 = 0;
////    int sell = 0;
////    for (int i = 0; i < prices.size()-1 && flag2==0; i++) {
////        if (prices[i] < prices[i + 1]) {
////            flag2 = 0;
////        }
////        else {
////            flag2 = 1;
////        }
////    }
////    if (flag2 == 0) {
////        return prices[prices.size() - 1] - prices[0];
////    }
////    else {
////
////        for (int i = 0; i < prices.size() - 1; i++) {
////            if (prices[i] < prices[i + 1]) {
////                buy = prices[i];
////                cout << i << ":B " << buy << endl;
////                i++;
////                pro += prices[i] - buy;
////                cout << i << ":P " << pro << endl;
////                flag = 1;
////                
////
////            }
////            else if (prices[i + 1] < prices[i] && flag == 0) {
////                flag = 0;
////            }
////
////        }
////
////        // cout<<pro<<endl;
////        if (flag == 0) {
////
////            return 0;
////
////        }
////        else {
////            return pro;
////        }
////    }
////}
////int main() {
////
////    vector <int> nums(6);
////    for (int i = 0; i < nums.size(); i++) {
////        cin >> nums[i];
////    }
////    int num = maxProfit(nums);
////    cout << num;
////
////}
////*/
//// //Online C++ compiler to run C++ program online
////#include <iostream>
////
////using namespace std;
////
////int main() {
////
////    int test;
////
////    cin >> test;
////
////    for (int i = 0; i < test; i++) {
////        int  num;
////        cin >> num;
////        int value = 0;
////        int flag = 0;
////        int one = 0;
////        int two = 0;
////        int gcd = 0;
////        int flag2 = 0;
////        for (int j = num;  j>2 && flag == 0; j--) {
////            
////            for (int k = num-j; k<num && flag == 0; k++) {
////                gcd = 0;
////                for (int x = 2; x <= k && x <= j; x++) {
////                    cout << j << " " << k << " " << x << endl;
////                    if (j + k + x == num) {
////                        
////                        if (j % x == 0 && k % x == 0) {
////                            value = x;
////                           // cout << j << " " << k << " " << value << endl;
////                            for (int y = 2; y <= j && y <= k; y++) {
////                                if (j % y == 0 && k % y == 0) {
////                                    if (gcd < y) {
////                                        gcd = y;
////                                    }
////                                }
////                            }
////                            if (gcd == x) {
////                                cout << j << " " << k << " " << value << endl;
////                                flag = 1;
////                            }
////                        }
////
////                    }
////                }
////                 
////            }
////        }
////         // cout<<one<<" "<<two<<" "<<value;
////    }
////
////}
////
////#include <iostream>
////#include <vector>
////#include <string>
////using namespace std;
////
////int main() {
////
////    
////    //char ch[5] = { 'm','e','o','w' };
////
////    //for (int i = 0; i < test; i++) {
////    //    /*
////             /* int num;
////              cin >> num;
////              string s;
////              cin >> s;
////              int ind = 0;
////              int flag = 0;
////              for (int j = 0; s[j] != 0; j++) {
////                  if (s[j]>=65&&s[j]<=90) {
////                      s[j] += 32;
////                  }
////              }
////              for (int j = 0; s[j] != 0; j++) {
////                  if (s[j] == ch[ind]) {
////                      ind++;
////                  }
////                  if (ind >= 4) {
////                      ind = 0;
////                      flag = 1;
////                  }
////              }
////              if (ind >= 4) {
////                  printf("YES\n");
////              }
////              else if (flag == 1) {
////
////              }
////              else {
////                  printf("NO\n");
////              }
////        */
////          int num;
////         cin >> num;
////       // string s;
////         char s[1005];
////        getchar();
////        fgets(s, 1000, stdin);
////        int value = 0;
////        int ind = 0;
////        vector <int> nums(100);
////        for (int j = 0; s[j] != 0; j++) {
////           // cout << "A\n";
////            if (s[j] >= 65 && s[j] <= 90) {
////                value++;
////            //    cout <<"C: " << value << endl;
////            }
////            if (s[j] == ' ') {
////               // cout << value << endl;
////                nums[ind] = value;
////                ind++;
////                value = 0;
////              //  cout << "S: "<< value << endl;
////            }
////            
////            //cout << value << endl;
////        }
////        if (ind == 0) {
////          //  cout << "A\n";
////            cout << value << endl;
////        }
////        else {
////            int min = nums[0];
////           // cout << "B\n";
////            for (int j = 1; j < ind; j++) {
////                if (nums[j] < min) {
////
////                    min = nums[j];
////
////                }
////            }
////            cout << min << endl;
////        }
////    }
//////}
////#include <iostream>
////#include <vector>
////#include <string>
////using namespace std;
////
////int main(void)
////{
////    /*freopen ("input.txt","r",stdin);
////    freopen ("output.txt","w",stdout);*/
////
////    int n, i, maxi, k;
////    string str;
////
////    while (cin >> n)
////    {
////        getchar();
////        getline(cin, str);
////
////        maxi = k = 0;
////
////        for (i = 0; i < n; i++)
////        {
////            if (isupper(str[i]))
////                k++;
////
////            maxi = max(k, maxi);
////
////            if (str[i] == ' ')
////                k = 0;
////        }
////
////        cout << maxi << endl;
////    }
////
////    return 0;
////}
//
////
////#include<iostream>
////using namespace std;
////
////int main() {
////
////    int num;
////    cin >> num;
////    int arr[num];
////    int sum[3] = { 0 };
////    for (int i = 0; i < num; i++)
////    {
////        cin >> arr[i];
////    }
////    int count = 0;
////    int ind = 0;
////
////    for (int i = 0; i < num; i++)
////    {
////        count++;
////        sum[ind] += arr[i];
////        ind++;
////        if (count == 3) {
////            count = 0;
////            ind = 0;
////        }
////
////    }int max = sum[0];
////    int maxInd = 0;
////     for(int i=1;i<3;i++)
////     {
////     //cout<<sum[i]<<endl;
////     if(sum[i]>max){
////         max = sum[i];
////         maxInd = i;
////     }
////     }
////
////    if (maxInd == 0) {
////        cout << "chest";
////    }
////    else if (maxInd == 1) {
////        cout << "biceps";
////    }
////    else if (maxInd == 2) {
////        cout << "back";
////    }
////}
////
//#include<iostream>
//using namespace std;
//
//int main() {
//
//    int num;
//    int totalValue;
//
//    double totalCost = 0;
//
//    cin >> num >> totalValue;
//
//
//    int cost[num];
//    int weight[num];
//    double average[num];
//
//    for (int i = 0; i < num; i++) {
//        cin >> cost[i] >> weight[i];
//        average[i] = (double)cost[i] / weight[i];
//    }
//    while (totalValue != 0) {
//        int ind = 0;
//        double max = average[0];
//        for (int i = 1; i < num; i++) {
//            if (max < average[i]) {
//                max = average[i];
//                ind = i;
//            }
//        }
//        average[ind] = 0;
//        if (totalValue >= weight[ind]) {
//            totalValue = totalValue - weight[ind];
//            totalCost += (double)max * weight[ind];
//            weight[ind] = 0;
//
//        }
//        else {
//            int a = totalValue;
//            weight[ind] = weight[ind] - totalValue;
//            //  totalValue=weight[ind] - totalValue;
//
//            totalCost += (double)max * a;
//            totalValue = 0;
//        }
//    }
//    cout << totalCost << endl;
//}
//
//// Online C++ compiler to run C++ program online
//#include <iostream>
//using namespace std;
//int main() {
//
//    int test;
//
//    cin >> test;
//
//    for (int i = 0; i < test; i++) {
//        long x, y, z;
//        cin >> x >> y >> z;
//        int flag = 0;
//        long value = 0;
//        for (int k = z; k >= 0 && flag == 0; k--) {
//            if (k % x == y) {
//                flag = 1;
//                value = k;
//            }
//        }
//
//        cout << value << endl;
//    }
//
//
//}
//
//// Online C++ compiler to run C++ program online
//#include <iostream>
//using namespace std;
//int main() {
//
//    int test;
//
//    cin >> test;
//
//    for (int i = 0; i < test; i++) {
//        long n, m;
//        cin >> n >> m;
//        int arr[n];
//        for (int j = 0; j < n; j++) {
//            cin >> arr[j];
//        }
//        int flag = 0;
//        long value = 0;
//        for (int k = 0; k < n; k++) {
//            value += arr[k];
//        }
//        if (value == m) {
//            cout << "YES" << endl;
//        }
//        else {
//            cout << "NO" << endl;
//        }
//
//
//    }
//}
//#include <iostream>
//using namespace std;
//int main() {
//
//   
// 
//        int arr;
//        cin >> arr;
//        int flag = 0;
//        int num2 = 0;
//        for (int k = 0; flag == 0; k++) {
//            int num = arr;
//            num2 = arr;
//            int sum = 0;
//            for (int j = 0; num != 0; j++) {
//                int rem = num % 10;
//                num /= 10;
//                sum += rem;
//            }
//            if (sum % 4 == 0) {
//                flag = 1;
//            }
//            else {
//                arr++;
//            }
//
//        }
//        cout << num2 << endl;
//    }
//
//// Online C++ compiler to run C++ program online
//#include <iostream>
//using namespace std;
//int main() {
//
//    int num;
//    cin >> num;
//    int arr[num];
//
//    int arr2[101] = { 0 };
//
//    for (int i = 0; i < num; i++) {
//        cin >> arr[i];
//        arr2[arr[i]] += 1;
//    }
//    int value = 0;
//    for (int i = 0; i < 101; i++) {
//        if (value < arr2[i]) {
//            value = arr2[i];
//        }
//    }
//    cout << value << endl;
//}
//#include<bits/stdc++.h>
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//
//#define ll long long
//#define endl '\n'
//#define debug(n) cout<<(n)<<endl;
//const ll INF = 2e18 + 99;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    string a;
//
//    cin >> a;
//    string arr[5];
//    for (int i = 0; i < 5; i++) {
//        cin >> arr[i];
//    }
//    for (int i = 0; i < 5; i++) {
//        if (a[0] == arr[i][0]) {
//            cout << "YES" << endl;
//            return 0;
//        }
//    }
//
//    for (int i = 0; i < 5; i++) {
//        if (a[1] == arr[i][1]) {
//            cout << "YES" << endl;
//            return 0;
//        }
//    }
//    cout << "NO" << endl;
//}
//
//#include<iostream>
//using namespace std;
//
//int main() {
//	int num;
//	int time;
//	cin >> num >> time;
//	int arr[num];
//	int sum = 0;
//	int time2 = 0;
//	int ind = 0;
//	for (int i = 0; i < num; i++) {
//		cin >> arr[i];
//	}
//	int flag = 0;
//	for (int i = 0; i < num && flag == 0; i++) {
//		if (arr[i] + time <= 86400) {
//			time2++;
//			//ind = i;
//			flag = 1;
//		}
//		else if (arr[i] < 86400) {
//			int a = 86400 - arr[i];
//			time -= a;
//			time2++;
//		}
//		else {
//			time2++;
//		}
//	}
//
//	//long value = 86400 * num;
//	//long value2 = value - 
//	cout << time2 << endl;
//}

//
//#include<iostream>
//using namespace std;
//
//int main() {
//
//    int test;
//    cin >> test;
//    for (int i = 0; i < test; i++) {
//        int value;
//        cin >> value;
//        if (value % 2 != 0) {
//            value += 1;
//        }
//        value = value / 2;
//        cout << value << endl;
//    }
//}
//
//#include<iostream>
//using namespace std;
//
//int main() {
//
//    int test;
//    cin >> test;
//    for (int i = 0; i < test; i++) {
//        int num;
//        cin >> num;
//        int arr[num];
//       // int moves = 2 * num;
//        for (int j = 0; j < num; j++) {
//            cin >> arr[j];
//        }
//        int flag2 = 0;
//        int count = 0;
//        for (int j = 0; flag2 == 0; j++) {
//            if (arr[j + 1] % arr[j] == 0) {
//                arr[j] += 1;
//                int flag = 0;
//                for (int k = j; flag == 0; k++) {
//                    if (arr[k + 1] % arr[k] == 0) {
//                        arr[k] += 1;
//                    }
//                    else {
//                        flag = 1;
//                    }
//                }
//            }
//            else if (count == num) {
//                flag2 = 1;
//            }
//            else {
//                flag2 = 0;
//                count++;
//            }
//            if (j == num - 2) {
//                j = 0;
//            }
//            //  cout<<count<<endl;
//              //   cin>>arr[j];
//        }
//        for (int j = 0; j < num; j++) {
//            printf("%d ", arr[j]);
//        }
//        printf("\n");
//        // cout<<endl;
//    }
//
//}
////
//// Online C++ compiler to run C++ program online
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int num;
//    cin >> num;
//    int arr[num];
//    int value = 0;
//    for (int i = 0; i < num; i++) {
//        cin >> arr[i];
//
//    }
//    int flag = 0;
//    if (arr[0] > 15) {
//        value = value + 15;
//        flag = 1;
//    }
//    for (int i = 0; i < num - 1 && flag == 0; i++) {
//
//
//        if (arr[i + 1] - arr[i] >= 15) {
//            value = arr[i] + 15;
//            flag = 1;
//        }
//        
//        else {
//            flag = 0;
//        }
//    }
//    if (90 - arr[num - 1] >= 15 && flag!=1&&value==0) {
//        value = arr[num - 1] + 15;
//        flag = 1;
//    }
//
//    if (flag == 0) {
//        value = 90;
//    }
//    cout << value << endl;
////}
//#include<iostream>
//using namespace std;
//int main() {
//	string s;
//	cin >> s;
//	int num=0;
//	for (int i = 0; s[i] != 0; i++) {
//		if (s[i] == 'a') {
//			num++;
//		}
//	}
//	if (num >= 1&&s.length()>1) {
//		cout << num + 1 << endl;
//	}
//	else if (num == 1 && s.length() == 1) {
//		cout << num << endl;
//	}
//	else {
//		cout << 0 << endl;
//	}
//}
//// Online C++ compiler to run C++ program online
//#include <iostream>
//#include<algorithm>
//#include<vector>
//#define Long int ll
//using namespace std;
//int main() {
//    int num;
//    cin >> num;
//    while (num--) {
//        int size;
//        cin >> size;
//        vector <long> arr(size);
//        vector<long>::iterator ptr;
//        for (int i = 0; i < size; i++) {
//            cin >> arr[i];
//        }
//        sort(arr.begin(), arr.end());
//        int totalNums = arr.size();
//        // int flag=1;
//      //   while(flag==1){
//        for (int i = 0; i < arr.size(); i++) {
//            long b = arr[i];
//            for (int j = i + 1; j <arr.size(); j++) {
//                long a = arr[j];
//
//                long value = a - b;
//                int flag = 0;
//               /* for (int k = 0; k < size; k++) {
//                    if (arr[k] == value) {
//                        flag = 1;
//                    }
//                }*/
//                ptr = find(arr.begin(), arr.end(), value);
//                if (ptr==arr.end()) {
//                    size++;
//                    arr.push_back(value);
//                    totalNums++;
//                    sort(arr.begin(), arr.end());
//                }
//
//            }
//        }
//        
//        cout << totalNums << endl;
//    }
//}
// Online C++ compiler to run C++ program online
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//	int test;
//	cin >> test;
//	while (test--) {
//		int num;
//		cin >> num;
//		long long total = 0;
//		int* ptr = new int[num];
//		int* ptr2 = new int[num];
//		vector<long long>ptr(6);
//		vector<long long>ptr2(6);
//		for (int i = 0; i < num; i++) {
//			cin >> ptr[i];
//			total += ptr[i];
//		}
//		for (int i = 0; i < num; i++) {
//			cin >> ptr2[i];
//		}
//		long long min = 0;
//		int ind = 0;
//		for (int i = 0; num>=1; i++) {
//			min = ptr2[0];
//			ind = 0;
//			for (int j = 0; j<num; j++) {
//				if (min > ptr2[j]) {
//					min = ptr2[j];
//					ind = j;
//				}
//			}
//			
//			if (ind == num - 1&&num>=2) {
//				/*total += min;
//				cout << "A\n";*/
//				cout << "1\n";
//				ptr[ind - 1] += min;
//			}
//			else if (ind == 0&&ind+1<num) {
//				cout << "2\n";
//				ptr[ind + 1] += min;
//			}
//			
//			else{
//				
//				if (ind != 0) {
//					cout << "3\n";
//					ptr[ind + 1] += min;
//					ptr[ind - 1] += min;
//				}
//			}
//			
//			total += ptr[ind];
//			cout << "min: " << min << ": ind" << ind << ": num" << num << endl;
//
//			cout << total<<" " << ptr[ind] << endl;
//
//			ptr2.erase(ptr2.begin() + ind);
//			ptr.erase(ptr.begin() + ind);
//			num--;
//
//			i = 0;
//			
//
//			/*for (int j = 0; j < num; j++) {
//				cout << ptr2[j] << " ";
//			}
//			cout << "\n";*/
//		}
//		 total += ptr[0];
//		cout << total << endl;
//	}
//
//
//}

//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//	int test;
//	cin >> test;
//	while (test--) {
//		long size;
//		cin >> size;
//		string s;
//		cin >> s;
//        int flag = 0;
//		long long moves = 0;
//	for (int j = 0; s[j] != 0; j++) {
//		if (s[j] == '1' && flag == 0) {
//			//	flag = 0;
//			int k = j + 1;
//			while (flag == 0 && s[k] != 0) {
//				if (s[k] == '0') {
//					flag = 1;
//					moves++;
//					//break;
//				}
//				else {
//					k++;
//					continue;
//				}
//			}
//			if (flag == 1) {
//				for (int i = k; s[i] != 0; i++) {
//					if (s[i] == '1')
//					{
//						s[i] = '0';
//
//					}
//					else {
//						s[i] = '1';
//					}
//				}
//			}
//			///cout << "A" << s << endl;
//		}
//			else if (flag == 1) {
//				if (s[j] == '0') {
//					moves++;
//					for (int i = j; s[i] != 0; i++) {
//						if (s[i] == '1')
//						{
//							s[i] = '0';
//
//						}
//						else {
//							s[i] = '1';
//						}
//					}
//					///cout << "B" << s << endl;
//				}
//				
//			}
//		
//		
//	}
//	cout << moves << endl;
//	}
//}
//// Online C++ compiler to run C++ program online
//#include <iostream>
////#include<bits/stdc++.h>
//using namespace std;
//int main() {
//    //     vector<int> nums(3);
//    //     for(int i=0;i<3;i++){
//    //         cin>>nums[i];
//    //     }
//    //     vector<vector<int>> n;
//
//    //         int ind = 0;
//    //         do{
//    //         //   for(int i=0;i<nums.size();i++){
//    //         //       n[ind][i] = nums[i]; 
//    //         //       //cout<<nums[i];
//    //         //   }
//    //         //   ind++;
//    //         n = push_back(nums);
//    //         }while(next_permutation(nums.begin(),nums.end()));
//
//    int grid[3][3];
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++) {
//
//            cin >> grid[i][j];
//
//        }
//    }
//    
//    int sumR = 0;
//    int sumD = 0;
//    //   while(i!=num-1){
//
//    int k = 0;
//    for (int j = 0; j < 1; j++) {
//        for (k = 0; k < 3; k++) {
//            sumD += grid[k][j];
//            sumR += grid[j][k];
//        }
//    }
//    int num = 3;
//   // cout << sumR << " " << sumD << endl;
//    k = num - 1;
//    /*for (int j = 1; j < 3; j++) {
//        sumR += grid[j][k];
//    }*/
//    //cout << sumR << " " << sumD << endl;
//    for (int j = 1; j < 3; j++) {
//        sumR += grid[j][k];
//        sumD += grid[k][j];
//
//    }
//
//
//    if (sumR > sumD) {
//        return sumD;
//    }
//    else {
//        return sumR;
//    }
//
//    //  }
//
////}

//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main() {
//
//    int num, queries;
//    cin >> num >> queries;
//    int arr[num];
//    for (int i = 0; i < num; i++) {
//        cin >> arr[i];
//    }
//
//    sort(arr, arr + num);
//    int sum = 0;
//    while (queries--) {
//        int x, y;
//        int arr2[x];
//        sum = 0;
//        int ind = 0;
//        cin >> x >> y;
//        for (int j = x-1; ind < y && j <num; j++) {
//            arr2[ind] = arr[j];
//            sum += arr2[ind];
//            // cout<<arr[j];
//            ind++;
//        }
//        //sort(arr2, arr2 + ind);
//        //   for(int j = 0;j<ind;j++){
//        //       cout<<arr2[j];
//        //   } 
//        //   cout<<"\n";
//        
//        cout << sum << endl;
//    }
//
//}
//#include<iostream>
//using namespace std;
//
//int main() {
//
//
//	int test;
//	cin >> test;
//	while (test--) {
//		int size;
//		cin >> size;
//		string s;
//		cin >> s;
//		int q = 0;
//		int a = 0;
//		for (int i = 0; s[i] != 0; i++) {
//			if (s[i] == 'Q') {
//				q++;
//			}
//			else if (s[i] == 'A') {
//				a++;
//			}
//		}
//		if (a >= q) {
//			cout << "YES\n";
//		}
//		else if (q > a) {
//
//			//printf("NO\n\n");
//			cout << "NO\n";
//		}
//		else {
//			//printf("NO\n\n");
//			cout << "NO\n";
//		}
//	}
//}

#include<iostream>
using namespace std;

int main() {

	long long value;
	cin >> value;
	int rem = value % 10;
	if (rem > 5) {
		int a = 10 - rem;
		value += a;
	}
	else if (rem <= 5) {
		value -= rem;
	}
	cout << value << endl;
}