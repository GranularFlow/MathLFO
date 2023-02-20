/*
  ==============================================================================

    MathSettings.h
    Created: 20 Feb 2023 9:02:07pm
    Author:  honza

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#include "../../Constants.h"
#include "../../Utils/Utils.h"
#include "../../CustomSetting/Separator.h"
#include "../../CustomSetting/Knob.h"
#include "../../CustomSetting/RadioBox.h"


class MathSettings : public Component
{
public:
    static enum Equation {
        RANDOM,
        FORWARD,
        REVERSED
    };
    // Class
    MathSettings();
    ~MathSettings();
    // GUI
    void paint(Graphics&)override;
    void resized()override;

    Knob rateKnob{ "RATE", C_BILLS, 1, 20, 1, 2 };
    Knob depthKnob{ "DEPTH", C_BILLS, 1, 100, 1, 50 };
    RadioBox equationsRadioBox{ "EQUATIONS", C_BARARED, EQUATIONS };


private:
    // GUI
    OwnedArray<Separator> separators;

};