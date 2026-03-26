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

	// constructor overload
	String(const char* InString) // InString의 길이를 재는 것을 따로 만듬.
	{
		Length = CountLength(InString);
		Data = new char[Length + 1];
		CopyString(InString);
	}

	// = 안만들었으니까 하지말라고 문법적으로 만들 수 있음.
	// String(const char* InString) = delete;


	// Copy Constructor // 자기 형태를 복사, 기본은 안만들어도 동작을 함.
	String(const String& Other) // 내꺼 복사하기 때문에 &
	{
		Length = Other.GetLength();
		Data = new char[Other.GetLength() + 1];
		CopyString(Other.GetPointer());

	}

	bool operator==(const String& Other)
	{
		//현재 Length랑 other Length랑 비교
		if (Length != Other.GetLength())
		{
			return false;
		}

		for (int i = 0; i < Length; ++i)
		{
			if (Data[i] != Other.Data[i])
			{
				return false;
			}
		}

		return true;
	}

	~String()
	{
		delete[] Data;
		Data = nullptr;
	}
	
	// operator overloading // +를 붙이는 이유는 +하기 연산을 정의(키워드) 
	String operator+(const String& RHS) const // 자기 값이 들어가야함.
	{
		String Result;
		Result.Data;

		// 다른 방식
		size_t NewLength = Length + RHS.GetLength() + 1; '\0'; // 문자열 배열을 만들어서 넣음
		char* NewResult = new char[NewLength];

		// 기존 있는 거 가져오기
		for (int i = 0; i < Length; ++i)
		{
			NewResult[i] = Data[i];
		}

		// + 더하기 뒤에 있는 거 합치기

		for (int i = Length; i < NewLength; ++i)
		{
			NewResult[i] = RHS.Data[i - Length]; // RHS.Data는 0부터 시작을 해야함. 그래서 i - Length를 사용
		}

		// Result = this->Data + RHS.Data;

		NewResult[NewLength - 1] = '\0';

		return String(NewResult); // 이쪽에서 문제가 생김
	}

	// inline const 앞에 주소를 바꾸지 말라는 것
	inline const char* GetPointer() const // 내용이랑 인자 수정을 안함
	{
		// GetPointer() const 뒤에 아무것도 바꾸지않고 가져오기만 하겠다.
		// data == nullptr; 
		return Data;
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

	void CopyString(const char* InString) // const 인자를 안바꿈 // 인자 값을 복사하는 함수 // 문자열 길이가 없음.
	{
		for (int i = 0; i < Length; ++i)
		{
			Data[i] = InString[i];
		}
		Data[Length] = '\0';
		// Data[Length + 1] = '\0'; // +1을 해서 한 개 위로 올라가서 데이터를 넣음
	}
};

