#pragma once
#include <iostream>
#include <string>
using namespace std;


/// <summary>
/// Rabin-Karp �˰����� �����Ѵ�.
/// �˰����� ���� �⺻���� ���¸� �����ϵ��� �����Ǿ�����, �Է� ������ ���ĺ� ���� ���� 0~9 ������ ���ڷ� �����Ѵ�.
/// ����, convert(char) �Լ��� �ٸ� �ҿ� ���Ͽ� Ȯ���Ѵٸ� �� ���� ���ڿ��� ���Ͽ� �ٷ� �� ���� ���̴�.
/// </summary>
class Rabin_Karp {
private:
	int d; /// ���
	int q; /// ������ ��

	/// <summary>
	/// �ؽ�Ʈ�� s-����Ʈ�� ������ ������ ��ġ�ϴ��� Ȯ���Ѵ�.
	/// </summary>
	/// <param name="pattern">����</param>
	/// <param name="text">�ؽ�Ʈ</param>
	/// <param name="s">����Ʈ</param>
	/// <returns>�ؽ�Ʈ�� s-����Ʈ�� ������ ���� ��ġ ����</returns>
	bool equals(const string& pattern, const string& text, int s);

	/// <summary>
	/// �Էµ� ���ڸ� �����ϴ� ���ڷ� ��ȯ�Ѵ�.
	/// </summary>
	/// <param name="c">����</param>
	/// <returns>���ڿ� �����ϴ� ����</returns>
	const int convert(const char& c);
public:
	Rabin_Karp(int d = 10, int q = 13) : d(d), q(q) {
	}

	~Rabin_Karp() {
	}

	/// <summary>
	/// ���ϸ�Ī�� �ǽ��Ѵ�.
	/// </summary>
	/// <param name="text">�ؽ�Ʈ</param>
	void patternMatching(const string& pattern, const string& text);
};