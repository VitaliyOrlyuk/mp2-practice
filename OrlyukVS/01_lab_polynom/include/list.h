#pragma once

#include <iostream>

template <typename TData>
class TNode
{
public: 
	TData data;
	TNode* pNext;
	TNode(const TData& data);
	TNode(const TNode& copy);
	bool operator == (const TNode<TData> n)const;
	bool operator != (const TNode<TData> n)const;
};

template <typename TData>
class TList
{
private:
	TNode<TData>* pHead;
	TNode<TData>* pCurr;
public:
	//������������
	TList();
	TList(const TList<TData>& list2);
	~TList();
	//�������� ��� �������
	TNode<TData>* Search(const TData& data1);
	void InsertToHead(const TData& data1);
	void InsertToTail(const TData& data1);
	void Insert(TData data1, TNode<TData>* after);
	void Clean();
	void Remove(TNode<TData>* pFirst, TNode<TData>* pLast);
	//���������
	void Next();
	void Reset();//������� � ������ ������
	bool IsEnded() const;

	TNode<TData>* GetCur() const;
};

