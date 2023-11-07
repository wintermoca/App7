// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App7::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    
}

using namespace winrt::Microsoft::UI;
void winrt::App7::implementation::MainWindow::CanvasControl_Draw(winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl const& sender, winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs const& args)
{
    
    args.DrawingSession().DrawEllipse(155, 115, 80, 30, Colors::Black(), 8);
    args.DrawingSession().DrawText(L"Hi my name is", 100,100,Colors::Yellow());
    args.DrawingSession().DrawText(L"Kwon yoonho", 250, 280, Colors::Black());
    args.DrawingSession().DrawCircle(300, 300, 200, Colors::BlueViolet(), 7);
    args.DrawingSession().FillRoundedRectangle(600, 50, 300, 200, 20, 20, Colors::MediumSeaGreen());
    args.DrawingSession().DrawText(L"Hello, world", 700, 125, Colors::Aqua());
    args.DrawingSession().FillRoundedRectangle(600, 300, 200, 200, 20, 20, Colors::LightGoldenrodYellow());
    args.DrawingSession().DrawText(L"Hello, world", 300, 500, Colors::WhiteSmoke());
}
