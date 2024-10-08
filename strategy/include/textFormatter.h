#ifndef TEXT_FORMATTER_H
#define TEXT_FORMATTER_H

#include <string>

class TextFormatter {
    public:
    virtual ~TextFormatter() = default;
    virtual void feedText(std :: string) = 0;
    virtual void publishText() = 0;
    //TextFormatter() = default;
};

#endif //TEXT_FORMATTER_H
