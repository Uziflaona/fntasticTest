#include <iostream>

int main() {
	setlocale(LC_ALL, "");
	std::wstring str;
	std::wcin >> str;
	for (int i = 0; i < str.length(); i++){
		str[i] = std::towlower(str[i]);
	}
	std::wcout << str;
}
