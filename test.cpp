#include<iostream>
#include<string.h>
#include <exception>



class brinquedoQuebrado : public std:: exception{

    public: 
      const char *what() const throw(){ 
      
        return "Fredy Costa";
      } 

};

class BrinquedoGood : public std::exception{

    public:
      const char *what()const throw(){      
        return ("clementino guess");
      }
};

int main(void)
{
            try
            {
                 throw brinquedoQuebrado();
                  throw BrinquedoGood();
            }
            catch(const brinquedoQuebrado &e)
            {
                std::cout<< "alguem chamou por: "<<e.what()<< '\n';
            }
            catch(const BrinquedoGood &e)
            {
                std::cout<<"alguem chamaou o: "<<e.what()<<std::endl;

            }
            
    return 0;
}