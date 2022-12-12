#include <gui/screen1_screen/Screen1View.hpp>
#include <math.h>

Screen1View::Screen1View()
{
    tickCounter = 0;
    lastindex = -1;
    
    
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    XRange = presenter -> getXRange();
    YRange = presenter -> getYRange();
    Graph2.setGraphRangeY(0, YRange);
    Graph2.setGraphRangeX(0, XRange);
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

inline void Screen1View::Graph2clicked(AbstractDataGraph::GraphClickEvent value)
{
    if (value.clickEvent.getType() == ClickEvent::PRESSED) {
        lastindex = value.index;
        updateInfoWidgetPosition();
    }
}

inline void Screen1View::Graph2dragged(AbstractDataGraph::GraphDragEvent value)
{
    lastindex = value.index;
    updateInfoWidgetPosition();
}

void Screen1View::handleTickEvent()
{
    tickCounter++;
    if (tickCounter % 3 == 0) {
        Graph2.addDataPoint((sinf(tickCounter * 0.07f) + 1) * 40+rand()%10);
        updateInfoWidgetPosition();
    }
}


void Screen1View::XupButtonClicked()
{
    presenter -> saveXRange(XRange);
    XRange += 5;
    Graph2.setGraphRangeX(0,XRange);
    if(XRange == 200){
        Graph2MajorXAxisLabel.setInterval(20);
        XRange=195;
    }
    if (XRange==50)
    {
        Graph2MajorXAxisLabel.setInterval(10);
    }
    if (XRange==20){
        Graph2MajorXAxisLabel.setInterval(5);
    }
}

void Screen1View::XdownButtonClicked()
{   
    presenter -> saveXRange(XRange);
    XRange -=5;
    Graph2.setGraphRangeX(0,XRange);
    if(XRange == 190){
        Graph2MajorXAxisLabel.setInterval(10);
    }
    if (XRange==50)
    {
        Graph2MajorXAxisLabel.setInterval(5);
    }
    if (XRange==10){
        Graph2MajorXAxisLabel.setInterval(1);
        XRange=15;
    }
    
}

void Screen1View::YupButtonClicked()
{   
    presenter -> saveYRange(YRange);
    YRange +=5;
    Graph2.setGraphRangeY(0, YRange);
    if(YRange == 200){
        Graph2MajorYAxisLabel.setInterval(20);
        YRange=195;
    }
    if (YRange==50)
    {
        Graph2MajorYAxisLabel.setInterval(10);
    }
    if (YRange==20){
        Graph2MajorYAxisLabel.setInterval(5);
    }
}
void Screen1View::YdownButtonClicked()
{   
    presenter -> saveYRange(YRange);
    YRange -=5;
    Graph2.setGraphRangeY(0,YRange);
    if(YRange == 190){
        Graph2MajorYAxisLabel.setInterval(10);
    }
    if (YRange==50)
    {
        Graph2MajorYAxisLabel.setInterval(5);
    }
    if (YRange==10){
        Graph2MajorYAxisLabel.setInterval(1);
        YRange=15;
    }
    
}

void Screen1View::updateInfoWidgetPosition()
{
    if (lastindex < 0) {
        infoWidget1.moveTo(-100, -100);
    }
    else {
        infoWidget1.moveTo(
            Graph2.getX() + Graph2.indexToScreenX(lastindex) + Graph2.getGraphAreaMarginLeft(),
            Graph2.getY() + Graph2.indexToScreenY(lastindex) + Graph2.getGraphAreaMarginTop());
        infoWidget1.updateString(Graph2.indexToDataPointYAsInt(lastindex));
    }
}

void Screen1View::ResetButtonClicked()
{
    Graph2.clear();
    lastindex = -1;
}