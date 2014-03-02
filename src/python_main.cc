/*
 *  $Id: python_main.cc, 2014-03-02 14:03:24 chi $
 *  Author(s):
 *    Chi WANG (chiwang@mail.ustc.edu.cn) 02/03/2014
*/
/*
 *  nothing involve boostPython at here.
 */

#include <iostream>

void helloworld(std::string name){
  std::cout<<"hello "<<name<<std::endl;
}

static int N=3;
void setN(int i){
  N =i;
}
void test(){
  for (int i=0;i<N;++i){
    std::cout<<"i = "<<i<<std::endl;
  }
}

