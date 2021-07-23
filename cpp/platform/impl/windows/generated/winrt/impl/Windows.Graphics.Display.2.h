// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// WARNING: Please don't edit this file. It was generated by C++/WinRT
// v2.0.210505.3

#ifndef WINRT_Windows_Graphics_Display_2_H
#define WINRT_Windows_Graphics_Display_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Graphics.Display.1.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Display {
  struct DisplayPropertiesEventHandler : Windows::Foundation::IUnknown {
    DisplayPropertiesEventHandler(std::nullptr_t = nullptr) noexcept {}
    DisplayPropertiesEventHandler(void* ptr, take_ownership_from_abi_t) noexcept
        : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
    DisplayPropertiesEventHandler(
        DisplayPropertiesEventHandler const&) noexcept = default;
    DisplayPropertiesEventHandler(DisplayPropertiesEventHandler&&) noexcept =
        default;
    DisplayPropertiesEventHandler& operator=(
        DisplayPropertiesEventHandler const&) & noexcept = default;
    DisplayPropertiesEventHandler& operator=(
        DisplayPropertiesEventHandler&&) & noexcept = default;
    template <typename L>
    DisplayPropertiesEventHandler(L lambda);
    template <typename F>
    DisplayPropertiesEventHandler(F* function);
    template <typename O, typename M>
    DisplayPropertiesEventHandler(O* object, M method);
    template <typename O, typename M>
    DisplayPropertiesEventHandler(com_ptr<O>&& object, M method);
    template <typename O, typename M>
    DisplayPropertiesEventHandler(weak_ref<O>&& object, M method);
    auto operator()(
        winrt::Windows::Foundation::IInspectable const& sender) const;
  };
  struct NitRange {
    float MinNits;
    float MaxNits;
    float StepSizeNits;
  };
  inline bool operator==(NitRange const& left, NitRange const& right) noexcept {
    return left.MinNits == right.MinNits && left.MaxNits == right.MaxNits &&
           left.StepSizeNits == right.StepSizeNits;
  }
  inline bool operator!=(NitRange const& left, NitRange const& right) noexcept {
    return !(left == right);
  }
  struct __declspec(empty_bases) AdvancedColorInfo
      : winrt::Windows::Graphics::Display::IAdvancedColorInfo {
    AdvancedColorInfo(std::nullptr_t) noexcept {}
    AdvancedColorInfo(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Display::IAdvancedColorInfo(
              ptr, take_ownership_from_abi) {}
    AdvancedColorInfo(AdvancedColorInfo const&) noexcept = default;
    AdvancedColorInfo(AdvancedColorInfo&&) noexcept = default;
    AdvancedColorInfo& operator=(AdvancedColorInfo const&) & noexcept = default;
    AdvancedColorInfo& operator=(AdvancedColorInfo&&) & noexcept = default;
  };
  struct __declspec(empty_bases) BrightnessOverride
      : winrt::Windows::Graphics::Display::IBrightnessOverride {
    BrightnessOverride(std::nullptr_t) noexcept {}
    BrightnessOverride(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Display::IBrightnessOverride(
              ptr, take_ownership_from_abi) {}
    BrightnessOverride(BrightnessOverride const&) noexcept = default;
    BrightnessOverride(BrightnessOverride&&) noexcept = default;
    BrightnessOverride& operator=(BrightnessOverride const&) & noexcept =
        default;
    BrightnessOverride& operator=(BrightnessOverride&&) & noexcept = default;
    static auto GetDefaultForSystem();
    static auto GetForCurrentView();
    static auto SaveForSystemAsync(
        winrt::Windows::Graphics::Display::BrightnessOverride const& value);
  };
  struct __declspec(empty_bases) BrightnessOverrideSettings
      : winrt::Windows::Graphics::Display::IBrightnessOverrideSettings {
    BrightnessOverrideSettings(std::nullptr_t) noexcept {}
    BrightnessOverrideSettings(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Display::IBrightnessOverrideSettings(
              ptr, take_ownership_from_abi) {}
    BrightnessOverrideSettings(BrightnessOverrideSettings const&) noexcept =
        default;
    BrightnessOverrideSettings(BrightnessOverrideSettings&&) noexcept = default;
    BrightnessOverrideSettings& operator=(
        BrightnessOverrideSettings const&) & noexcept = default;
    BrightnessOverrideSettings& operator=(
        BrightnessOverrideSettings&&) & noexcept = default;
    static auto CreateFromLevel(double level);
    static auto CreateFromNits(float nits);
    static auto CreateFromDisplayBrightnessOverrideScenario(
        winrt::Windows::Graphics::Display::
            DisplayBrightnessOverrideScenario const& overrideScenario);
  };
  struct __declspec(empty_bases) ColorOverrideSettings
      : winrt::Windows::Graphics::Display::IColorOverrideSettings {
    ColorOverrideSettings(std::nullptr_t) noexcept {}
    ColorOverrideSettings(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Display::IColorOverrideSettings(
              ptr, take_ownership_from_abi) {}
    ColorOverrideSettings(ColorOverrideSettings const&) noexcept = default;
    ColorOverrideSettings(ColorOverrideSettings&&) noexcept = default;
    ColorOverrideSettings& operator=(ColorOverrideSettings const&) & noexcept =
        default;
    ColorOverrideSettings& operator=(ColorOverrideSettings&&) & noexcept =
        default;
    static auto CreateFromDisplayColorOverrideScenario(
        winrt::Windows::Graphics::Display::DisplayColorOverrideScenario const&
            overrideScenario);
  };
  struct __declspec(empty_bases) DisplayEnhancementOverride
      : winrt::Windows::Graphics::Display::IDisplayEnhancementOverride {
    DisplayEnhancementOverride(std::nullptr_t) noexcept {}
    DisplayEnhancementOverride(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Display::IDisplayEnhancementOverride(
              ptr, take_ownership_from_abi) {}
    DisplayEnhancementOverride(DisplayEnhancementOverride const&) noexcept =
        default;
    DisplayEnhancementOverride(DisplayEnhancementOverride&&) noexcept = default;
    DisplayEnhancementOverride& operator=(
        DisplayEnhancementOverride const&) & noexcept = default;
    DisplayEnhancementOverride& operator=(
        DisplayEnhancementOverride&&) & noexcept = default;
    static auto GetForCurrentView();
  };
  struct __declspec(empty_bases) DisplayEnhancementOverrideCapabilities
      : winrt::Windows::Graphics::Display::
            IDisplayEnhancementOverrideCapabilities {
    DisplayEnhancementOverrideCapabilities(std::nullptr_t) noexcept {}
    DisplayEnhancementOverrideCapabilities(void* ptr,
                                           take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Display::
              IDisplayEnhancementOverrideCapabilities(
                  ptr, take_ownership_from_abi) {}
    DisplayEnhancementOverrideCapabilities(
        DisplayEnhancementOverrideCapabilities const&) noexcept = default;
    DisplayEnhancementOverrideCapabilities(
        DisplayEnhancementOverrideCapabilities&&) noexcept = default;
    DisplayEnhancementOverrideCapabilities& operator=(
        DisplayEnhancementOverrideCapabilities const&) & noexcept = default;
    DisplayEnhancementOverrideCapabilities& operator=(
        DisplayEnhancementOverrideCapabilities&&) & noexcept = default;
  };
  struct __declspec(empty_bases)
      DisplayEnhancementOverrideCapabilitiesChangedEventArgs
      : winrt::Windows::Graphics::Display::
            IDisplayEnhancementOverrideCapabilitiesChangedEventArgs {
    DisplayEnhancementOverrideCapabilitiesChangedEventArgs(
        std::nullptr_t) noexcept {}
    DisplayEnhancementOverrideCapabilitiesChangedEventArgs(
        void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Display::
              IDisplayEnhancementOverrideCapabilitiesChangedEventArgs(
                  ptr, take_ownership_from_abi) {}
    DisplayEnhancementOverrideCapabilitiesChangedEventArgs(
        DisplayEnhancementOverrideCapabilitiesChangedEventArgs const&) noexcept =
        default;
    DisplayEnhancementOverrideCapabilitiesChangedEventArgs(
        DisplayEnhancementOverrideCapabilitiesChangedEventArgs&&) noexcept =
        default;
    DisplayEnhancementOverrideCapabilitiesChangedEventArgs& operator=(
        DisplayEnhancementOverrideCapabilitiesChangedEventArgs const&) & noexcept =
        default;
    DisplayEnhancementOverrideCapabilitiesChangedEventArgs& operator=(
        DisplayEnhancementOverrideCapabilitiesChangedEventArgs&&) & noexcept =
        default;
  };
  struct __declspec(empty_bases) DisplayInformation
      : winrt::Windows::Graphics::Display::IDisplayInformation,
        impl::require<DisplayInformation,
                      winrt::Windows::Graphics::Display::IDisplayInformation2,
                      winrt::Windows::Graphics::Display::IDisplayInformation3,
                      winrt::Windows::Graphics::Display::IDisplayInformation4,
                      winrt::Windows::Graphics::Display::IDisplayInformation5> {
    DisplayInformation(std::nullptr_t) noexcept {}
    DisplayInformation(void* ptr, take_ownership_from_abi_t) noexcept
        : winrt::Windows::Graphics::Display::IDisplayInformation(
              ptr, take_ownership_from_abi) {}
    DisplayInformation(DisplayInformation const&) noexcept = default;
    DisplayInformation(DisplayInformation&&) noexcept = default;
    DisplayInformation& operator=(DisplayInformation const&) & noexcept =
        default;
    DisplayInformation& operator=(DisplayInformation&&) & noexcept = default;
    static auto GetForCurrentView();
    [[nodiscard]] static auto AutoRotationPreferences();
    static auto AutoRotationPreferences(
        winrt::Windows::Graphics::Display::DisplayOrientations const& value);
    static auto DisplayContentsInvalidated(
        winrt::Windows::Foundation::TypedEventHandler<
            winrt::Windows::Graphics::Display::DisplayInformation,
            winrt::Windows::Foundation::IInspectable> const& handler);
    using DisplayContentsInvalidated_revoker = impl::factory_event_revoker<
        winrt::Windows::Graphics::Display::IDisplayInformationStatics,
        &impl::abi_t<
            winrt::Windows::Graphics::Display::IDisplayInformationStatics>::
            remove_DisplayContentsInvalidated>;
    [[nodiscard]] static DisplayContentsInvalidated_revoker
    DisplayContentsInvalidated(
        auto_revoke_t,
        winrt::Windows::Foundation::TypedEventHandler<
            winrt::Windows::Graphics::Display::DisplayInformation,
            winrt::Windows::Foundation::IInspectable> const& handler);
    static auto DisplayContentsInvalidated(winrt::event_token const& token);
  };
  struct DisplayProperties {
    DisplayProperties() = delete;
    [[nodiscard]] static auto CurrentOrientation();
    [[nodiscard]] static auto NativeOrientation();
    [[nodiscard]] static auto AutoRotationPreferences();
    static auto AutoRotationPreferences(
        winrt::Windows::Graphics::Display::DisplayOrientations const& value);
    static auto OrientationChanged(
        winrt::Windows::Graphics::Display::DisplayPropertiesEventHandler const&
            handler);
    using OrientationChanged_revoker = impl::factory_event_revoker<
        winrt::Windows::Graphics::Display::IDisplayPropertiesStatics,
        &impl::abi_t<winrt::Windows::Graphics::Display::
                         IDisplayPropertiesStatics>::remove_OrientationChanged>;
    [[nodiscard]] static OrientationChanged_revoker OrientationChanged(
        auto_revoke_t,
        winrt::Windows::Graphics::Display::DisplayPropertiesEventHandler const&
            handler);
    static auto OrientationChanged(winrt::event_token const& token);
    [[nodiscard]] static auto ResolutionScale();
    [[nodiscard]] static auto LogicalDpi();
    static auto LogicalDpiChanged(
        winrt::Windows::Graphics::Display::DisplayPropertiesEventHandler const&
            handler);
    using LogicalDpiChanged_revoker = impl::factory_event_revoker<
        winrt::Windows::Graphics::Display::IDisplayPropertiesStatics,
        &impl::abi_t<winrt::Windows::Graphics::Display::
                         IDisplayPropertiesStatics>::remove_LogicalDpiChanged>;
    [[nodiscard]] static LogicalDpiChanged_revoker LogicalDpiChanged(
        auto_revoke_t,
        winrt::Windows::Graphics::Display::DisplayPropertiesEventHandler const&
            handler);
    static auto LogicalDpiChanged(winrt::event_token const& token);
    [[nodiscard]] static auto StereoEnabled();
    static auto StereoEnabledChanged(
        winrt::Windows::Graphics::Display::DisplayPropertiesEventHandler const&
            handler);
    using StereoEnabledChanged_revoker = impl::factory_event_revoker<
        winrt::Windows::Graphics::Display::IDisplayPropertiesStatics,
        &impl::abi_t<
            winrt::Windows::Graphics::Display::IDisplayPropertiesStatics>::
            remove_StereoEnabledChanged>;
    [[nodiscard]] static StereoEnabledChanged_revoker StereoEnabledChanged(
        auto_revoke_t,
        winrt::Windows::Graphics::Display::DisplayPropertiesEventHandler const&
            handler);
    static auto StereoEnabledChanged(winrt::event_token const& token);
    static auto GetColorProfileAsync();
    static auto ColorProfileChanged(
        winrt::Windows::Graphics::Display::DisplayPropertiesEventHandler const&
            handler);
    using ColorProfileChanged_revoker = impl::factory_event_revoker<
        winrt::Windows::Graphics::Display::IDisplayPropertiesStatics,
        &impl::abi_t<
            winrt::Windows::Graphics::Display::IDisplayPropertiesStatics>::
            remove_ColorProfileChanged>;
    [[nodiscard]] static ColorProfileChanged_revoker ColorProfileChanged(
        auto_revoke_t,
        winrt::Windows::Graphics::Display::DisplayPropertiesEventHandler const&
            handler);
    static auto ColorProfileChanged(winrt::event_token const& token);
    static auto DisplayContentsInvalidated(
        winrt::Windows::Graphics::Display::DisplayPropertiesEventHandler const&
            handler);
    using DisplayContentsInvalidated_revoker = impl::factory_event_revoker<
        winrt::Windows::Graphics::Display::IDisplayPropertiesStatics,
        &impl::abi_t<
            winrt::Windows::Graphics::Display::IDisplayPropertiesStatics>::
            remove_DisplayContentsInvalidated>;
    [[nodiscard]] static DisplayContentsInvalidated_revoker
    DisplayContentsInvalidated(
        auto_revoke_t,
        winrt::Windows::Graphics::Display::DisplayPropertiesEventHandler const&
            handler);
    static auto DisplayContentsInvalidated(winrt::event_token const& token);
  };
}
#endif
