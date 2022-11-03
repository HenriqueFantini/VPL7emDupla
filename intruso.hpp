#include <string>
#include <map>
#include <vector>

class Intruso {
    /*Continue a implementação da classe Intruso*/
    private:
        std::map<char, std::string> mapa;
        std::vector<std::map<char, std::string>> senhas;

    public:
        Intruso();
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};