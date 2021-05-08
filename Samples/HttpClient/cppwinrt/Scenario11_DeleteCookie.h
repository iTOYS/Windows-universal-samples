//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

#pragma once

#include "Scenario11_DeleteCookie.g.h"
#include "MainPage.h"

namespace winrt::SDKTemplate::implementation
{
    struct Scenario11_DeleteCookie : Scenario11_DeleteCookieT<Scenario11_DeleteCookie>
    {
        Scenario11_DeleteCookie();

        void DeleteCookie_Click(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& e);

    private:
        SDKTemplate::MainPage rootPage{ MainPage::Current() };
    };
}

namespace winrt::SDKTemplate::factory_implementation
{
    struct Scenario11_DeleteCookie : Scenario11_DeleteCookieT<Scenario11_DeleteCookie, implementation::Scenario11_DeleteCookie>
    {
    };
}
