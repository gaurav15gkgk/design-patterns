#ifndef HTML_TEXT_FORMATTER_H
#define HTML_TEXT_FORMATTER_H

#include "textFormatter.h"

class HTMLTextFormatter : public TextFormatter{
private:
    std :: string text;

public:
    HTMLTextFormatter();
    void feedText(std :: string) override;
    void publishText() override;
};

#endif //HTML_TEXT_FORMATTER_H
