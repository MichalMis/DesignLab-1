#include <gui/containers/infoWidget.hpp>

infoWidget::infoWidget()
{

}

void infoWidget::initialize()
{
    infoWidgetBase::initialize();
}

void infoWidget::updateString(float value)
{
	Unicode::snprintf(textArea1Buffer,TEXTAREA1_SIZE, "%.2f",value);
	textArea1.invalidate();
}
