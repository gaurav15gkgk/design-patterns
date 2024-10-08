#ifndef MARKDOWN_TEXT_FORMATTER_H
#define MARKDOWN_TEXT_FORMATTER_H

#include "textFormatter.h"

class MarkDownTextFormatter : public TextFormatter{
private:
    std :: string text;

public:
    MarkDownTextFormatter();
    void feedText(std :: string) override;
    void publishText() override;
};

#endif //MARKDOWN_TEXT_FORMATTER_H
