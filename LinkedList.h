#pragma once

// iioii iiiaiyai ia oaaeiiu
using ValueType = double;

class LinkedList

{

	// eeann ocea nienea
	// ii naiae nooe, ii?ao niaa??aou e?aua aaiiua,
	// ii?ii ?aaeeciaaou e annioeaoeaiue iannea, i?inoi aiaaaea
	// iiea n ee??ai a ocae e, n o?aoii yoiai, iiiaiyou iaoiau LinkedList
	// (ainooi ii ee??o, iiene ii ee??o e o.a.)
	struct Node {
		Node(const ValueType& value, Node* next = nullptr, Node* last = nullptr); //+
		~Node(); //+

		void insertNext(const ValueType& value); //+
		void removeNext(); //+

		ValueType value;
		Node* next;
		Node* last;

	};

public:

	////

	LinkedList(); //+
	LinkedList(const LinkedList& copyList);//+
	LinkedList& operator=(const LinkedList& copyList);//+

	LinkedList(LinkedList&& moveList) noexcept;//+
	LinkedList& operator=(LinkedList&& moveList) noexcept;//+

	~LinkedList(); //+

	////

	// ainooi e cia?aie? yeaiaioa ii eiaaeno
	ValueType& operator[](const size_t pos) const; //+

	// ainooi e oceo ii eiaaeno
	LinkedList::Node* getNode(const size_t pos) const; //+

	// anoaaea yeaiaioa ii eiaaeno, nia?aea euai, eoaa anoaaeyou (I(n)), iioii anoaaeyai (O(1))
	void insert(const size_t pos, const ValueType& value); //+

	// anoaaea yeaiaioa iinea ocea, (O(1))
	//static
	void insertAfterNode(Node* node, const ValueType& value); //+

	// anoaaea a eiiao (I(n))
	void pushBack(const ValueType& value); //+

	// anoaaea a ia?aei (I(1))
	void pushFront(const ValueType& value);  //+

	// oaaeaiea
	void remove(const size_t pos);//+
	void removeNextNode(Node* node);
	void removeFront();
	void removeBack();

	// iiene, I(n)
	long long int findIndex(const ValueType& value) const;
	Node* findNode(const ValueType& value) const;//+

	// ?acai?io nienea
	void reverse();						// eciaiaiea oaeouaai nienea       +
	LinkedList reverse() const;			// iie?aiea iiaiai nienea (aey eiinoaioiuo iauaeoia)
	LinkedList getReverseList() const;	// ?oiau iaeiinoaioiue iauaeo oi?a iia aica?auaou iiaue ?acaa?iooue nienie

	size_t size() const;//+
	
private:
	size_t	_size;
	Node* _head;
	Node* _tail;
	void forceNodeDelete(Node* node); //+
};