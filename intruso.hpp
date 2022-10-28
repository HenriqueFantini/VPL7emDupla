#include <string>

class Intruso {

    private:
        std::string _senha_digitada;
        std::string _codigo_do_dia;
        
    public:
        Intruso();
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};