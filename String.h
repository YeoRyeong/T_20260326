#pragma once

class String
{
public:
	String()
	{
		Data = new char[1];
		Data[0] = '\0';
		Length = 0;
		
	}

	String(const char* InString) // InString의 길이를 재는 것을 따로 만듬.
	{
		Length = CountLength(InString);
		Data = new char[Length + 1];
		CopyString(InString);
	}

	~String()
	{
		delete[] Data;
		Data = nullptr;
	}
	
	inline size_t GetLength() const // 내용을 안바꾸고 Length만 리턴
	{
		return Length;
	}



protected:
	char* Data;
	size_t Length = 0;

	size_t CountLength(const char* InString) const // 위에 String 길이를 구해주는 것, protected에 들어와서 안에서만 돌아가도록 해줌
	{
		int Count = 0;

		while (InString[Count] != '\0')
		{
			Count++;
		}

		return Count;
	}

	void CopyString(const char* InString) // const 인자를 안바꿈
	{
		for (int i = 0; i < Length; ++i)
		{
			Data[i] = InString[i];
		}

		Data[Length + 1] = '\0';
	}
};

