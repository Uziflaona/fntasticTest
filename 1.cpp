#include <iostream>
#include <map>

int main() {
	setlocale(LC_ALL, "");

	std::wstring str;
	std::map <wchar_t, int> counter;

	std::cout << "Введите строку:" << std::endl;
	std::getline(std::wcin, str);
	

	// set string to lower case and adding chars to counter map
	for (int i = 0; i < str.length(); i++){
		str[i] = std::towlower(str[i]);
		counter[str[i]] = 0;
	}

	// counting chars occurrences
	for (int i = 0; i < str.length(); i++){
		counter[str[i]] += 1;
	}

	// replacement
	for (int i = 0; i < str.length(); i++){
		if (counter[str[i]] > 1){
			str[i] = ')';
		} else {
			str[i] = '(';
		}
	}

	std::wcout << str;
}
