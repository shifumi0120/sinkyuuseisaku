#include<windows.h>
int WINAPI WinMain(
	HINSTANCE hInstance, HINSTANCE hPrevInstance,
	PSTR lpCmdLine, int nCmdShow) {
	HWND hwnd;
	WNDCLASS winc;
	winc.style = CS_HREDRAW | CS_VREDRAW;
	winc.lpfnWndProc = DefWindowProc;
	winc.cbClsExtra = winc.cbWndExtra = 0;
	winc.hInstance = hInstance;
	winc.hIcon = LoadIcon(NULL, IDI_ASTERISK);
	winc.hCursor = LoadCursor(NULL, IDC_ARROW);
	winc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	winc.lpszMenuName = NULL;
	winc.lpszClassName = TEXT("�J�X�^���E�B���h�E");
	if (!RegisterClass(&winc)) return 0;
	hwnd = CreateWindow(
		TEXT("�J�X�^���E�B���h�E"), TEXT("�E�B���h�E"),
		WS_OVERLAPPEDWINDOW, 100, 100, 200, 200, NULL, NULL,
		hInstance, NULL
	);
	if (hwnd == NULL) return 0;
	ShowWindow(hwnd, SW_SHOW);
	MessageBox(NULL, TEXT("��~��"),
		TEXT("�v���O�����I��"), MB_ICONINFORMATION);
	return 0;
}
