#ifndef SURGERY_H
#define SURGERY_H
#include <string>
using std::string;
class surgery{
   private:
      float charges[5];
      string names[5];
   public:
      surgery();
      float return_charges(const string&);
      ~surgery();
};
#endif
