#ifndef INFOWIDGET_HPP
#define INFOWIDGET_HPP

#include <gui_generated/containers/InfoWidgetBase.hpp>

class InfoWidget : public InfoWidgetBase
{
public:
    InfoWidget();
    virtual ~InfoWidget() {}

    virtual void initialize();
    void updateString(int value);
protected:
};

#endif // INFOWIDGET_HPP
