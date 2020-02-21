/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENSETTINGSVIEWBASE_HPP
#define SCREENSETTINGSVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screensettings_screen/ScreenSettingsPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>

class ScreenSettingsViewBase : public touchgfx::View<ScreenSettingsPresenter>
{
public:
    ScreenSettingsViewBase();
    virtual ~ScreenSettingsViewBase() {}
    virtual void setupScreen();

    /*
     * Custom Actions
     */
    virtual void keyboardSelectedVar(uint8_t value);
    virtual void afterTransition();

    /*
     * Virtual Action Handlers
     */
    virtual void keyboardSelected(uint8_t value)
    {
        // Override and implement this function in ScreenSettings
    }

    virtual void updateScreen()
    {
        // Override and implement this function in ScreenSettings
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box box1;
    touchgfx::Box box2;
    touchgfx::TextArea textArea1;
    touchgfx::ButtonWithLabel buttonWithLabelOk;
    touchgfx::ButtonWithLabel buttonWithLabelCancel;
    touchgfx::BoxWithBorder boxWithBorder1;
    touchgfx::BoxWithBorder boxWithBorder1_1;
    touchgfx::TextArea textArea2;
    touchgfx::TextArea textArea3;
    touchgfx::TextAreaWithOneWildcard textAreaPw;
    touchgfx::TextAreaWithOneWildcard textAreaSsid;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > flexButtonSsid;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > flexButtonPw;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREAPW_SIZE = 18;
    touchgfx::Unicode::UnicodeChar textAreaPwBuffer[TEXTAREAPW_SIZE];
    static const uint16_t TEXTAREASSID_SIZE = 18;
    touchgfx::Unicode::UnicodeChar textAreaSsidBuffer[TEXTAREASSID_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenSettingsViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<ScreenSettingsViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // SCREENSETTINGSVIEWBASE_HPP
