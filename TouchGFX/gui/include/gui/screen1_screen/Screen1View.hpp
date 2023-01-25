#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void UpdateGraph(float value);

    virtual void graph1Clicked(AbstractDataGraph::GraphClickEvent value);
    virtual void graph1Dragged(AbstractDataGraph::GraphDragEvent value);

    virtual void XupButtonClicked();
    virtual void YupButtonClicked();
    virtual void YdownButtonClicked();
    virtual void XdownButtonClicked();

    virtual void ResetButtonClicked();


protected:

    void updateInfoWidgetPosition(float index);
    float YRange {};
    int XRange {};

};

#endif // SCREEN1VIEW_HPP
