/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>


Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler),
    graphClickedCallback(this, &Screen1ViewBase::graphClickedCallbackHandler),
    graphDraggedCallback(this, &Screen1ViewBase::graphDraggedCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_BLACK_BACKGROUND_ID));

    dynamicGraph1.setScale(100);
    dynamicGraph1.setPosition(0, 0, 800, 246);
    dynamicGraph1.setGraphAreaMargin(10, 30, 0, 30);
    dynamicGraph1.setGraphAreaPadding(0, 0, 0, 0);
    dynamicGraph1.setGraphRangeY(0.0f, 3.5f);
    dynamicGraph1.setClickAction(graphClickedCallback);
    dynamicGraph1.setDragAction(graphDraggedCallback);

    dynamicGraph1MajorXAxisGrid.setScale(100);
    dynamicGraph1MajorXAxisGrid.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1MajorXAxisGrid.setInterval(16);
    dynamicGraph1MajorXAxisGrid.setLineWidth(1);
    dynamicGraph1.addGraphElement(dynamicGraph1MajorXAxisGrid);

    dynamicGraph1MajorYAxisGrid.setScale(100);
    dynamicGraph1MajorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1MajorYAxisGrid.setInterval(0.6f);
    dynamicGraph1MajorYAxisGrid.setLineWidth(1);
    dynamicGraph1.addGraphElement(dynamicGraph1MajorYAxisGrid);

    dynamicGraph1MinorYAxisLabel.setScale(100);
    dynamicGraph1MinorYAxisLabel.setInterval(0.5f);
    dynamicGraph1MinorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_YT83));
    dynamicGraph1MinorYAxisLabel.setLabelDecimals(1);
    dynamicGraph1MinorYAxisLabel.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1MinorYAxisLabel.setMajorLabel(dynamicGraph1MajorYAxisLabel);
    dynamicGraph1.addLeftElement(dynamicGraph1MinorYAxisLabel);

    dynamicGraph1MajorYAxisLabel.setScale(100);
    dynamicGraph1MajorYAxisLabel.setInterval(1);
    dynamicGraph1MajorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_LHKT));
    dynamicGraph1MajorYAxisLabel.setLabelDecimals(1);
    dynamicGraph1MajorYAxisLabel.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1.addLeftElement(dynamicGraph1MajorYAxisLabel);

    dynamicGraph1Line1Painter.setColor(touchgfx::Color::getColorFromRGB(194, 23, 60));
    dynamicGraph1Line1.setPainter(dynamicGraph1Line1Painter);
    dynamicGraph1Line1.setLineWidth(2);
    dynamicGraph1.addGraphElement(dynamicGraph1Line1);

    dynamicGraph1.addDataPoint(2.23986f);
    dynamicGraph1.addDataPoint(2.38483f);
    dynamicGraph1.addDataPoint(2.514f);
    dynamicGraph1.addDataPoint(2.61531f);
    dynamicGraph1.addDataPoint(2.67825f);
    dynamicGraph1.addDataPoint(2.69455f);
    dynamicGraph1.addDataPoint(2.65871f);
    dynamicGraph1.addDataPoint(2.56841f);
    dynamicGraph1.addDataPoint(2.42471f);
    dynamicGraph1.addDataPoint(2.232f);
    dynamicGraph1.addDataPoint(1.9978f);
    dynamicGraph1.addDataPoint(1.73231f);
    dynamicGraph1.addDataPoint(1.44785f);
    dynamicGraph1.addDataPoint(1.1581f);
    dynamicGraph1.addDataPoint(0.87733f);
    dynamicGraph1.addDataPoint(0.61953f);
    dynamicGraph1.addDataPoint(0.39755f);
    dynamicGraph1.addDataPoint(0.22238f);
    dynamicGraph1.addDataPoint(0.10247f);
    dynamicGraph1.addDataPoint(0.04322f);
    dynamicGraph1.addDataPoint(0.04669f);
    dynamicGraph1.addDataPoint(0.11145f);
    dynamicGraph1.addDataPoint(0.23273f);
    dynamicGraph1.addDataPoint(0.4027f);
    dynamicGraph1.addDataPoint(0.61094f);
    dynamicGraph1.addDataPoint(0.84511f);
    dynamicGraph1.addDataPoint(1.09172f);
    dynamicGraph1.addDataPoint(1.33692f);
    dynamicGraph1.addDataPoint(1.56741f);
    dynamicGraph1.addDataPoint(1.77116f);
    dynamicGraph1.addDataPoint(1.93822f);
    dynamicGraph1.addDataPoint(2.06126f);
    dynamicGraph1.addDataPoint(2.13601f);
    dynamicGraph1.addDataPoint(2.16149f);
    dynamicGraph1.addDataPoint(2.14004f);
    dynamicGraph1.addDataPoint(2.07713f);
    dynamicGraph1.addDataPoint(1.98099f);
    dynamicGraph1.addDataPoint(1.86202f);
    dynamicGraph1.addDataPoint(1.73215f);
    dynamicGraph1.addDataPoint(1.60401f);
    dynamicGraph1.addDataPoint(1.49012f);
    dynamicGraph1.addDataPoint(1.40207f);
    dynamicGraph1.addDataPoint(1.34974f);
    dynamicGraph1.addDataPoint(1.34064f);
    dynamicGraph1.addDataPoint(1.37943f);
    dynamicGraph1.addDataPoint(1.46756f);
    dynamicGraph1.addDataPoint(1.60313f);
    dynamicGraph1.addDataPoint(1.78102f);
    dynamicGraph1.addDataPoint(1.99312f);
    dynamicGraph1.addDataPoint(2.22887f);
    dynamicGraph1.addDataPoint(2.47582f);
    dynamicGraph1.addDataPoint(2.72041f);
    dynamicGraph1.addDataPoint(2.94883f);
    dynamicGraph1.addDataPoint(3.14781f);
    dynamicGraph1.addDataPoint(3.30546f);
    dynamicGraph1.addDataPoint(3.41203f);
    dynamicGraph1.addDataPoint(3.46045f);
    dynamicGraph1.addDataPoint(3.44684f);
    dynamicGraph1.addDataPoint(3.37074f);
    dynamicGraph1.addDataPoint(3.23513f);
    dynamicGraph1.addDataPoint(3.04627f);
    dynamicGraph1.addDataPoint(2.81337f);
    dynamicGraph1.addDataPoint(2.54798f);
    dynamicGraph1.addDataPoint(2.26336f);
    dynamicGraph1.addDataPoint(1.97365f);
    dynamicGraph1.addDataPoint(1.69303f);
    dynamicGraph1.addDataPoint(1.43491f);
    dynamicGraph1.addDataPoint(1.21109f);
    dynamicGraph1.addDataPoint(1.0311f);
    dynamicGraph1.addDataPoint(0.90163f);
    dynamicGraph1.addDataPoint(0.82619f);
    dynamicGraph1.addDataPoint(0.8049f);
    dynamicGraph1.addDataPoint(0.83455f);
    dynamicGraph1.addDataPoint(0.90886f);
    dynamicGraph1.addDataPoint(1.01887f);
    dynamicGraph1.addDataPoint(1.15357f);
    dynamicGraph1.addDataPoint(1.30065f);
    dynamicGraph1.addDataPoint(1.44723f);
    dynamicGraph1.addDataPoint(1.58079f);
    dynamicGraph1.addDataPoint(1.6899f);
    dynamicGraph1.addDataPoint(1.76504f);
    dynamicGraph1.addDataPoint(1.79915f);
    dynamicGraph1.addDataPoint(1.78812f);
    dynamicGraph1.addDataPoint(1.73109f);
    dynamicGraph1.addDataPoint(1.63046f);
    dynamicGraph1.addDataPoint(1.49184f);
    dynamicGraph1.addDataPoint(1.3236f);
    dynamicGraph1.addDataPoint(1.13645f);
    dynamicGraph1.addDataPoint(0.94271f);
    dynamicGraph1.addDataPoint(0.75555f);
    dynamicGraph1.addDataPoint(0.58819f);
    dynamicGraph1.addDataPoint(0.45303f);
    dynamicGraph1.addDataPoint(0.36084f);
    dynamicGraph1.addDataPoint(0.32014f);
    dynamicGraph1.addDataPoint(0.33658f);
    dynamicGraph1.addDataPoint(0.41255f);
    dynamicGraph1.addDataPoint(0.54705f);
    dynamicGraph1.addDataPoint(0.73568f);
    dynamicGraph1.addDataPoint(0.97089f);
    dynamicGraph1.addDataPoint(1.24238f);
    dynamicGraph1.addDataPoint(1.53772f);
    dynamicGraph1.addDataPoint(1.84309f);
    dynamicGraph1.addDataPoint(2.14405f);
    dynamicGraph1.addDataPoint(2.42646f);
    dynamicGraph1.addDataPoint(2.67723f);
    dynamicGraph1.addDataPoint(2.88517f);
    dynamicGraph1.addDataPoint(3.04158f);
    dynamicGraph1.addDataPoint(3.14079f);
    dynamicGraph1.addDataPoint(3.18043f);
    dynamicGraph1.addDataPoint(3.16161f);
    dynamicGraph1.addDataPoint(3.08872f);
    dynamicGraph1.addDataPoint(2.96922f);
    dynamicGraph1.addDataPoint(2.81306f);
    dynamicGraph1.addDataPoint(2.63211f);
    dynamicGraph1.addDataPoint(2.43936f);
    dynamicGraph1.addDataPoint(2.24809f);
    dynamicGraph1.addDataPoint(2.07107f);
    dynamicGraph1.addDataPoint(1.91971f);
    dynamicGraph1.addDataPoint(1.80337f);
    dynamicGraph1.addDataPoint(1.7288f);
    dynamicGraph1.addDataPoint(1.69967f);
    dynamicGraph1.addDataPoint(1.71642f);
    dynamicGraph1.addDataPoint(1.77617f);
    dynamicGraph1.addDataPoint(1.87299f);
    dynamicGraph1.addDataPoint(1.99825f);
    dynamicGraph1.addDataPoint(2.14118f);
    dynamicGraph1.addDataPoint(2.28959f);
    dynamicGraph1.addDataPoint(2.43066f);
    dynamicGraph1.addDataPoint(2.55174f);
    dynamicGraph1.addDataPoint(2.64122f);
    dynamicGraph1.addDataPoint(2.68927f);
    dynamicGraph1.addDataPoint(2.6885f);
    dynamicGraph1.addDataPoint(2.63444f);
    dynamicGraph1.addDataPoint(2.52589f);
    dynamicGraph1.addDataPoint(2.36506f);
    dynamicGraph1.addDataPoint(2.15742f);
    dynamicGraph1.addDataPoint(1.91143f);
    dynamicGraph1.addDataPoint(1.6381f);
    dynamicGraph1.addDataPoint(1.35029f);
    dynamicGraph1.addDataPoint(1.06197f);
    dynamicGraph1.addDataPoint(0.7874f);
    dynamicGraph1.addDataPoint(0.54029f);
    dynamicGraph1.addDataPoint(0.33294f);
    dynamicGraph1.addDataPoint(0.17556f);
    dynamicGraph1.addDataPoint(0.0756f);
    dynamicGraph1.addDataPoint(0.03739f);
    dynamicGraph1.addDataPoint(0.06179f);
    dynamicGraph1.addDataPoint(0.14626f);
    dynamicGraph1.addDataPoint(0.28493f);
    dynamicGraph1.addDataPoint(0.46904f);
    dynamicGraph1.addDataPoint(0.68745f);
    dynamicGraph1.addDataPoint(0.92734f);
    dynamicGraph1.addDataPoint(1.17502f);
    dynamicGraph1.addDataPoint(1.41671f);
    dynamicGraph1.addDataPoint(1.63946f);
    dynamicGraph1.addDataPoint(1.83186f);
    dynamicGraph1.addDataPoint(1.98479f);
    dynamicGraph1.addDataPoint(2.0919f);
    dynamicGraph1.addDataPoint(2.15002f);
    dynamicGraph1.addDataPoint(2.1593f);
    dynamicGraph1.addDataPoint(2.12316f);
    dynamicGraph1.addDataPoint(2.04803f);
    dynamicGraph1.addDataPoint(1.94296f);
    dynamicGraph1.addDataPoint(1.81894f);
    dynamicGraph1.addDataPoint(1.68823f);
    dynamicGraph1.addDataPoint(1.56352f);
    dynamicGraph1.addDataPoint(1.45709f);
    dynamicGraph1.addDataPoint(1.38006f);
    dynamicGraph1.addDataPoint(1.34156f);
    dynamicGraph1.addDataPoint(1.3482f);
    dynamicGraph1.addDataPoint(1.40359f);
    dynamicGraph1.addDataPoint(1.50804f);
    dynamicGraph1.addDataPoint(1.65857f);
    dynamicGraph1.addDataPoint(1.84901f);
    dynamicGraph1.addDataPoint(2.07035f);
    dynamicGraph1.addDataPoint(2.31133f);
    dynamicGraph1.addDataPoint(2.55902f);
    dynamicGraph1.addDataPoint(2.79971f);
    dynamicGraph1.addDataPoint(3.01966f);
    dynamicGraph1.addDataPoint(3.20598f);
    dynamicGraph1.addDataPoint(3.34741f);
    dynamicGraph1.addDataPoint(3.43506f);
    dynamicGraph1.addDataPoint(3.46289f);
    dynamicGraph1.addDataPoint(3.42815f);
    dynamicGraph1.addDataPoint(3.33153f);
    dynamicGraph1.addDataPoint(3.17716f);
    dynamicGraph1.addDataPoint(2.97233f);
    dynamicGraph1.addDataPoint(2.72711f);
    dynamicGraph1.addDataPoint(2.45372f);
    dynamicGraph1.addDataPoint(2.16579f);
    dynamicGraph1.addDataPoint(1.87757f);
    dynamicGraph1.addDataPoint(1.60309f);
    dynamicGraph1.addDataPoint(1.35529f);
    dynamicGraph1.addDataPoint(1.14527f);
    dynamicGraph1.addDataPoint(0.98168f);
    dynamicGraph1.addDataPoint(0.87015f);
    dynamicGraph1.addDataPoint(0.81307f);
    dynamicGraph1.addDataPoint(0.80944f);
    dynamicGraph1.addDataPoint(0.85495f);
    dynamicGraph1.addDataPoint(0.94238f);

    infoWidget1.setXY(0, -44);

    ResetButton.setXY(24, 270);
    ResetButton.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    ResetButton.setLabelText(touchgfx::TypedText(T___SINGLEUSE_BBGA));
    ResetButton.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    ResetButton.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    ResetButton.setAction(buttonCallback);

    XUpButton.setXY(362, 274);
    XUpButton.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_UP_RELEASED_ID), touchgfx::Bitmap(BITMAP_BUTTON_UP_PRESSED_ID));
    XUpButton.setAction(buttonCallback);

    YUpButton.setXY(632, 274);
    YUpButton.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_UP_RELEASED_ID), touchgfx::Bitmap(BITMAP_BUTTON_UP_PRESSED_ID));
    YUpButton.setAction(buttonCallback);

    XDownButton.setXY(362, 350);
    XDownButton.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_DOWN_RELEASED_ID), touchgfx::Bitmap(BITMAP_BUTTON_DOWN_PRESSED_ID));
    XDownButton.setAction(buttonCallback);

    YDownButton.setXY(632, 350);
    YDownButton.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_DOWN_RELEASED_ID), touchgfx::Bitmap(BITMAP_BUTTON_DOWN_PRESSED_ID));
    YDownButton.setAction(buttonCallback);

    textArea1.setXY(265, 288);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(250, 245, 245));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_VCN9));

    textArea2.setXY(531, 290);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(247, 240, 240));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_36Y6));

    add(__background);
    add(image1);
    add(dynamicGraph1);
    add(infoWidget1);
    add(ResetButton);
    add(XUpButton);
    add(YUpButton);
    add(XDownButton);
    add(YDownButton);
    add(textArea1);
    add(textArea2);
}

void Screen1ViewBase::setupScreen()
{
    infoWidget1.initialize();
}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &ResetButton)
    {
        //ResetButtonClicked
        //When ResetButton clicked call virtual function
        //Call ResetButtonClicked
        ResetButtonClicked();
    }
    else if (&src == &XUpButton)
    {
        //XupButtonIsClicked
        //When XUpButton clicked call virtual function
        //Call XupButtonClicked
        XupButtonClicked();
    }
    else if (&src == &YUpButton)
    {
        //YupButtonIsClicked
        //When YUpButton clicked call virtual function
        //Call YupButtonClicked
        YupButtonClicked();
    }
    else if (&src == &XDownButton)
    {
        //XdownButtonIsClicked
        //When XDownButton clicked call virtual function
        //Call XdownButtonClicked
        XdownButtonClicked();
    }
    else if (&src == &YDownButton)
    {
        //YdownButtonIsClicked
        //When YDownButton clicked call virtual function
        //Call YdownButtonClicked
        YdownButtonClicked();
    }
}

void Screen1ViewBase::graphClickedCallbackHandler(const touchgfx::AbstractDataGraph& src, const touchgfx::AbstractDataGraph::GraphClickEvent& value)
{
    if (&src == &dynamicGraph1)
    {
        //Interaction1
        //When dynamicGraph1 clicked call virtual function
        //Call graph1Clicked
        graph1Clicked(value);
    }
}

void Screen1ViewBase::graphDraggedCallbackHandler(const touchgfx::AbstractDataGraph& src, const touchgfx::AbstractDataGraph::GraphDragEvent& value)
{
    if (&src == &dynamicGraph1)
    {
        //Interaction2
        //When dynamicGraph1 dragged call virtual function
        //Call graph1Dragged
        graph1Dragged(value);
    }
}
