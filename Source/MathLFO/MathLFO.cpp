/*
  ==============================================================================

    MathLFO.cpp
    Created: 20 Feb 2023 9:01:58pm
    Author:  honza

  ==============================================================================
*/

#include "MathLFO.h"

MathLFO::MathLFO()
{
    initGui();
    addListeners();
}

MathLFO::~MathLFO()
{
    stopTimer();
    removeListeners();
}

void MathLFO::initGui()
{
    addAndMakeVisible(visualiser);
    addAndMakeVisible(settings);
}

void MathLFO::paint(Graphics& g)
{
    g.fillAll(C_DARK);
    paintLogoOnce(g);

}

void MathLFO::resized()
{
    Rectangle<int> settingsBounds = getLocalBounds().withTrimmedTop((getHeight() - 50) * 4 / 5).withTrimmedBottom(10).withTrimmedLeft(getWidth() * 1 / 4).withTrimmedRight(getWidth() * 1 / 4);
    settings.setBounds(settingsBounds);
    visualiser.setBounds(getLocalBounds().withTrimmedTop(60).withTrimmedBottom(settingsBounds.getHeight() + 20).withTrimmedLeft(20).withTrimmedRight(20));

}

void MathLFO::paintLogoOnce(Graphics& g)
{
    const Image logo = ImageFileFormat::loadFrom(BinaryData::logo250_png, BinaryData::logo250_pngSize);
    g.drawImageAt(logo, (50 - 36) / 2, 7, false);

}

void MathLFO::addListeners()
{
}

void MathLFO::removeListeners()
{
}

void MathLFO::timerCallback()
{
}

void MathLFO::sliderValueChanged(Slider*)
{
}
