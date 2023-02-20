/*
  ==============================================================================

    MathLFO.h
    Created: 20 Feb 2023 9:01:58pm
    Author:  honza

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#include "../Constants.h"
#include "MathVisualiser/MathVisualiser.h"
#include "MathSettings/MathSettings.h"

class MathLFO : public Component, public Timer, public Slider::Listener
{
public:
    // Class
	MathLFO();
	~MathLFO();
    // GUI
    void initGui();
    void paint(Graphics&)override;
    void resized()override;
    void paintLogoOnce(Graphics&);
    // Listener
    void addListeners();
    void removeListeners();
    void timerCallback();
    void sliderValueChanged(Slider*);
private:
    MathVisualiser visualiser;
    MathSettings settings;
};