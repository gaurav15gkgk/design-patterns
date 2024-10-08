#ifndef PLAIN_TEXT_FORMATTER_H
#define PLAIN_TEXT_FORMATTER_H

#include "textFormatter.h"

class PlainTextFormatter : public TextFormatter{
private:
    std :: string text;

public:
    PlainTextFormatter();
   // ~PlainTextFormatter() override = default;
    void feedText(std :: string) override;
    void publishText() override;
};

#endif //PLAIN_TEXT_FORMATTER_H
