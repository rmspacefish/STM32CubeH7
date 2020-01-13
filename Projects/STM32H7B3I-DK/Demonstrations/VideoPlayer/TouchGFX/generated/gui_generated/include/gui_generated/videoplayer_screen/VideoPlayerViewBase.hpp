/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef VIDEOPLAYERVIEWBASE_HPP
#define VIDEOPLAYERVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/videoplayer_screen/VideoPlayerPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Slider.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

#include <gui/containers/trackSelector.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/MoveAnimator.hpp>
class VideoPlayerViewBase : public touchgfx::View<VideoPlayerPresenter>
{
public:
    VideoPlayerViewBase();
    virtual ~VideoPlayerViewBase() {}
    virtual void setupScreen();

    /*
     * Custom Actions
     */
    virtual void volumeButtonPressed(bool value);
    virtual void volumeSliderChanged(uint16_t value);
    virtual void videoSliderChanged(uint16_t value);
    virtual void playPauseButtonPressed(bool value);
    virtual void shufflePressed(bool value);
    virtual void repeatPressed(bool value);
    virtual void videoListPlayPausePressed(bool value);
    virtual void newVideoSelected(int value);
    virtual void cancelButtonPressed();
    virtual void videoButtonPressed();

    /*
     * Virtual Action Handlers
     */
    virtual void nextPressed()
    {
        // Override and implement this function in VideoPlayer
    }

    virtual void previousPressed()
    {
        // Override and implement this function in VideoPlayer
    }

    virtual void backButtonPressed()
    {
        // Override and implement this function in VideoPlayer
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box backGroundBox;
    touchgfx::TextArea noMediaFilesText;
    touchgfx::MoveAnimator< touchgfx::Container > bottomBar;
    touchgfx::Image bottombar;
    touchgfx::Slider videoDurationSlider;
    touchgfx::ToggleButton volumeButton;
    touchgfx::ToggleButton playPauseButton;
    touchgfx::Button nextVideoButton;
    touchgfx::Button previousVideoButton;
    touchgfx::TextAreaWithOneWildcard durationLeft;
    touchgfx::TextAreaWithOneWildcard durationTotal;

    touchgfx::MoveAnimator< touchgfx::Container > volumeBarContainer;
    touchgfx::Image volumenSliderBG;
    touchgfx::Slider volumeSlider;

    touchgfx::MoveAnimator< touchgfx::Button > backButton;
    touchgfx::MoveAnimator< trackSelector > videoSelector;
    touchgfx::MoveAnimator< touchgfx::Button > videoButton;
    touchgfx::MoveAnimator< touchgfx::Button > cancelButton;

    /*
     * Wildcard Buffers
     */
    static const uint16_t DURATIONLEFT_SIZE = 6;
    touchgfx::Unicode::UnicodeChar durationLeftBuffer[DURATIONLEFT_SIZE];
    static const uint16_t DURATIONTOTAL_SIZE = 6;
    touchgfx::Unicode::UnicodeChar durationTotalBuffer[DURATIONTOTAL_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<VideoPlayerViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<VideoPlayerViewBase, const touchgfx::Slider&, int> sliderValueChangedCallback;
    touchgfx::Callback<VideoPlayerViewBase, const touchgfx::Slider&, int> sliderValueConfirmedCallback;
    touchgfx::Callback<VideoPlayerViewBase, bool> videoSelectorShuffelPressedCallback;
    touchgfx::Callback<VideoPlayerViewBase, bool> videoSelectorRepeatPressedCallback;
    touchgfx::Callback<VideoPlayerViewBase, bool> videoSelectorVideoPlayPausedPressedCallback;
    touchgfx::Callback<VideoPlayerViewBase, int> videoSelectorVideoSelectedCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value);
    void sliderValueConfirmedCallbackHandler(const touchgfx::Slider& src, int value);
    void videoSelectorShuffelPressedCallbackHandler(bool value);
    void videoSelectorRepeatPressedCallbackHandler(bool value);
    void videoSelectorVideoPlayPausedPressedCallbackHandler(bool value);
    void videoSelectorVideoSelectedCallbackHandler(int value);

};

#endif // VIDEOPLAYERVIEWBASE_HPP