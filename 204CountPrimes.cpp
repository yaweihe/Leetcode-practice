/*
Count the number of prime numbers less than a non-negative number, n.

Example:

Input: 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

*/

class Solution{
public:
	int countPrimes(int n){
		int count = 0;
		if (n < 0) throw "Invalid Parameters";
		else if (n == 0 || n == 1) return 0;
		for(int i = 2; i < n; ++i){
			if(isPrimes(i)) ++count;
		}
		return count;
	}

	bool isPrimes(int n){
		if(n == 2 || n == 3) return true;
		//不在6的倍数两侧的一定不是质数
		if(n %6 != 1 && n % 6 != 5)
			return 0;
		int tmp = sqrt(n);
		//在6的倍数两侧的也可能不是质数
		for(int i = 5; i <= tmp; i+= 6)
			if(n % i == 0 || n %(i+2) == 0) 
				return 0;

		//排除所有剩余的是质数
		return true;
	}

};


int countPrimes(int n){
	bool* isPrime = new bool[n];

	for(int i = 0; i < n; i++){
		isPrime[i] = true;
	}

	for(int i = 2; i*i < n; i++){
		if(isPrime(i)){
			for(int j = i*i; j < n; j+= i){
				isPrime[j] = false;
			}
		}
	}

	int count = 0;
	for(int i = 2; i < n; i++){
		if(isPrime[i])
			count++;
	}
	return count;
}

bool isPrime(int n){
	for(int i = 2; i*i <= n; i++){
		if(n%2 == 0){
			return false;
		}
	}
	return true;
}