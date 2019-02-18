#include <windows.h>
void getdata(int);
void loadimages();
int i=1,j=1;
HBITMAP hLogoImage,hLogoImage1,hLogoImage2,hGenerateImageBlack,hGenerateImageBrown,hGenerateImageRed,hGenerateImageOrange,hGenerateImageYellow,hGenerateImageGreen,hGenerateImage,hGenerateImageBlue,hGenerateImageViolet,hGenerateImageGray,hGenerateImageWhite,hGenerateImageGold,hGenerateImageSilver,hGenerateImageNocolor;
HWND hwnd,hLogo,hLogo1,hLogo2,TextField,TextBand1,TextBand2,TextBand3,TextBand4,Button0,Button1,Button2,Button3,Button4,Button5,Button6,Button7,Button8,Button9,Button10,Button11,Button12;
/* This is where all the input to the window goes to */
LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {
		case WM_CREATE:
			{	loadimages();
				//CHARUSAT LOGO
					hLogo=CreateWindow("STATIC",NULL,WS_VISIBLE|WS_CHILD|SS_BITMAP,1,1,300,200,hwnd,NULL,NULL,NULL);
					SendMessageW(hLogo,STM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hLogoImage);
				//DEPSTAR LOGO
					hLogo1=CreateWindow("STATIC",NULL,WS_VISIBLE|WS_CHILD|SS_BITMAP,1100,5,250,150,hwnd,NULL,NULL,NULL);
					SendMessageW(hLogo1,STM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hLogoImage1);
				//Title	
					hLogo2=CreateWindow("STATIC",NULL,WS_VISIBLE|WS_CHILD|SS_BITMAP,460,130,350,50,hwnd,NULL,NULL,NULL);
					SendMessageW(hLogo2,STM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hLogoImage2);
				//Choose Color :
					TextField= CreateWindow("STATIC","CHOOSE COLOR FORM BELOW :",WS_BORDER|WS_CHILD|WS_VISIBLE,50,300,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextField == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
				
//---------------------------------------------------------------------------------------------------------------------------		
				//Button BLACK
					hGenerateImageBlack=(HBITMAP)LoadImageW(NULL,L"ButtonBlackf.bmp",IMAGE_BITMAP,120,30,LR_LOADFROMFILE);
					Button0=CreateWindow("BUTTON",NULL,WS_VISIBLE|WS_CHILD|WS_BORDER|BS_BITMAP,50,370,120,30,hwnd,(HMENU) 1,NULL,NULL);
					SendMessageW(Button0,BM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hGenerateImageBlack);
		 			if(Button0 == NULL)
            		MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);

//-------------------------------------------------------------------------------------------------------------------------------

				//Button BROWN
					hGenerateImageBrown=(HBITMAP)LoadImageW(NULL,L"ButtonBrownf.bmp",IMAGE_BITMAP,120,30,LR_LOADFROMFILE);
					Button1=CreateWindow("BUTTON",NULL,WS_VISIBLE|WS_CHILD|WS_BORDER|BS_BITMAP,240,370,120,30,hwnd,(HMENU) 2,NULL,NULL);
					SendMessageW(Button1,BM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hGenerateImageBrown);
		 			if(Button1 == NULL)
            		MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);
            		
           		 //Button RED
					hGenerateImageRed=(HBITMAP)LoadImageW(NULL,L"ButtonRedf.bmp",IMAGE_BITMAP,120,30,LR_LOADFROMFILE);
					Button2=CreateWindow("BUTTON",NULL,WS_VISIBLE|WS_CHILD|WS_BORDER|BS_BITMAP,410,370,120,30,hwnd,(HMENU) 3,NULL,NULL);
					SendMessageW(Button2,BM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hGenerateImageRed);
		 			if(Button2 == NULL)
            		MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);
            		
            	//Button ORANGE
					hGenerateImageOrange=(HBITMAP)LoadImageW(NULL,L"ButtonOrangef.bmp",IMAGE_BITMAP,120,30,LR_LOADFROMFILE);
					Button3=CreateWindow("BUTTON",NULL,WS_VISIBLE|WS_CHILD|WS_BORDER|BS_BITMAP,580,370,120,30,hwnd,(HMENU) 4,NULL,NULL);
					SendMessageW(Button3,BM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hGenerateImageOrange);
		 			if(Button3 == NULL)
            		MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);
		
				//Button YELLOW
					hGenerateImageYellow=(HBITMAP)LoadImageW(NULL,L"ButtonYellowf.bmp",IMAGE_BITMAP,120,30,LR_LOADFROMFILE);
					Button4=CreateWindow("BUTTON",NULL,WS_VISIBLE|WS_CHILD|WS_BORDER|BS_BITMAP,750,370,120,30,hwnd,(HMENU) 5,NULL,NULL);
					SendMessageW(Button4,BM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hGenerateImageYellow);
		 			if(Button4 == NULL)
            		MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);
            		
            		//Button GREEN
					hGenerateImageGreen=(HBITMAP)LoadImageW(NULL,L"ButtonGreenf.bmp",IMAGE_BITMAP,120,30,LR_LOADFROMFILE);
					Button5=CreateWindow("BUTTON",NULL,WS_VISIBLE|WS_CHILD|WS_BORDER|BS_BITMAP,910,370,120,30,hwnd,(HMENU) 6,NULL,NULL);
					SendMessageW(Button5,BM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hGenerateImageGreen);
		 			if(Button5 == NULL)
            		MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);
  
  	          		//Button BLUE
					hGenerateImageBlue=(HBITMAP)LoadImageW(NULL,L"ButtonBluef.bmp",IMAGE_BITMAP,120,30,LR_LOADFROMFILE);
					Button6=CreateWindow("BUTTON",NULL,WS_VISIBLE|WS_CHILD|WS_BORDER|BS_BITMAP,1080,370,120,30,hwnd,(HMENU) 7,NULL,NULL);
					SendMessageW(Button6,BM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hGenerateImageBlue);
		 			if(Button6 == NULL)
            		MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);

  	          		//Button VIOLET
					hGenerateImageViolet=(HBITMAP)LoadImageW(NULL,L"ButtonVioletf.bmp",IMAGE_BITMAP,120,30,LR_LOADFROMFILE);
					Button7=CreateWindow("BUTTON",NULL,WS_VISIBLE|WS_CHILD|WS_BORDER|BS_BITMAP,145,450,120,30,hwnd,(HMENU) 8,NULL,NULL);
					SendMessageW(Button7,BM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hGenerateImageViolet);
		 			if(Button7 == NULL)
            		MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);

  	          		//Button GRAY
					hGenerateImageGray=(HBITMAP)LoadImageW(NULL,L"ButtonGrayf.bmp",IMAGE_BITMAP,120,30,LR_LOADFROMFILE);
					Button8=CreateWindow("BUTTON",NULL,WS_VISIBLE|WS_CHILD|WS_BORDER|BS_BITMAP,315,450,120,30,hwnd,(HMENU) 9,NULL,NULL);
					SendMessageW(Button8,BM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hGenerateImageGray);
		 			if(Button8 == NULL)
            		MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);
            		
            		//Button WHITE
					hGenerateImageWhite=(HBITMAP)LoadImageW(NULL,L"ButtonWhitef.bmp",IMAGE_BITMAP,120,30,LR_LOADFROMFILE);
					Button9=CreateWindow("BUTTON",NULL,WS_VISIBLE|WS_CHILD|WS_BORDER|BS_BITMAP,485,450,120,30,hwnd,(HMENU) 10,NULL,NULL);
					SendMessageW(Button9,BM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hGenerateImageWhite);
		 			if(Button9 == NULL)
            		MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);

            		//Button GOLD
					hGenerateImageGold=(HBITMAP)LoadImageW(NULL,L"ButtonGoldf.bmp",IMAGE_BITMAP,120,30,LR_LOADFROMFILE);
					Button10=CreateWindow("BUTTON",NULL,WS_VISIBLE|WS_CHILD|WS_BORDER|BS_BITMAP,655,450,120,30,hwnd,(HMENU) 11,NULL,NULL);
					SendMessageW(Button10,BM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hGenerateImageGold);
		 			if(Button10 == NULL)
            		MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);
    
	        		//Button SILVER
					hGenerateImageSilver=(HBITMAP)LoadImageW(NULL,L"ButtonSilverf.bmp",IMAGE_BITMAP,120,30,LR_LOADFROMFILE);
					Button11=CreateWindow("BUTTON",NULL,WS_VISIBLE|WS_CHILD|WS_BORDER|BS_BITMAP,825,450,120,30,hwnd,(HMENU) 12,NULL,NULL);
					SendMessageW(Button11,BM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hGenerateImageSilver);
		 			if(Button11 == NULL)
            		MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);
	
	 				//Button NOCOLOR
					hGenerateImageNocolor=(HBITMAP)LoadImageW(NULL,L"ButtonNocolorf.bmp",IMAGE_BITMAP,120,30,LR_LOADFROMFILE);
					Button12=CreateWindow("BUTTON",NULL,WS_VISIBLE|WS_CHILD|WS_BORDER|BS_BITMAP,995,450,120,30,hwnd,(HMENU) 13,NULL,NULL);
					SendMessageW(Button12,BM_SETIMAGE,IMAGE_BITMAP,(LPARAM)hGenerateImageNocolor);
		 			if(Button12 == NULL)
            		MessageBox(hwnd,"Could not create button","Error", MB_OK | MB_ICONERROR);
	/* Upon destruction, tell the main thread to stop */
}break;

  case WM_COMMAND:
    	{
    		if(i!=5){
    		switch (LOWORD(wParam))
    		
    		{
				case 1:
    			{	getdata(0);
					i++; 
					if(j==1){					 					
    				//Band 1 :
					TextBand1= CreateWindow("STATIC","COLOR OF BAND 1 : BLACK",WS_BORDER|WS_CHILD|WS_VISIBLE,50,500,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand1 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 1 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==2){					 			  					
    				//Band 2 :
					TextBand2= CreateWindow("STATIC","COLOR OF BAND 2 : BLACK",WS_BORDER|WS_CHILD|WS_VISIBLE,50,530,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand2 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 2 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==3){		  					
					//Band 3 :
					TextBand3= CreateWindow("STATIC","COLOR OF BAND 3 : BLACK",WS_BORDER|WS_CHILD|WS_VISIBLE,50,560,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand3 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 3 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==4){					
					//Band 4 :
					TextBand4= CreateWindow("STATIC","COLOR OF BAND 4 : BLACK",WS_BORDER|WS_CHILD|WS_VISIBLE,50,590,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand4 == NULL)
            		MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);				  					
    				//MessageBox(hwnd,"BAND 4 COLOR IS BLACK","MESAGE", MB_OK);
					
			}j++;
				}
				
    			break;
    			case 2:
    			{getdata(1);	
				i++; 
					if(j==1){
						  					
    				//Band 1 :
					TextBand1= CreateWindow("STATIC","COLOR OF BAND 1 : BROWN",WS_BORDER|WS_CHILD|WS_VISIBLE,50,500,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand1 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 1 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==2){
									  					
    				//Band 2 :
					TextBand2= CreateWindow("STATIC","COLOR OF BAND 2 : BROWN",WS_BORDER|WS_CHILD|WS_VISIBLE,50,530,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand2 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 2 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==3){
									  					
    				//Band 3 :
					TextBand3= CreateWindow("STATIC","COLOR OF BAND 3 : BROWN",WS_BORDER|WS_CHILD|WS_VISIBLE,50,560,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand3 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 3 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==4){
					
					//Band 4 :
					TextBand4= CreateWindow("STATIC","COLOR OF BAND 4 : BROWN",WS_BORDER|WS_CHILD|WS_VISIBLE,50,590,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand4 == NULL)
            		MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);				  					
    				//MessageBox(hwnd,"BAND 4 COLOR IS BLACK","MESAGE", MB_OK);
					
			}j++;
				}
				
    			break;
    			case 3:
    			{	i++; 
					if(j==1){
						  					
    				//Band 1 :
					TextBand1= CreateWindow("STATIC","COLOR OF BAND 1 : RED",WS_BORDER|WS_CHILD|WS_VISIBLE,50,500,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand1 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 1 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==2){
									  					
    				//Band 2 :
					TextBand2= CreateWindow("STATIC","COLOR OF BAND 2 : RED",WS_BORDER|WS_CHILD|WS_VISIBLE,50,530,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand2 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 2 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==3){
									  					
    				//Band 3 :
					TextBand3= CreateWindow("STATIC","COLOR OF BAND 3 : RED",WS_BORDER|WS_CHILD|WS_VISIBLE,50,560,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand3 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 3 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==4){
					
					//Band 4 :
					TextBand4= CreateWindow("STATIC","COLOR OF BAND 4 : RED",WS_BORDER|WS_CHILD|WS_VISIBLE,50,590,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand4 == NULL)
            		MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);				  					
    				//MessageBox(hwnd,"BAND 4 COLOR IS BLACK","MESAGE", MB_OK);
					
			}j++;
				}
				
    			break;
    			case 4:
    			{getdata(3);	
				i++; 
					if(j==1){
						  					
    				//Band 1 :
					TextBand1= CreateWindow("STATIC","COLOR OF BAND 1 : ORANGE",WS_BORDER|WS_CHILD|WS_VISIBLE,50,500,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand1 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 1 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==2){
									  					
    				//Band 2 :
					TextBand2= CreateWindow("STATIC","COLOR OF BAND 2 : ORANGE",WS_BORDER|WS_CHILD|WS_VISIBLE,50,530,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand2 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 2 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==3){
									  					
    				//Band 3 :
					TextBand3= CreateWindow("STATIC","COLOR OF BAND 3 : ORANGE",WS_BORDER|WS_CHILD|WS_VISIBLE,50,560,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand3 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 3 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==4){
					
					//Band 4 :
					TextBand4= CreateWindow("STATIC","COLOR OF BAND 4 : ORANGE",WS_BORDER|WS_CHILD|WS_VISIBLE,50,590,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand4 == NULL)
            		MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);				  					
    				//MessageBox(hwnd,"BAND 4 COLOR IS BLACK","MESAGE", MB_OK);
					
			}j++;
				}
				
    			break;
    			case 5:
    			{getdata(4);	
				i++; 
					if(j==1){
						  					
    				//Band 1 :
					TextBand1= CreateWindow("STATIC","COLOR OF BAND 1 : YELLOW",WS_BORDER|WS_CHILD|WS_VISIBLE,50,500,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand1 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 1 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==2){
									  					
    				//Band 2 :
					TextBand2= CreateWindow("STATIC","COLOR OF BAND 2 : YELLOW",WS_BORDER|WS_CHILD|WS_VISIBLE,50,530,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand2 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 2 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==3){
									  					
    				//Band 3 :
					TextBand3= CreateWindow("STATIC","COLOR OF BAND 3 : YELLOW",WS_BORDER|WS_CHILD|WS_VISIBLE,50,560,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand3 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 3 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==4){
					
					//Band 4 :
					TextBand4= CreateWindow("STATIC","COLOR OF BAND 4 : YELLOW",WS_BORDER|WS_CHILD|WS_VISIBLE,50,590,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand4 == NULL)
            		MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);				  					
    				//MessageBox(hwnd,"BAND 4 COLOR IS BLACK","MESAGE", MB_OK);
					
			}j++;
				}
				
    			break;
    			case 6:
    			{getdata(5);	
				i++; 
					if(j==1){
						  					
    				//Band 1 :
					TextBand1= CreateWindow("STATIC","COLOR OF BAND 1 : GREEN",WS_BORDER|WS_CHILD|WS_VISIBLE,50,500,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand1 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 1 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==2){
									  					
    				//Band 2 :
					TextBand2= CreateWindow("STATIC","COLOR OF BAND 2 : GREEN",WS_BORDER|WS_CHILD|WS_VISIBLE,50,530,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand2 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 2 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==3){
									  					
    				//Band 3 :
					TextBand3= CreateWindow("STATIC","COLOR OF BAND 3 : GREEN",WS_BORDER|WS_CHILD|WS_VISIBLE,50,560,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand3 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 3 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==4){
					
					//Band 4 :
					TextBand4= CreateWindow("STATIC","COLOR OF BAND 4 : GREEN",WS_BORDER|WS_CHILD|WS_VISIBLE,50,590,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand4 == NULL)
            		MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);				  					
    				//MessageBox(hwnd,"BAND 4 COLOR IS BLACK","MESAGE", MB_OK);
					
			}j++;
				}
				
    			break;
    			case 7:
    			{getdata(6);	
				i++; 
					if(j==1){
						  					
    				//Band 1 :
					TextBand1= CreateWindow("STATIC","COLOR OF BAND 1 : BLUE",WS_BORDER|WS_CHILD|WS_VISIBLE,50,500,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand1 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 1 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==2){
									  					
    				//Band 2 :
					TextBand2= CreateWindow("STATIC","COLOR OF BAND 2 : BLUE",WS_BORDER|WS_CHILD|WS_VISIBLE,50,530,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand2 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 2 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==3){
									  					
    				//Band 3 :
					TextBand3= CreateWindow("STATIC","COLOR OF BAND 3 : BLUE",WS_BORDER|WS_CHILD|WS_VISIBLE,50,560,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand3 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 3 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==4){
					
					//Band 4 :
					TextBand4= CreateWindow("STATIC","COLOR OF BAND 4 : BLUE",WS_BORDER|WS_CHILD|WS_VISIBLE,50,590,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand4 == NULL)
            		MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);				  					
    				//MessageBox(hwnd,"BAND 4 COLOR IS BLACK","MESAGE", MB_OK);
					
			}j++;
				}
				
    			break;
    			case 8:
    			{getdata(7);	
				i++; 
					if(j==1){
						  					
    				//Band 1 :
					TextBand1= CreateWindow("STATIC","COLOR OF BAND 1 : VIOLET",WS_BORDER|WS_CHILD|WS_VISIBLE,50,500,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand1 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 1 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==2){
									  					
    				//Band 2 :
					TextBand2= CreateWindow("STATIC","COLOR OF BAND 2 : VIOLET",WS_BORDER|WS_CHILD|WS_VISIBLE,50,530,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand2 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 2 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==3){
									  					
    				//Band 3 :
					TextBand3= CreateWindow("STATIC","COLOR OF BAND 3 : VIOLET",WS_BORDER|WS_CHILD|WS_VISIBLE,50,560,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand3 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 3 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==4){
					
					//Band 4 :
					TextBand4= CreateWindow("STATIC","COLOR OF BAND 4 : VIOLET",WS_BORDER|WS_CHILD|WS_VISIBLE,50,590,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand4 == NULL)
            		MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);				  					
    				//MessageBox(hwnd,"BAND 4 COLOR IS BLACK","MESAGE", MB_OK);
					
			}j++;
				}
				
    			break;
    			case 9:
    			{getdata(8);	
				i++; 
					if(j==1){
						  					
    				//Band 1 :
					TextBand1= CreateWindow("STATIC","COLOR OF BAND 1 : GRAY",WS_BORDER|WS_CHILD|WS_VISIBLE,50,500,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand1 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 1 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==2){
									  					
    				//Band 2 :
					TextBand2= CreateWindow("STATIC","COLOR OF BAND 2 : GRAY",WS_BORDER|WS_CHILD|WS_VISIBLE,50,530,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand2 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 2 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==3){
									  					
    				//Band 3 :
					TextBand3= CreateWindow("STATIC","COLOR OF BAND 3 : GRAY",WS_BORDER|WS_CHILD|WS_VISIBLE,50,560,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand3 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 3 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==4){
					
					//Band 4 :
					TextBand4= CreateWindow("STATIC","COLOR OF BAND 4 : GRAY",WS_BORDER|WS_CHILD|WS_VISIBLE,50,590,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand4 == NULL)
            		MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);				  					
    				//MessageBox(hwnd,"BAND 4 COLOR IS BLACK","MESAGE", MB_OK);
					
			}j++;
				}
				
    			break;
    			case 10:
    			{getdata(9);	
				i++; 
					if(j==1){
						  					
    				//Band 1 :
					TextBand1= CreateWindow("STATIC","COLOR OF BAND 1 : WHITE",WS_BORDER|WS_CHILD|WS_VISIBLE,50,500,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand1 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 1 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==2){
									  					
    				//Band 2 :
					TextBand2= CreateWindow("STATIC","COLOR OF BAND 2 : WHITE",WS_BORDER|WS_CHILD|WS_VISIBLE,50,530,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand2 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 2 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==3){
									  					
    				//Band 3 :
					TextBand3= CreateWindow("STATIC","COLOR OF BAND 3 : WHITE",WS_BORDER|WS_CHILD|WS_VISIBLE,50,560,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand3 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 3 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==4){
					
					//Band 4 :
					TextBand4= CreateWindow("STATIC","COLOR OF BAND 4 : WHITE",WS_BORDER|WS_CHILD|WS_VISIBLE,50,590,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand4 == NULL)
            		MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);				  					
    				//MessageBox(hwnd,"BAND 4 COLOR IS BLACK","MESAGE", MB_OK);
					
			}j++;
				}
				
    			break;
    			case 11:
    			{getdata(-1);	
				i++; 
					if(j==1){
						  					
    				//Band 1 :
					TextBand1= CreateWindow("STATIC","COLOR OF BAND 1 : GOLD",WS_BORDER|WS_CHILD|WS_VISIBLE,50,500,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand1 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 1 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==2){
									  					
    				//Band 2 :
					TextBand2= CreateWindow("STATIC","COLOR OF BAND 2 : GOLD",WS_BORDER|WS_CHILD|WS_VISIBLE,50,530,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand2 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 2 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==3){
									  					
    				//Band 3 :
					TextBand3= CreateWindow("STATIC","COLOR OF BAND 3 : GOLD",WS_BORDER|WS_CHILD|WS_VISIBLE,50,560,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand3 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 3 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==4){
					
					//Band 4 :
					TextBand4= CreateWindow("STATIC","COLOR OF BAND 4 : GOLD",WS_BORDER|WS_CHILD|WS_VISIBLE,50,590,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand4 == NULL)
            		MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);				  					
    				//MessageBox(hwnd,"BAND 4 COLOR IS BLACK","MESAGE", MB_OK);
					
			}j++;
				}
				
    			break;
    			case 12:
    			{ getdata(-2);	
				i++; 
					if(j==1){
						  					
    				//Band 1 :
					TextBand1= CreateWindow("STATIC","COLOR OF BAND 1 : SILVER",WS_BORDER|WS_CHILD|WS_VISIBLE,50,500,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand1 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 1 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==2){
									  					
    				//Band 2 :
					TextBand2= CreateWindow("STATIC","COLOR OF BAND 2 : SILVER",WS_BORDER|WS_CHILD|WS_VISIBLE,50,530,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand2 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 2 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==3){
									  					
    				//Band 3 :
					TextBand3= CreateWindow("STATIC","COLOR OF BAND 3 : SILVER",WS_BORDER|WS_CHILD|WS_VISIBLE,50,560,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand3 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 3 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==4){
					
					//Band 4 :
					TextBand4= CreateWindow("STATIC","COLOR OF BAND 4 : SILVER",WS_BORDER|WS_CHILD|WS_VISIBLE,50,590,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand4 == NULL)
            		MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);				  					
    				//MessageBox(hwnd,"BAND 4 COLOR IS BLACK","MESAGE", MB_OK);
					
			}j++;
				}
				
    			break;
    			case 13:
    			{	i++; 
					if(j==1){
						  					
    				//Band 1 :
					TextBand1= CreateWindow("STATIC","COLOR OF BAND 1 : NO COLOR",WS_BORDER|WS_CHILD|WS_VISIBLE,50,500,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand1 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 1 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==2){
									  					
    				//Band 2 :
					TextBand2= CreateWindow("STATIC","COLOR OF BAND 2 : NO COLOR",WS_BORDER|WS_CHILD|WS_VISIBLE,50,530,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand2 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 2 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==3){
									  					
    				//Band 3 :
					TextBand3= CreateWindow("STATIC","COLOR OF BAND 3 : NO COLOR",WS_BORDER|WS_CHILD|WS_VISIBLE,50,560,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand3 == NULL)
            			MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);
					//MessageBox(hwnd,"BAND 3 COLOR IS BLACK","MESAGE", MB_OK);
    			}
					if(j==4){
					
					//Band 4 :
					TextBand4= CreateWindow("STATIC","COLOR OF BAND 4 : NO COLOR",WS_BORDER|WS_CHILD|WS_VISIBLE,50,590,400,20,hwnd,NULL,NULL,NULL);
     	 			if(TextBand4 == NULL)
            		MessageBox(hwnd,"Could not create field.","Error", MB_OK | MB_ICONERROR);				  					
    				//MessageBox(hwnd,"BAND 4 COLOR IS BLACK","MESAGE", MB_OK);
					
			}j++;
				}
				
    			break;
    	}
    }
    else 
    MessageBox(hwnd,"YOU HAVE ALREADY SELECTED COLORS FOR ALL THE BANDS","MESAGE", MB_OK|MB_ICONERROR);
    }
	break;

  
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}
		
		/* All other messages (a lot of them) are processed using default procedures */
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

/* The 'main' function of Win32 GUI programs: this is where execution starts */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc; /* A properties struct of our window */
	HWND hwnd; /* A 'HANDLE', hence the H, or a pointer to our window */
	MSG msg; /* A temporary location for all messages */

	/* zero out the struct and set the stuff we want to modify */
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; /* This is where we will send messages to */
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	
	/* White, COLOR_WINDOW is just a #define for a system color, try Ctrl+Clicking it */
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); /* Load a standard icon */
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); /* use the name "A" to use the project icon */

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Caption",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, /* x */
		CW_USEDEFAULT, /* y */
		1400, /* width */
		700, /* height */
		NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}
		
	/*
		This is the heart of our program where all input is processed and 
		sent to WndProc. Note that GetMessage blocks code flow until it receives something, so
		this loop will not produce unreasonably high CPU usage
	*/
	while(GetMessage(&msg, NULL, 0, 0) > 0) { /* If no error is received... */
		TranslateMessage(&msg); /* Translate key codes to chars if present */
		DispatchMessage(&msg); /* Send it to WndProc */
	}
	return msg.wParam;
}

inline void loadimages()
{
	hLogoImage=(HBITMAP)LoadImageW(NULL,L"CHARUSAT.bmp",IMAGE_BITMAP,270,160,LR_LOADFROMFILE);
	hLogoImage1=(HBITMAP)LoadImageW(NULL,L"DEPSTAR.bmp",IMAGE_BITMAP,200,100,LR_LOADFROMFILE);
	hLogoImage2=(HBITMAP)LoadImageW(NULL,L"title1.bmp",IMAGE_BITMAP,350,50,LR_LOADFROMFILE);

	
}

void getdata(int num)
{
	int a[4],k;
	if(k<4)
	{
		a[k]=num;
		k++;
	}
	
}


