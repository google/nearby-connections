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

#ifndef WINRT_Windows_Security_Authentication_OnlineId_0_H
#define WINRT_Windows_Security_Authentication_OnlineId_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation {
  struct HResult;
  struct IAsyncAction;
  template <typename TResult>
  struct __declspec(empty_bases) IAsyncOperation;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {
  template <typename T>
  struct __declspec(empty_bases) IIterable;
  template <typename T>
  struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::System { struct User; }
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::OnlineId {
  enum class CredentialPromptType : int32_t {
    PromptIfNeeded = 0,
    RetypeCredentials = 1,
    DoNotPrompt = 2,
  };
  enum class OnlineIdSystemTicketStatus : int32_t {
    Success = 0,
    Error = 1,
    ServiceConnectionError = 2,
  };
  struct IOnlineIdAuthenticator;
  struct IOnlineIdServiceTicket;
  struct IOnlineIdServiceTicketRequest;
  struct IOnlineIdServiceTicketRequestFactory;
  struct IOnlineIdSystemAuthenticatorForUser;
  struct IOnlineIdSystemAuthenticatorStatics;
  struct IOnlineIdSystemIdentity;
  struct IOnlineIdSystemTicketResult;
  struct IUserIdentity;
  struct OnlineIdAuthenticator;
  struct OnlineIdServiceTicket;
  struct OnlineIdServiceTicketRequest;
  struct OnlineIdSystemAuthenticator;
  struct OnlineIdSystemAuthenticatorForUser;
  struct OnlineIdSystemIdentity;
  struct OnlineIdSystemTicketResult;
  struct SignOutUserOperation;
  struct UserAuthenticationOperation;
  struct UserIdentity;
}
namespace winrt::impl {
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    IOnlineIdAuthenticator> {
  using type = interface_category;
};
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    IOnlineIdServiceTicket> {
  using type = interface_category;
};
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    IOnlineIdServiceTicketRequest> {
  using type = interface_category;
};
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    IOnlineIdServiceTicketRequestFactory> {
  using type = interface_category;
};
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    IOnlineIdSystemAuthenticatorForUser> {
  using type = interface_category;
};
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    IOnlineIdSystemAuthenticatorStatics> {
  using type = interface_category;
};
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    IOnlineIdSystemIdentity> {
  using type = interface_category;
};
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    IOnlineIdSystemTicketResult> {
  using type = interface_category;
};
template <>
struct category<
    winrt::Windows::Security::Authentication::OnlineId::IUserIdentity> {
  using type = interface_category;
};
template <>
struct category<
    winrt::Windows::Security::Authentication::OnlineId::OnlineIdAuthenticator> {
  using type = class_category;
};
template <>
struct category<
    winrt::Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> {
  using type = class_category;
};
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    OnlineIdServiceTicketRequest> {
  using type = class_category;
};
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    OnlineIdSystemAuthenticator> {
  using type = class_category;
};
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    OnlineIdSystemAuthenticatorForUser> {
  using type = class_category;
};
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    OnlineIdSystemIdentity> {
  using type = class_category;
};
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    OnlineIdSystemTicketResult> {
  using type = class_category;
};
template <>
struct category<
    winrt::Windows::Security::Authentication::OnlineId::SignOutUserOperation> {
  using type = class_category;
};
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    UserAuthenticationOperation> {
  using type = class_category;
};
template <>
struct category<
    winrt::Windows::Security::Authentication::OnlineId::UserIdentity> {
  using type = class_category;
};
template <>
struct category<
    winrt::Windows::Security::Authentication::OnlineId::CredentialPromptType> {
  using type = enum_category;
};
template <>
struct category<winrt::Windows::Security::Authentication::OnlineId::
                    OnlineIdSystemTicketStatus> {
  using type = enum_category;
};
template <>
inline constexpr auto& name_v<
    winrt::Windows::Security::Authentication::OnlineId::OnlineIdAuthenticator> =
    L"Windows.Security.Authentication.OnlineId.OnlineIdAuthenticator";
template <>
inline constexpr auto& name_v<
    winrt::Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> =
    L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicket";
template <>
inline constexpr auto& name_v<winrt::Windows::Security::Authentication::
                                  OnlineId::OnlineIdServiceTicketRequest> =
    L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest";
template <>
inline constexpr auto& name_v<winrt::Windows::Security::Authentication::
                                  OnlineId::OnlineIdSystemAuthenticator> =
    L"Windows.Security.Authentication.OnlineId.OnlineIdSystemAuthenticator";
template <>
inline constexpr auto&
    name_v<winrt::Windows::Security::Authentication::OnlineId::
               OnlineIdSystemAuthenticatorForUser> =
        L"Windows.Security.Authentication.OnlineId."
        L"OnlineIdSystemAuthenticatorForUser";
template <>
inline constexpr auto& name_v<winrt::Windows::Security::Authentication::
                                  OnlineId::OnlineIdSystemIdentity> =
    L"Windows.Security.Authentication.OnlineId.OnlineIdSystemIdentity";
template <>
inline constexpr auto& name_v<winrt::Windows::Security::Authentication::
                                  OnlineId::OnlineIdSystemTicketResult> =
    L"Windows.Security.Authentication.OnlineId.OnlineIdSystemTicketResult";
template <>
inline constexpr auto& name_v<
    winrt::Windows::Security::Authentication::OnlineId::SignOutUserOperation> =
    L"Windows.Security.Authentication.OnlineId.SignOutUserOperation";
template <>
inline constexpr auto& name_v<winrt::Windows::Security::Authentication::
                                  OnlineId::UserAuthenticationOperation> =
    L"Windows.Security.Authentication.OnlineId.UserAuthenticationOperation";
template <>
inline constexpr auto&
    name_v<winrt::Windows::Security::Authentication::OnlineId::UserIdentity> =
        L"Windows.Security.Authentication.OnlineId.UserIdentity";
template <>
inline constexpr auto& name_v<
    winrt::Windows::Security::Authentication::OnlineId::CredentialPromptType> =
    L"Windows.Security.Authentication.OnlineId.CredentialPromptType";
template <>
inline constexpr auto& name_v<winrt::Windows::Security::Authentication::
                                  OnlineId::OnlineIdSystemTicketStatus> =
    L"Windows.Security.Authentication.OnlineId.OnlineIdSystemTicketStatus";
template <>
inline constexpr auto& name_v<winrt::Windows::Security::Authentication::
                                  OnlineId::IOnlineIdAuthenticator> =
    L"Windows.Security.Authentication.OnlineId.IOnlineIdAuthenticator";
template <>
inline constexpr auto& name_v<winrt::Windows::Security::Authentication::
                                  OnlineId::IOnlineIdServiceTicket> =
    L"Windows.Security.Authentication.OnlineId.IOnlineIdServiceTicket";
template <>
inline constexpr auto& name_v<winrt::Windows::Security::Authentication::
                                  OnlineId::IOnlineIdServiceTicketRequest> =
    L"Windows.Security.Authentication.OnlineId.IOnlineIdServiceTicketRequest";
template <>
inline constexpr auto&
    name_v<winrt::Windows::Security::Authentication::OnlineId::
               IOnlineIdServiceTicketRequestFactory> =
        L"Windows.Security.Authentication.OnlineId."
        L"IOnlineIdServiceTicketRequestFactory";
template <>
inline constexpr auto&
    name_v<winrt::Windows::Security::Authentication::OnlineId::
               IOnlineIdSystemAuthenticatorForUser> =
        L"Windows.Security.Authentication.OnlineId."
        L"IOnlineIdSystemAuthenticatorForUser";
template <>
inline constexpr auto&
    name_v<winrt::Windows::Security::Authentication::OnlineId::
               IOnlineIdSystemAuthenticatorStatics> =
        L"Windows.Security.Authentication.OnlineId."
        L"IOnlineIdSystemAuthenticatorStatics";
template <>
inline constexpr auto& name_v<winrt::Windows::Security::Authentication::
                                  OnlineId::IOnlineIdSystemIdentity> =
    L"Windows.Security.Authentication.OnlineId.IOnlineIdSystemIdentity";
template <>
inline constexpr auto& name_v<winrt::Windows::Security::Authentication::
                                  OnlineId::IOnlineIdSystemTicketResult> =
    L"Windows.Security.Authentication.OnlineId.IOnlineIdSystemTicketResult";
template <>
inline constexpr auto&
    name_v<winrt::Windows::Security::Authentication::OnlineId::IUserIdentity> =
        L"Windows.Security.Authentication.OnlineId.IUserIdentity";
template <>
inline constexpr guid guid_v<
    winrt::Windows::Security::Authentication::OnlineId::IOnlineIdAuthenticator>{
    0xA003F58A,
    0x29AB,
    0x4817,
    {0xB8, 0x84, 0xD7, 0x51, 0x6D, 0xAD, 0x18,
     0xB9}};  // A003F58A-29AB-4817-B884-D7516DAD18B9
template <>
inline constexpr guid guid_v<
    winrt::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket>{
    0xC95C547F,
    0xD781,
    0x4A94,
    {0xAC, 0xB8, 0xC5, 0x98, 0x74, 0x23, 0x8C,
     0x26}};  // C95C547F-D781-4A94-ACB8-C59874238C26
template <>
inline constexpr guid guid_v<winrt::Windows::Security::Authentication::
                                 OnlineId::IOnlineIdServiceTicketRequest>{
    0x297445D3,
    0xFB63,
    0x4135,
    {0x89, 0x09, 0x4E, 0x35, 0x4C, 0x06, 0x14,
     0x66}};  // 297445D3-FB63-4135-8909-4E354C061466
template <>
inline constexpr guid
    guid_v<winrt::Windows::Security::Authentication::OnlineId::
               IOnlineIdServiceTicketRequestFactory>{
        0xBEBB0A08,
        0x9E73,
        0x4077,
        {0x96, 0x14, 0x08, 0x61, 0x4C, 0x0B, 0xC2,
         0x45}};  // BEBB0A08-9E73-4077-9614-08614C0BC245
template <>
inline constexpr guid guid_v<winrt::Windows::Security::Authentication::
                                 OnlineId::IOnlineIdSystemAuthenticatorForUser>{
    0x5798BEFB,
    0x1DE4,
    0x4186,
    {0xA2, 0xE6, 0xB5, 0x63, 0xF8, 0x6A, 0xAF,
     0x44}};  // 5798BEFB-1DE4-4186-A2E6-B563F86AAF44
template <>
inline constexpr guid guid_v<winrt::Windows::Security::Authentication::
                                 OnlineId::IOnlineIdSystemAuthenticatorStatics>{
    0x85047792,
    0xF634,
    0x41E3,
    {0x96, 0xA4, 0x51, 0x64, 0xE9, 0x02, 0xC7,
     0x40}};  // 85047792-F634-41E3-96A4-5164E902C740
template <>
inline constexpr guid guid_v<winrt::Windows::Security::Authentication::
                                 OnlineId::IOnlineIdSystemIdentity>{
    0x743CD20D,
    0xB6CA,
    0x434D,
    {0x81, 0x24, 0x53, 0xEA, 0x12, 0x68, 0x53,
     0x07}};  // 743CD20D-B6CA-434D-8124-53EA12685307
template <>
inline constexpr guid guid_v<winrt::Windows::Security::Authentication::
                                 OnlineId::IOnlineIdSystemTicketResult>{
    0xDB0A5FF8,
    0xB098,
    0x4ACD,
    {0x9D, 0x13, 0x9E, 0x64, 0x06, 0x52, 0xB5,
     0xB6}};  // DB0A5FF8-B098-4ACD-9D13-9E640652B5B6
template <>
inline constexpr guid
    guid_v<winrt::Windows::Security::Authentication::OnlineId::IUserIdentity>{
        0x2146D9CD,
        0x0742,
        0x4BE3,
        {0x8A, 0x1C, 0x7C, 0x7A, 0xE6, 0x79, 0xAA,
         0x88}};  // 2146D9CD-0742-4BE3-8A1C-7C7AE679AA88
template <>
struct default_interface<
    winrt::Windows::Security::Authentication::OnlineId::OnlineIdAuthenticator> {
  using type = winrt::Windows::Security::Authentication::OnlineId::
      IOnlineIdAuthenticator;
};
template <>
struct default_interface<
    winrt::Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket> {
  using type = winrt::Windows::Security::Authentication::OnlineId::
      IOnlineIdServiceTicket;
};
template <>
struct default_interface<winrt::Windows::Security::Authentication::OnlineId::
                             OnlineIdServiceTicketRequest> {
  using type = winrt::Windows::Security::Authentication::OnlineId::
      IOnlineIdServiceTicketRequest;
};
template <>
struct default_interface<winrt::Windows::Security::Authentication::OnlineId::
                             OnlineIdSystemAuthenticatorForUser> {
  using type = winrt::Windows::Security::Authentication::OnlineId::
      IOnlineIdSystemAuthenticatorForUser;
};
template <>
struct default_interface<winrt::Windows::Security::Authentication::OnlineId::
                             OnlineIdSystemIdentity> {
  using type = winrt::Windows::Security::Authentication::OnlineId::
      IOnlineIdSystemIdentity;
};
template <>
struct default_interface<winrt::Windows::Security::Authentication::OnlineId::
                             OnlineIdSystemTicketResult> {
  using type = winrt::Windows::Security::Authentication::OnlineId::
      IOnlineIdSystemTicketResult;
};
template <>
struct default_interface<
    winrt::Windows::Security::Authentication::OnlineId::SignOutUserOperation> {
  using type = winrt::Windows::Foundation::IAsyncAction;
};
template <>
struct default_interface<winrt::Windows::Security::Authentication::OnlineId::
                             UserAuthenticationOperation> {
  using type = winrt::Windows::Foundation::IAsyncOperation<
      winrt::Windows::Security::Authentication::OnlineId::UserIdentity>;
};
template <>
struct default_interface<
    winrt::Windows::Security::Authentication::OnlineId::UserIdentity> {
  using type =
      winrt::Windows::Security::Authentication::OnlineId::IUserIdentity;
};
template <>
struct abi<winrt::Windows::Security::Authentication::OnlineId::
               IOnlineIdAuthenticator> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall AuthenticateUserAsync(void*, void**) noexcept = 0;
    virtual int32_t __stdcall AuthenticateUserAsyncAdvanced(
        void*, int32_t, void**) noexcept = 0;
    virtual int32_t __stdcall SignOutUserAsync(void**) noexcept = 0;
    virtual int32_t __stdcall put_ApplicationId(winrt::guid) noexcept = 0;
    virtual int32_t __stdcall get_ApplicationId(winrt::guid*) noexcept = 0;
    virtual int32_t __stdcall get_CanSignOut(bool*) noexcept = 0;
    virtual int32_t __stdcall get_AuthenticatedSafeCustomerId(
        void**) noexcept = 0;
  };
};
template <>
struct abi<winrt::Windows::Security::Authentication::OnlineId::
               IOnlineIdServiceTicket> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall get_Value(void**) noexcept = 0;
    virtual int32_t __stdcall get_Request(void**) noexcept = 0;
    virtual int32_t __stdcall get_ErrorCode(int32_t*) noexcept = 0;
  };
};
template <>
struct abi<winrt::Windows::Security::Authentication::OnlineId::
               IOnlineIdServiceTicketRequest> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall get_Service(void**) noexcept = 0;
    virtual int32_t __stdcall get_Policy(void**) noexcept = 0;
  };
};
template <>
struct abi<winrt::Windows::Security::Authentication::OnlineId::
               IOnlineIdServiceTicketRequestFactory> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall CreateOnlineIdServiceTicketRequest(
        void*, void*, void**) noexcept = 0;
    virtual int32_t __stdcall CreateOnlineIdServiceTicketRequestAdvanced(
        void*, void**) noexcept = 0;
  };
};
template <>
struct abi<winrt::Windows::Security::Authentication::OnlineId::
               IOnlineIdSystemAuthenticatorForUser> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall GetTicketAsync(void*, void**) noexcept = 0;
    virtual int32_t __stdcall put_ApplicationId(winrt::guid) noexcept = 0;
    virtual int32_t __stdcall get_ApplicationId(winrt::guid*) noexcept = 0;
    virtual int32_t __stdcall get_User(void**) noexcept = 0;
  };
};
template <>
struct abi<winrt::Windows::Security::Authentication::OnlineId::
               IOnlineIdSystemAuthenticatorStatics> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall get_Default(void**) noexcept = 0;
    virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
  };
};
template <>
struct abi<winrt::Windows::Security::Authentication::OnlineId::
               IOnlineIdSystemIdentity> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall get_Ticket(void**) noexcept = 0;
    virtual int32_t __stdcall get_Id(void**) noexcept = 0;
  };
};
template <>
struct abi<winrt::Windows::Security::Authentication::OnlineId::
               IOnlineIdSystemTicketResult> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall get_Identity(void**) noexcept = 0;
    virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
    virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
  };
};
template <>
struct abi<winrt::Windows::Security::Authentication::OnlineId::IUserIdentity> {
  struct __declspec(novtable) type : inspectable_abi {
    virtual int32_t __stdcall get_Tickets(void**) noexcept = 0;
    virtual int32_t __stdcall get_Id(void**) noexcept = 0;
    virtual int32_t __stdcall get_SafeCustomerId(void**) noexcept = 0;
    virtual int32_t __stdcall get_SignInName(void**) noexcept = 0;
    virtual int32_t __stdcall get_FirstName(void**) noexcept = 0;
    virtual int32_t __stdcall get_LastName(void**) noexcept = 0;
    virtual int32_t __stdcall get_IsBetaAccount(bool*) noexcept = 0;
    virtual int32_t __stdcall get_IsConfirmedPC(bool*) noexcept = 0;
  };
};
template <typename D>
struct consume_Windows_Security_Authentication_OnlineId_IOnlineIdAuthenticator {
  WINRT_IMPL_AUTO(winrt::Windows::Security::Authentication::OnlineId::
                      UserAuthenticationOperation)
  AuthenticateUserAsync(winrt::Windows::Security::Authentication::OnlineId::
                            OnlineIdServiceTicketRequest const& request) const;
  WINRT_IMPL_AUTO(winrt::Windows::Security::Authentication::OnlineId::
                      UserAuthenticationOperation)
  AuthenticateUserAsync(
      param::iterable<winrt::Windows::Security::Authentication::OnlineId::
                          OnlineIdServiceTicketRequest> const& requests,
      winrt::Windows::Security::Authentication::OnlineId::
          CredentialPromptType const& credentialPromptType) const;
  WINRT_IMPL_AUTO(
      winrt::Windows::Security::Authentication::OnlineId::SignOutUserOperation)
  SignOutUserAsync() const;
  WINRT_IMPL_AUTO(void) ApplicationId(winrt::guid const& value) const;
  [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) ApplicationId() const;
  [[nodiscard]] WINRT_IMPL_AUTO(bool) CanSignOut() const;
  [[nodiscard]] WINRT_IMPL_AUTO(hstring) AuthenticatedSafeCustomerId() const;
};
template <>
struct consume<winrt::Windows::Security::Authentication::OnlineId::
                   IOnlineIdAuthenticator> {
  template <typename D>
  using type =
      consume_Windows_Security_Authentication_OnlineId_IOnlineIdAuthenticator<
          D>;
};
template <typename D>
struct consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicket {
  [[nodiscard]] WINRT_IMPL_AUTO(hstring) Value() const;
  [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Security::Authentication::
                                    OnlineId::OnlineIdServiceTicketRequest)
      Request() const;
  [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ErrorCode() const;
};
template <>
struct consume<winrt::Windows::Security::Authentication::OnlineId::
                   IOnlineIdServiceTicket> {
  template <typename D>
  using type =
      consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicket<
          D>;
};
template <typename D>
struct
    consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicketRequest {
  [[nodiscard]] WINRT_IMPL_AUTO(hstring) Service() const;
  [[nodiscard]] WINRT_IMPL_AUTO(hstring) Policy() const;
};
template <>
struct consume<winrt::Windows::Security::Authentication::OnlineId::
                   IOnlineIdServiceTicketRequest> {
  template <typename D>
  using type =
      consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicketRequest<
          D>;
};
template <typename D>
struct
    consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicketRequestFactory {
  WINRT_IMPL_AUTO(winrt::Windows::Security::Authentication::OnlineId::
                      OnlineIdServiceTicketRequest)
  CreateOnlineIdServiceTicketRequest(param::hstring const& service,
                                     param::hstring const& policy) const;
  WINRT_IMPL_AUTO(winrt::Windows::Security::Authentication::OnlineId::
                      OnlineIdServiceTicketRequest)
  CreateOnlineIdServiceTicketRequestAdvanced(
      param::hstring const& service) const;
};
template <>
struct consume<winrt::Windows::Security::Authentication::OnlineId::
                   IOnlineIdServiceTicketRequestFactory> {
  template <typename D>
  using type =
      consume_Windows_Security_Authentication_OnlineId_IOnlineIdServiceTicketRequestFactory<
          D>;
};
template <typename D>
struct
    consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorForUser {
  WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<
                  winrt::Windows::Security::Authentication::OnlineId::
                      OnlineIdSystemTicketResult>)
  GetTicketAsync(winrt::Windows::Security::Authentication::OnlineId::
                     OnlineIdServiceTicketRequest const& request) const;
  WINRT_IMPL_AUTO(void) ApplicationId(winrt::guid const& value) const;
  [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) ApplicationId() const;
  [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::System::User) User() const;
};
template <>
struct consume<winrt::Windows::Security::Authentication::OnlineId::
                   IOnlineIdSystemAuthenticatorForUser> {
  template <typename D>
  using type =
      consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorForUser<
          D>;
};
template <typename D>
struct
    consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorStatics {
  [[nodiscard]] WINRT_IMPL_AUTO(
      winrt::Windows::Security::Authentication::OnlineId::
          OnlineIdSystemAuthenticatorForUser) Default() const;
  WINRT_IMPL_AUTO(winrt::Windows::Security::Authentication::OnlineId::
                      OnlineIdSystemAuthenticatorForUser)
  GetForUser(winrt::Windows::System::User const& user) const;
};
template <>
struct consume<winrt::Windows::Security::Authentication::OnlineId::
                   IOnlineIdSystemAuthenticatorStatics> {
  template <typename D>
  using type =
      consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemAuthenticatorStatics<
          D>;
};
template <typename D>
struct
    consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemIdentity {
  [[nodiscard]] WINRT_IMPL_AUTO(
      winrt::Windows::Security::Authentication::OnlineId::OnlineIdServiceTicket)
      Ticket() const;
  [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
};
template <>
struct consume<winrt::Windows::Security::Authentication::OnlineId::
                   IOnlineIdSystemIdentity> {
  template <typename D>
  using type =
      consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemIdentity<
          D>;
};
template <typename D>
struct
    consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemTicketResult {
  [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Security::Authentication::
                                    OnlineId::OnlineIdSystemIdentity)
      Identity() const;
  [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Security::Authentication::
                                    OnlineId::OnlineIdSystemTicketStatus)
      Status() const;
  [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
};
template <>
struct consume<winrt::Windows::Security::Authentication::OnlineId::
                   IOnlineIdSystemTicketResult> {
  template <typename D>
  using type =
      consume_Windows_Security_Authentication_OnlineId_IOnlineIdSystemTicketResult<
          D>;
};
template <typename D>
struct consume_Windows_Security_Authentication_OnlineId_IUserIdentity {
  [[nodiscard]] WINRT_IMPL_AUTO(
      winrt::Windows::Foundation::Collections::IVectorView<
          winrt::Windows::Security::Authentication::OnlineId::
              OnlineIdServiceTicket>) Tickets() const;
  [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
  [[nodiscard]] WINRT_IMPL_AUTO(hstring) SafeCustomerId() const;
  [[nodiscard]] WINRT_IMPL_AUTO(hstring) SignInName() const;
  [[nodiscard]] WINRT_IMPL_AUTO(hstring) FirstName() const;
  [[nodiscard]] WINRT_IMPL_AUTO(hstring) LastName() const;
  [[nodiscard]] WINRT_IMPL_AUTO(bool) IsBetaAccount() const;
  [[nodiscard]] WINRT_IMPL_AUTO(bool) IsConfirmedPC() const;
};
template <>
struct consume<
    winrt::Windows::Security::Authentication::OnlineId::IUserIdentity> {
  template <typename D>
  using type =
      consume_Windows_Security_Authentication_OnlineId_IUserIdentity<D>;
};
}  // namespace winrt::impl
#endif
