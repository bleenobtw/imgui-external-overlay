#pragma once

#include <imgui.h>
#include <imgui_impl_dx11.h>
#include <imgui_impl_win32.h>

#include <thread>
#include <dwmapi.h>
#include <d3d11.h>

class Overlay
{
public:
	bool CreateOverlay();
	void RenderOverlay();
	void DestroyOverlay();
private:
	WNDCLASSEXW wc;
	HWND hWnd;
};

extern ID3D11Device* g_pd3dDevice;
extern ID3D11DeviceContext* g_pd3dDeviceContext;
extern IDXGISwapChain* g_pSwapChain;
extern ID3D11RenderTargetView* g_mainRenderTargetView;