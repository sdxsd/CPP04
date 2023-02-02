#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(const Brain& squishy);
		~Brain(void);
		Brain& operator=(const Brain &toCopy);
		std::string getIdea(int n) const;
		void setIdea(int n, std::string str);
};

#endif // BRAIN_H
