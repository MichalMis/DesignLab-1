#include <gui/containers/InfoWidget.hpp>

InfoWidget::InfoWidget()
{

}

void InfoWidget::initialize()
{
    InfoWidgetBase::initialize();
}

void InfoWidget::updateString(int value)
{
    Unicode::snprintf(textArea1Buffer,TEXTAREA1_SIZE, "%i", value);
    textArea1.invalidate();
}
