#include <windows.h>
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
const char g_szClassName[] = "myWindowClass";

char* a="sp";
HWND TextBox,TextField,Button,Button1,TextField1;

// Step 4: the Window Procedure
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch(msg)
    {	   
    	

    case WM_CREATE:
    {
    	
        //Enter your name (static text)
		TextField= CreateWindow("STATIC","Enter Your Name :",WS_BORDER|WS_CHILD|WS_VISIBLE,10,50,400,20,hwnd,NULL,NULL,NULL);
     	 if(TextField == NULL)
            MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
//---------------------------------------------------------------------------------------------------------------------------    
        
		//Editable text box
		 	TextBox = CreateWindow("EDIT","",WS_BORDER|WS_CHILD|WS_VISIBLE,10,70,400,20,hwnd,NULL,NULL,NULL);
     	  if(TextBox == NULL)
            MessageBox(hwnd,"Could not create textbox.","Error", MB_OK|MB_ICONERROR);
//-------------------------------------------------------------------------------------------------------------------------

		//Button
		Button=CreateWindow("BUTTON","RED",WS_VISIBLE|WS_CHILD|WS_BORDER,10,110,100,20,hwnd,(HMENU) 1,NULL,NULL);
		 if(TextBox == NULL)
            MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);
//-------------------------------------------------------------------------------------------------------------------------------
    //-------------------------------------------------------------------------------------------------------------------------

		//Button
		Button1=CreateWindow("BUTTON","GREEN",WS_VISIBLE|WS_CHILD|WS_BORDER,10,215,100,20,hwnd,(HMENU) 2,NULL,NULL);
		 if(TextBox == NULL)
            MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);
//-------------------------------------------------------------------------------------------------------------------------------
    

	}
	
    break;
    
    case WM_COMMAND:
    	{
    		switch (LOWORD(wParam))
    		
    		{
				case 1:
    			{	
					
					int userdata=0;
					
    				userdata=GetWindowTextW(TextBox,(LPWSTR)a,20);
    			TextField1= CreateWindow("STATIC",a,WS_BORDER|WS_CHILD|WS_VISIBLE,400,400,400,20,hwnd,NULL,NULL,NULL);
    				MessageBox(hwnd,"RED","Error", MB_OK | MB_ICONERROR);
				}
    			break;
    			case 2:
    				{
    				MessageBox(hwnd,"Green","Error", MB_OK | MB_ICONERROR);

					}
    		break;
    	}
    }
	break;
        case WM_CLOSE:
            DestroyWindow(hwnd);
             break;
        case WM_DESTROY:
            PostQuitMessage(0);
        break;
        default:
            return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
}


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow)
{
    WNDCLASSEX wc;
    HWND hwnd;
    MSG Msg;

    //Step 1: Registering the Window Class
    wc.cbSize        = sizeof(WNDCLASSEX);
    wc.style         = 0;
    wc.lpfnWndProc   = WndProc;
    wc.cbClsExtra    = 0;
    wc.cbWndExtra    = 0;
    wc.hInstance     = hInstance;
    wc.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
    wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
    wc.lpszMenuName  = NULL;
    wc.lpszClassName = g_szClassName;
    wc.hIconSm       = LoadIcon(NULL, IDI_APPLICATION);

    if(!RegisterClassEx(&wc))
    {
        MessageBox(NULL, "Window Registration Failed!", "Error!",
            MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    // Step 2: Creating the Window
    hwnd = CreateWindowEx(
        WS_EX_DLGMODALFRAME,
        g_szClassName,
        "RESISTANCE MESUREMENT AND ANALYSIS",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT,1000,1000,
        NULL,NULL,hInstance,NULL);
		
    if(hwnd == NULL)
    {
        MessageBox(NULL, "Window Creation Failed!", "Error!",
            MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    // Step 3: The Message Loop
    while(GetMessage(&Msg, NULL, 0, 0) > 0)
    {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    	//cout<<"hello";
        //int a=1;
		//cout<<a;
    }
   /// return Msg.wParam;
}

//int main()
//{		string a="s";
//	return 0;
	
//}

//to create editable window
//#define IDC_MAIN_EDIT	101
 /*hEdit = CreateWindowEx(WS_EX_CLIENTEDGE, "EDIT", "", 
            WS_CHILD | WS_VISIBLE | WS_VSCROLL | WS_HSCROLL | ES_MULTILINE | ES_AUTOVSCROLL | ES_AUTOHSCROLL, 
            0, 0, 100, 100, hwnd, (HMENU)IDC_MAIN_EDIT, GetModuleHandle(NULL), NULL);*/

//size of editable window            
      /* case WM_SIZE:
    {
        HWND hEdit;
        RECT rcClient;

        GetClientRect(hwnd, &rcClient);

        hEdit = GetDlgItem(hwnd, IDC_MAIN_EDIT);
        SetWindowPos(hEdit, NULL, 0, 0, rcClient.right, rcClient.bottom, SWP_NOZORDER);
    }
    break;
*/
  // hfDefault = GetStockObject(DEFAULT_GUI_FONT);
      //  SendMessage(hEdit, WM_SETFONT, (WPARAM)hfDefault, MAKELPARAM(FALSE, 0));
    //HFONT hfDefault;
        //HWND hEdit;
