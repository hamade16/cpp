#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class sample {
    public:
        sample(void);
        sample(int const n);
        sample(sample const & src);
        ~sample(void);
        
        sample &  operator=(sample const & rhs);
        int getfoo(void) const;
    private:

       int _foo;

        /*void    bar(char const c)const;
        void    bar(int const c) const;
        void    bar(sample const &i) const;*/
};
std::ostream &  operator<<(std::ostream & o, sample  const  & i);
#endif