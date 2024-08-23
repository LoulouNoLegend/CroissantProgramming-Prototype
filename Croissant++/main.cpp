#include <iostream>
#include <string>
#include <cctype>

// Le Lexer pour le langage Croissant
class CroissantLexer {
public:
    enum Token { PLUS = '+', MINUS = '-', NUMBER, END };

    CroissantLexer(const std::string& input) : input(input), pos(0), currentChar(input[0]) {}

    void advance() {
        pos++;
        if (pos >= input.size())
            currentChar = '\0';
        else
            currentChar = input[pos];
    }

    Token getNextToken() {
        while (currentChar != '\0') {
            if (std::isspace(currentChar)) {
                advance();
                continue;
            }
            if (currentChar == '+') {
                advance();
                return PLUS;
            }
            if (currentChar == '-') {
                advance();
                return MINUS;
            }
            if (std::isdigit(currentChar)) {
                currentValue = 0;
                while (std::isdigit(currentChar)) {
                    currentValue = currentValue * 10 + (currentChar - '0');
                    advance();
                }
                return NUMBER;
            }
            throw std::runtime_error("Caractère invalide");
        }
        return END;
    }

    int getValue() const { return currentValue; }

private:
    std::string input;
    size_t pos;
    char currentChar;
    int currentValue;
};

// Le Parser pour le langage Croissant
class CroissantParser {
public:
    CroissantParser(CroissantLexer& lexer) : lexer(lexer) {}

    int expr() {
        int result = term();
        CroissantLexer::Token token = lexer.getNextToken();
        while (token == CroissantLexer::PLUS || token == CroissantLexer::MINUS) {
            if (token == CroissantLexer::PLUS) {
                result += term();
            }
            else if (token == CroissantLexer::MINUS) {
                result -= term();
            }
            token = lexer.getNextToken();
        }
        return result;
    }

private:
    int term() {
        CroissantLexer::Token token = lexer.getNextToken();
        if (token == CroissantLexer::NUMBER) {
            return lexer.getValue();
        }
        throw std::runtime_error("Un nombre était attendu");
    }

    CroissantLexer& lexer;
};

int main() {
    std::string input = "10 + 20 - 5";
    CroissantLexer lexer(input);
    CroissantParser parser(lexer);

    try {
        std::cout << "Résultat: " << parser.expr() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Erreur: " << e.what() << std::endl;
    }

    return 0;
}
