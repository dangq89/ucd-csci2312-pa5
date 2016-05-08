//
// Quang Dang
// 5/5/16

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

#include <string>

namespace CS2312 {
    template<typename T>

    class less {
    public:
        bool operator()(const T &a, const T &b) { // const prevents changes being made
                                                    // overloading  operator() < (const T &a, const T &b)
                                                    // changes the function of that operator
            return a < b; }
        };

    template<>                                  // not taking in type T because of string

    class less<std::string> {
    public:
        bool operator()(const std::string &s1, const std::string &s2) {

                return s1 < s2;
        };
    };

    template<>                                  // not taking in type T because of string

    class less<const char *> {
    public:
        bool operator()(const char * s1, const char * s2) {
            string __s1, __s2;
            __s1 = s1;
            __s2 = s2;


            // return (std::strcmp(c1,c2) < 0);
            return (__s1 < __s2);
        };
    };
}


#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H
