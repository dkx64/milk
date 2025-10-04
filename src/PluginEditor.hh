#pragma once

#include "PluginProcessor.hh"
#include "juce_core/juce_core.h"
#include "juce_gui_basics/juce_gui_basics.h"


class AudioPluginAudioProcessorEditor final : public juce::AudioProcessorEditor {
public:
    explicit AudioPluginAudioProcessorEditor (AudioPluginAudioProcessor p)
        : AudioProcessorEditor (&p), processorRef (p) {
            juce::ignoreUnused(processorRef);
            setSize(300, 300);
        };
    ~AudioPluginAudioProcessorEditor() override {};


    void paint (juce::Graphics& g) override {

        g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

        g.setColour (juce::Colours::white);
        g.setFont (15.0f);
        g.drawFittedText ("Milking It", getLocalBounds(), juce::Justification::centred, 1);
    };
    void resized() override {};

private:
    AudioPluginAudioProcessor& processorRef;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioPluginAudioProcessorEditor)
};
