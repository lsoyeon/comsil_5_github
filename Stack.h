#include "LinkedList.h"


//1. 템플릿 클래스로 확장해야함
//2. Stack형식으로 Delete 함수 재정의해야함
//주의: first, current_size는 class의 멤버 변수이기 때문에 this 포인터를 사용하여 가져와야함

//LinkedList class를 상속받음
template <class T> class Stack : public LinkedList<T>{
	public:
		
		bool Delete (T &element){
			//first가 0이면 false반환 즉, 노드가 없으면 false 반환
			if(this->first==0) return false; 
			Node<T> *current = this->first; //현재 first가 가리키는 곳 (삭제할 노드)를 current가 가리키게 하기
			this->first=this->first->link;//first가 가리키는 곳 삭제한 노드 다음 노드의 주소로 가리킴
			delete current; //current 삭제하기
			this->current_size--; //노드 삭제했으므로 current_size -1 하기
			// LinkedList와 달리 Stack은 current가 가리키는 곳을 삭제
			return true;
			}
};
