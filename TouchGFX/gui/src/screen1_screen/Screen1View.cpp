#include <gui/screen1_screen/Screen1View.hpp>


Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    XRange = 160;
    YRange = 3.5;
    dynamicGraph1.setGraphRangeY(0.0, YRange);
    dynamicGraph1.setGraphRangeX(0, XRange);
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::UpdateGraph(float value)
{
	dynamicGraph1.addDataPoint(value);
}

void Screen1View::graph1Clicked(AbstractDataGraph::GraphClickEvent value)
{
	if(value.clickEvent.getType()== ClickEvent::PRESSED)
	{
		updateInfoWidgetPosition(value.index);
	}
}
void Screen1View::graph1Dragged(AbstractDataGraph::GraphDragEvent value)
{
	updateInfoWidgetPosition(value.index);
}

void Screen1View::updateInfoWidgetPosition(float index)
{
	infoWidget1.moveTo(dynamicGraph1.getX() +dynamicGraph1.indexToScreenX(index) + dynamicGraph1.getGraphAreaMarginLeft(),
							   dynamicGraph1.getY() +dynamicGraph1.indexToScreenY(index) + dynamicGraph1.getGraphAreaMarginTop());

	infoWidget1.updateString(dynamicGraph1.indexToDataPointYAsFloat(index));
}

void Screen1View::ResetButtonClicked()
{
	dynamicGraph1.clear();
}

void Screen1View::XupButtonClicked()
{
	XRange +=5;
	dynamicGraph1.setGraphRangeX(0,XRange);

	if(XRange == 200)
	{
	    XRange=195;
	}
}

void Screen1View::XdownButtonClicked()
{
    XRange -=5;
    dynamicGraph1.setGraphRangeX(0,XRange);

    if(XRange == 10)
    {
    	XRange=15;
    }
}

void Screen1View::YupButtonClicked()
{
	YRange += 0.5;
	dynamicGraph1.setGraphRangeY(0.0, YRange);
	if(YRange==3.5){
		YRange=3;
	}
}

void Screen1View::YdownButtonClicked()
{
	YRange -= 0.5;
	dynamicGraph1.setGraphRangeY(0.0, YRange);
	if(YRange==0.5){
		YRange=1;
	}

}
