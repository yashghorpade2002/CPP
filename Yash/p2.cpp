# include <iostream>
# include <map>
# include <vector>
# include <list>
# include <set>

int main() {

	std::map <int, char> m1;
	m1[0] = 'A';
	m1[1] = 'B';
	m1[2] = 'C';	
	m1[3] = 'D';
	m1[4] = 'E';
	m1[5] = 'F';
	m1[6] = 'G';
	m1[7] = 'H';
	m1[8] = 'I';
	m1[9] = 'J';
	m1[10] = 'K';
	m1[11] = 'L';
	m1[12] = 'M';
	m1[13] = 'N';
	m1[14] = 'O';
	m1[15] = 'P';
	m1[16] = 'Q';
	m1[17] = 'R';
	m1[18] = 'S';
	m1[19] = 'T';
	m1[20] = 'U';
	m1[21] = 'V';
	m1[22] = 'W';
	m1[23] = 'X';
	m1[24] = 'Y';
	m1[25] = 'Z';

	
/*	for(auto itr = m1.begin(); itr!=m1.end(); itr++) {
	
		std::cout << itr->first << " : " << itr->second << std::endl;
	}
*/
	
	int b;
	std::cin >> b;
	std::map<std::string, int> m2;
	std::list<int> l1;
	for(int j=0; j<b; j++) {
	
		int a = 0;
		std::string str1;
		std::cin >> str1;
		int i = 0;
		//for(int i=0; i<str1.length(); i++) 
		while(i < str1.length()){
		
			for(auto itr=m1.begin(); itr!=m1.end(); itr++) {
		
				if(str1[i] == itr->second) {
				
					a = a + itr->first;
					i = i+1;
				}
				else if(str1[i] == '-') {
					
						if(str1[i+1] == itr->second) {
						
							a = a - itr->first;
							i = i+2;
						} else if(str1[i+1] == '~') {
						
							if(str1[i+2] == itr->second) {
							
								a = a - (25 - itr->first) ;
								i = i+3;
							}
						}

				}
				else if(str1[i] == '~') {
				
					if(str1[i+1] == itr->second) {
					
						a = a + (25 - itr->first);
						i = i+2;
					} else if(str1[i+1] == '-') {
					
						if(str1[i+2] == itr->second) {
						
							a = a + (25 - (-itr->first)) ;
							i = i+3;
						} 
					}
				}
			}
		}
		m2.insert(std::pair<std::string, int> (str1, a));	
		l1.push_back(a);
	}
	l1.unique();
	l1.sort();
	l1.reverse();

	//for(auto itr1=l1.begin(); itr1!=l1.end(); itr1++) {
	
		for(auto itr=m2.rbegin(); itr!=m2.rend(); itr++) {
		
			
			
				std::cout <<itr->first << " ";
			
		
	}
	std::cout << "\n";

	return 0;
}
