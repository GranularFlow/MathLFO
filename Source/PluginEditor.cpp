/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
MathLFOAudioProcessorEditor::MathLFOAudioProcessorEditor (MathLFOAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    addAndMakeVisible(audioProcessor.mathLfo);
    setSize (W_WIDTH, W_HEIGHT);
}

MathLFOAudioProcessorEditor::~MathLFOAudioProcessorEditor()
{
}

//==============================================================================
void MathLFOAudioProcessorEditor::paint (juce::Graphics& g)
{
}

void MathLFOAudioProcessorEditor::resized()
{
    audioProcessor.mathLfo.setBounds(getLocalBounds());
}
