#ifndef SCREEN2VIEW_HPP
#define SCREEN2VIEW_HPP

#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>

class Screen2View : public Screen2ViewBase
{
public:
    Screen2View();
    virtual ~Screen2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void Graph1Clicked(AbstractDataGraph::GraphClickEvent value);
    virtual void Graph1dragged(AbstractDataGraph::GraphDragEvent value);
     virtual void XupButtonClicked();
    virtual void YupButtonClicked();
    virtual void YdownButtonClicked();
    virtual void XdownButtonClicked();
    virtual void ResetButtonClicked();
    void handleTickEvent();
protected:
    void updateInfoWidgetPosition();
    int tickCounter;
    int lastindex;
    int YRange{};
    int XRange{};
};

#endif // SCREEN2VIEW_HPP
