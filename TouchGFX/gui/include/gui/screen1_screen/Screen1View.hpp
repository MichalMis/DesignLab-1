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
    virtual void Graph2clicked(AbstractDataGraph::GraphClickEvent value);
    virtual void Graph2dragged(AbstractDataGraph::GraphDragEvent value);
    virtual void XupButtonClicked();
    virtual void YupButtonClicked();
    virtual void YdownButtonClicked();
    virtual void XdownButtonClicked();
    virtual void ResetButtonClicked();
    
    void handleTickEvent();

    
protected:
    void updateInfoWidgetPosition();
    int tickCounter{};
    int lastindex{};
    int YRange{};
    int XRange{};
    
    
};

#endif // SCREEN1VIEW_HPP
