#include <gui/screen2_screen/Screen2View.hpp>
#include <math.h>
#include <stdlib.h>
Screen2View::Screen2View()
{
    tickCounter = 0;
    lastindex = -1;
    YRange = 100;
    XRange = 195;
}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();

    XRange = presenter -> getXRange();
    YRange = presenter -> getYRange();
    Graph1.setGraphRangeY(0, YRange);
    Graph1.setGraphRangeX(0, XRange);
}

void Screen2View::tearDownScreen()
{

    presenter -> saveXRange(XRange);
    presenter -> saveYRange(YRange);

    Screen2ViewBase::tearDownScreen();

   
}

inline void Screen2View::Graph1Clicked(AbstractDataGraph::GraphClickEvent value)
{
    if (value.clickEvent.getType() == ClickEvent::PRESSED) {
        lastindex = value.index;
        updateInfoWidgetPosition();
    }
}

inline void Screen2View::Graph1dragged(AbstractDataGraph::GraphDragEvent value)
{
    lastindex = value.index;
    updateInfoWidgetPosition();
}

void Screen2View::XupButtonClicked()
{
    XRange += 5;
    Graph1.setGraphRangeX(0,XRange);
    if(XRange == 200){
        Graph1MajorXAxisLabel.setInterval(20);
        XRange=195;
    }
    if (XRange==50)
    {
        Graph1MajorXAxisLabel.setInterval(10);
    }
    if (XRange==20){
        Graph1MajorXAxisLabel.setInterval(5);
    }
}

void Screen2View::XdownButtonClicked()
{   
    XRange -=5;
    Graph1.setGraphRangeX(0,XRange);
    if(XRange == 190){
        Graph1MajorXAxisLabel.setInterval(10);
    }
    if (XRange==50)
    {
        Graph1MajorXAxisLabel.setInterval(5);
    }
    if (XRange==10){
        Graph1MajorXAxisLabel.setInterval(1);
        XRange=15;
    }
    
}

void Screen2View::YupButtonClicked()
{
    YRange += 5;
    Graph1.setGraphRangeY(0,YRange);
    if(YRange == 200){
        Graph1MajorYAxisLabel.setInterval(20);
        YRange=195;
    }
    if (YRange==50)
    {
        Graph1MajorYAxisLabel.setInterval(10);
    }
    if (YRange==20){
        Graph1MajorYAxisLabel.setInterval(5);
    }
}

void Screen2View::YdownButtonClicked()
{   
    YRange -=5;
    Graph1.setGraphRangeY(0,YRange);
    if(YRange == 190){
        Graph1MajorYAxisLabel.setInterval(10);
    }
    if (YRange==50)
    {
        Graph1MajorYAxisLabel.setInterval(5);
    }
    if (YRange==10){
        Graph1MajorYAxisLabel.setInterval(1);
        YRange=15;
    }
    
}

void Screen2View::ResetButtonClicked(){
    Graph1.clear();
}


void Screen2View::handleTickEvent()
{
    tickCounter++;

    // Insert each second tick
    if (tickCounter % 3 == 0)
    {
        float yMax = Graph1.getGraphRangeYMaxAsFloat();

        // Insert "random" points along a sine wave
        Graph1.addDataPoint((int)((sinf(tickCounter * .02f) + 1) * (yMax / 2.2f)) + rand() % (int)(yMax / 10.f));
    }
}

void Screen2View::updateInfoWidgetPosition()
{
    if (lastindex < 0) {
        infoWidget1.moveTo(-100, -100);
    }
    else {
        infoWidget1.moveTo(
            Graph1.getX() + Graph1.indexToScreenX(lastindex) + Graph1.getGraphAreaMarginLeft(),
            Graph1.getY() + Graph1.indexToScreenY(lastindex) + Graph1.getGraphAreaMarginTop());
        infoWidget1.updateString(Graph1.indexToDataPointYAsInt(lastindex));
    }
}
