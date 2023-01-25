#ifndef INFOWIDGET_HPP
#define INFOWIDGET_HPP

#include <gui_generated/containers/infoWidgetBase.hpp>

class infoWidget : public infoWidgetBase
{
public:
    infoWidget();
    virtual ~infoWidget() {}

    virtual void initialize();

    void updateString(float value);
protected:
};

#endif // INFOWIDGET_HPP
