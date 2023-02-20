/*
  ==============================================================================

    MathVisualiser.h
    Created: 20 Feb 2023 9:02:16pm
    Author:  honza

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#include "../../Constants.h"

class MathVisualiser : public Component
{
public:
    // Class
    MathVisualiser();
    ~MathVisualiser();
    // GUI
    void initGui();
    void paint(Graphics&)override;
private:

};
