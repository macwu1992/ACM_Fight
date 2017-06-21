/*
题目：输入一些单词，输出所有不能通过字母重排得到输入单词中其他单词的单词

思路：字母重排一样的单词们，如果按照字母表进行重排，得到的都是一样的单词
对所有单词按照字母表重排后进行计数，计数为1的单词就是不能得到其他单词的词
*/

#include <iostream>
#include <algorithm>
#include <map>
#include <string>

map<string, int> wordcount;
string wordstd(string word)
{
	string s = word;
	for (int i = 0; i < count; i++)
	{
		s[i] = tolower(s[i]);
	}

	sort(s.begin(), s.end());
	return s;
}

int main()
{
	string word;

	while(cin >> word)
	{
		wordstd(word);
	}
	return 0;
}