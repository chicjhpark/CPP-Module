#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> // stack은 모든 멤버가 순수 가상 메소드로 정의되어있다.
{
	public:
		MutantStack(void) {}
		MutantStack(const MutantStack<T>& ref)
		: MutantStack<T>::stack(ref) {}
		~MutantStack(void) {}

		MutantStack<T>& operator=(const MutantStack<T>& ref)
		{
			MutantStack<T>::stack::operator=(ref);
			return *this;
		}

		// container_type은 stack에서 조정할 기본 컨테이너 형식이다.
		typedef typename MutantStack<T>::container_type::iterator iterator;
		typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename MutantStack<T>::container_type::const_iterator const_iterator;
		typedef typename MutantStack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator	begin(void) // 맨 앞의 원소
		{
			return this->c.begin(); // stack클래스의 멤버변수인 c를 이용해 접근한다.
		}

		iterator	end(void) // 맨 끝의 다음 원소
		{
			return this->c.end();
		}

		reverse_iterator	rbegin(void) // 시작을 뒤에서부터 접근
		{
			return this->c.rbegin();
		}

		reverse_iterator	rend(void)
		{
			return this->c.rend();
		}

		const_iterator	cbegin(void)
		{
			return this->c.cbegin();
		}

		const_iterator	cend(void)
		{
			return this->c.cend();
		}

		const_reverse_iterator	crbegin(void)
		{
			return this->c.crbegin();
		}

		const_reverse_iterator	crend(void)
		{
			return this->c.crend();
		}
};

#endif
