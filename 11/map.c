#include <map>
#include <iterator>
#include <numeric>
#include <iostream>
using namespace std;


int main() {
	map < string, int > testm;
	map < string, int > testf;
	string word;
	int middle;
	int final;
	
	int student_number;
	printf("학생 수를 입력해주세요 : ");
	scanf("%d",&student_number);
	printf ("학생의 이름, 중간, 기말 점수를 입력해주세요."); 

	for(int i = 0; i < student_number; i++){
		if ((cin >> word >> middle >> final).eof()) {
			cin.clear(); 
			break;
		}
		testm.emplace(word, middle);
		testf.emplace(word, final);
	}

	auto j = begin(testf);
	for (auto i = begin(testm); i != end(testm); ++i){

		cout << i->first << " " << i->second << " " << j->second << endl;
		j++;
	}

	clearerr(stdin);
	cout << "검색하실 학생의 이름을 입력해주세요:" << endl;
	cin >> word;
	
	auto m = testm.find(word);
	auto f = testf.find(word);
	if (m != std::end(testm))
		cout << "찾은 학생: " << m->first << " " << m->second << " " <<  f->second << endl;
	else
		cout << "검색하신 학생을 찾지 못했습니다. " << word << endl;
}








