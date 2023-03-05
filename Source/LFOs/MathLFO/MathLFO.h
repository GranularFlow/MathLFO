/*
  ==============================================================================

    MathLFO.h
    Created: 20 Feb 2023 9:01:58pm
    Author:  honza

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#include "../../Utils/Constants.h"
#include "MathVisualiser/MathVisualiser.h"
#include "MathSettings/MathSettings.h"
#include "exprtk.hpp"



class MathLFO : public Component, public Timer, public Slider::Listener, public Button::Listener
{
public:
    // Class
	MathLFO();
	~MathLFO();
    // GUI
    void paint(Graphics&)override;
    void resized()override;

    // Listener
    void timerCallback();
    void sliderValueChanged(Slider*);
    void buttonClicked(Button*)override;

    void initSamples();
    float getNext();
    void calculateDelta();
    float calculateEquation(double);
    float yToAmplitude(float);
    double getPi();
    bool isValidExpression(const std::string&);

private:
    std::string expressionString = "";
    exprtk::parser<double> parser;
    exprtk::expression<double> expr;
    exprtk::symbol_table<double> symbolTable;

    int sampleRate = 48000;
    float frequency = 1;
    double angle = 0.0;
    double delta = 0.0;
    double outputValue = 0;

    Array<float> samples;

    MathVisualiser visualiser;
    MathSettings settings;
};