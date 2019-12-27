#include <iostream>
#include<fstream>
#include<time.h>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include<string.h>
#include<sstream>

using namespace std;

class matematik{               // matematik adýnda bir sýnýf tanýmlandý.
	
	
	public:void mattestler()             // matematik sýnýfýnda olan konularla ilgili testler  bagdastýrýldý.
	{
		  int matsorusecim; 
		
		ifstream dosyaOku("test/mat/mattestleri.txt");        // testler ile ilgili dosyalar cekildi.
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 
			 				
				cout << "Almak istediðiniz soru testini seçiniz>> ";      
				cin >> matsorusecim;
				
				
				if(matsorusecim==1)
				{
					int rasyonel_testi;
					
					system("cls");
					
					ifstream dosyaOku("test/mat/rasyoneltest.txt");    //rasyonel testi   dosyasý okundu.
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 
			 
			 char rscvp[10]={'a','b','c','d','e','a','b','c','d','e'};        //dizi içerisine cevaplar atandý.
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;                   //kullanýcýnýn cevaplarý alýndý.  
			cin>>cvp[t];
			
			if(cvp[t]==rscvp[t])
			{                                                            //kullanýcýnýn cevaplarý ile cevap anahtarý karsýlastýrýldý.	
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=rscvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	                              
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;                     //karsýlastýrýlan cevaplara gore  genel derece belirlendi.
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
	   }
cout<<"Cevap Anahtarý: 1)a  2)b  3)c  4)d  5)e  6)a 7)b 8)c  9)d  10)e"<<endl<<endl;


 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> rasyonel_testi;
			 
			 
			 
			  if(rasyonel_testi==1)
			 	{
			 		system("cls");
			 		mattestler();	
				}
			 
			 
			 else if(rasyonel_testi==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(rasyonel_testi!=1 || rasyonel_testi!=2)
			 {
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> rasyonel_testi;
						
						 if(rasyonel_testi==1)
			 	{
			 		system("cls");
			 		mattestler();	
				}
			 
			 
			 else if(rasyonel_testi==2)
				{
					system("cls");
					karar();
				}
				}
			 }
			 				 			 			 			 
				}

			
				
				if(matsorusecim==2)
				{
					int oranti_testi;
					
					system("cls");
					
					ifstream dosyaOku("test/mat/oranorantitest.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 			 char orcvp[10]={'d','d','b','a','d','c','d','b','d','d'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==orcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=orcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
			 
	if(yanlis<2){
	cout<<dogru<<" tane dogrunuz var"<<endl;
	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	cout<<"basarili"<<endl;	
	}		 
			 
     
     else if(yanlis>2 && yanlis<5){
     	
    cout<<dogru<<" tane dogrunuz var"<<endl;
	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	cout<<"gelistirilmeli!"<<endl;
     	
	 }

else
{
	
 cout<<dogru<<" tane dogrunuz var"<<endl;
 cout<<yanlis<<" tane yanlisiniz var"<<endl;
 cout<<"cok kotu"<<endl;	
	
}
			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> oranti_testi;
			 	

			 	 if(oranti_testi==1)
			 	{
			 		system("cls");
			 		mattestler();	
				}
			 
			 
			 else if(oranti_testi==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(oranti_testi!=1 || oranti_testi!=2)
			 {
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> oranti_testi;
						
						 if(oranti_testi==1)
			 	{
			 		system("cls");
			 		mattestler();	
				}
			 
			 
			 else if(oranti_testi==2)
				{
					system("cls");
					karar();
				}
				}
			 }
			 	
				}				
				

				
				if(matsorusecim==3)
				{
					int problem_testi;
					
					system("cls");
					
					ifstream dosyaOku("test/mat/problemtest.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 			 char prcvp[10]={'b','e','a','c','c','e','c','c','e','d'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==prcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=prcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
			 
	if(yanlis<2){
	cout<<dogru<<" tane dogrunuz var"<<endl;
	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	cout<<"basarili"<<endl;	
	}		 
			 
     
     else if(yanlis>2 && yanlis<5){
     	
    cout<<dogru<<" tane dogrunuz var"<<endl;
	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	cout<<"gelistirilmeli!"<<endl;
     	
	 }

else
{
	
 cout<<dogru<<" tane dogrunuz var"<<endl;
 cout<<yanlis<<" tane yanlisiniz var"<<endl;
 cout<<"cok kotu"<<endl;	
	
}
			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> problem_testi;



			 	 if(problem_testi==1)
			 	{
			 		system("cls");
			 		mattestler();	
				}
			 
			 
			 else if(problem_testi==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(problem_testi!=1 || problem_testi!=2)
			 {
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> problem_testi;
						
						 if(problem_testi==1)
			 	{
			 		system("cls");
			 		mattestler();	
				}
			 
			 
			 else if(problem_testi==2)
				{
					system("cls");
					karar();
				}
				}
			 }
			 	
				}

				
				if(matsorusecim==4)
				{
					int olasilik_testi;
					
					system("cls");
					
					ifstream dosyaOku("test/mat/olasiliktest.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 			 char olcvp[10]={'b','e','a','a','b','a','a','e','a','b'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==olcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=olcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
			 
	if(yanlis<2){
	cout<<dogru<<" tane dogrunuz var"<<endl;
	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	cout<<"basarili"<<endl;	
	}		 
			 
     
     else if(yanlis>2 && yanlis<5){
     	
    cout<<dogru<<" tane dogrunuz var"<<endl;
	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	cout<<"gelistirilmeli!"<<endl;
     	
	 }

else
{
	
 cout<<dogru<<" tane dogrunuz var"<<endl;
 cout<<yanlis<<" tane yanlisiniz var"<<endl;
 cout<<"cok kotu"<<endl;	
	
}
			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> olasilik_testi;
				


				if(olasilik_testi==1)
			 	{
			 		system("cls");
			 		mattestler();	
				}
			 
			 
			 else if(olasilik_testi==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(olasilik_testi!=1 || olasilik_testi!=2)
		{
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> olasilik_testi;
						
						 if(olasilik_testi==1)
			 	{
			 		system("cls");
			 		mattestler();	
				}
			 
			 
			 else if(olasilik_testi==2)
				{
					system("cls");
					karar();
				}
				
			}
			 
		}
			 	
			 	}
			 	

			 	if(matsorusecim==5){
			 		
		
		
				int mantik_testi;
					
					system("cls");
					
					ifstream dosyaOku("test/mat/mantiktest.txt");
			 	string satir = "";

				 if (dosyaOku.is_open()){

			 	while (getline(dosyaOku, satir)){
			 	  cout << satir << endl;
			 	 }

			  	 dosyaOku.close();
			 	}
			 			 char mntkcvp[10]={'b','d','d','c','d','d','a','e','e','a'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==mntkcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=mntkcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
			 
	if(yanlis<2){
	cout<<dogru<<" tane dogrunuz var"<<endl;
	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	cout<<"basarili"<<endl;	
	}		 
			 
     
     else if(yanlis>2 && yanlis<5){
     	
    cout<<dogru<<" tane dogrunuz var"<<endl;
	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	cout<<"gelistirilmeli!"<<endl;
     	
	 }

else
{
	
 cout<<dogru<<" tane dogrunuz var"<<endl;
 cout<<yanlis<<" tane yanlisiniz var"<<endl;
 cout<<"cok kotu"<<endl;	
	
}
			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> mantik_testi;
		
		

		
		
				if(mantik_testi==1)
			 	{
			 		system("cls");
			 		mattestler();	
				}
			 
			 
			 else if(mantik_testi==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(mantik_testi!=1 || mantik_testi!=2)
		{
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> mantik_testi;
						
						 if(mantik_testi==1)
			 	{
			 		system("cls");
			 		mattestler();	
				}
			 
			 
			 else if(mantik_testi==2)
				{
					system("cls");
					karar();
				}
				
			}
			 
		}
						
		
			}
   }
	
		public: void matkonular(){
		
				
					
					int matkonusecim;

			  ifstream dosyaOku("konu/mat/matkonulari.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }


				
				
				
				cout << "Almak istediðiniz konuyu seçiniz>> ";
				cin >> matkonusecim;
				
				
				if(matkonusecim==1)
				{
					int rasyonelsecenekler;
					
					system("cls");
					
					ifstream dosyaOku("konu/mat/rasyonelkonu.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 
			 
			 
			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> rasyonelsecenekler;
			 
			 
			 
			  if(rasyonelsecenekler==1)
			 	{
			 		system("cls");
			 		matkonular();	
				}
			 
			 
			 else if(rasyonelsecenekler==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(rasyonelsecenekler!=1 || rasyonelsecenekler!=2)
			 {
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> rasyonelsecenekler;
						
						 if(rasyonelsecenekler==1)
			 	{
			 		system("cls");
			 		matkonular();	
				}
			 
			 
			 else if(rasyonelsecenekler==2)
				{
					system("cls");
					karar();
				}
				}
			 }
			 				 			 			 			 
				}
		
				
				if(matkonusecim==2)
				{
					int orantisecenekler;
					
					system("cls");
					
					ifstream dosyaOku("konu/mat/oranorantikonu.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 
			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> orantisecenekler;
			 	
			 	
			 	
			 	
			 	
			 	
			 	 if(orantisecenekler==1)
			 	{
			 		system("cls");
			 		matkonular();	
				}
			 
			 
			 else if(orantisecenekler==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(orantisecenekler!=1 || orantisecenekler!=2)
			 {
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> orantisecenekler;
						
						 if(orantisecenekler==1)
			 	{
			 		system("cls");
			 		matkonular();	
				}
			 
			 
			 else if(orantisecenekler==2)
				{
					system("cls");
					karar();
				}
				}
			 }
			 	
				}
				if(matkonusecim==3)
				{
					int problemsecenek;
					
					system("cls");
					
					ifstream dosyaOku("konu/mat/problemlerkonu.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 
			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> problemsecenek;
		
			 	
			 	 if(problemsecenek==1)
			 	{
			 		system("cls");
			 		matkonular();	
				}
			 
			 
			 else if(problemsecenek==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(problemsecenek!=1 || problemsecenek!=2)
			 {
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> problemsecenek;
						
						 if(problemsecenek==1)
			 	{
			 		system("cls");
			 		matkonular();	
				}
			 
			 
			 else if(problemsecenek==2)
				{
					system("cls");
					karar();
				}
				}
			 }
			 	
				}

				if(matkonusecim==4)
				{
					int olasiliksecenek;
					
					system("cls");
					
					ifstream dosyaOku("konu/mat/olasilikkonu.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 
			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> olasiliksecenek;
			
				
				if(olasiliksecenek==1)
			 	{
			 		system("cls");
			 		matkonular();	
				}
			 
			 
			 else if(olasiliksecenek==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(olasiliksecenek!=1 || olasiliksecenek!=2)
		{
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> olasiliksecenek;
						
						 if(olasiliksecenek==1)
			 	{
			 		system("cls");
			 		matkonular();	
				}
			 
			 
			 else if(olasiliksecenek==2)
				{
					system("cls");
					karar();
				}
				
			}
			 
		}
			
			 	}
			 	

			 	if(matkonusecim==5){
			 		
		
		
				int mantiksecenek;
					
					system("cls");
					
					ifstream dosyaOku("konu/mat/mantikkonu.txt");
			 	string satir = "";

				 if (dosyaOku.is_open()){

			 	while (getline(dosyaOku, satir)){
			 	  cout << satir << endl;
			 	 }

			  	 dosyaOku.close();
			 	}
			 
			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> mantiksecenek;
		

		
				if(mantiksecenek==1)
			 	{
			 		system("cls");
			 		matkonular();	
				}
			 
			 
			 else if(mantiksecenek==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(mantiksecenek!=1 || mantiksecenek!=2)
		{
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> mantiksecenek;
						
						 if(mantiksecenek==1)
			 	{
			 		system("cls");
			 		matkonular();	
			}
			 
			 else if(mantiksecenek==2)
				{
					system("cls");
					karar();
				}
				
			}
			 
		}
					
			}
			
										
	}
			
	
	public: void karar(){   //Kullanýcý ihtiyacýna göre seçim yapýcak
		
		int secim;
			system("cls");
		cout<<"1)Konu Anlatýmý"<<endl;
		cout<<"2)Soru Çözünü"<<endl <<endl;
		cout<<"Lütfen seçiniz>>";
		cin>>secim;
		
		
		
		if(secim==1){
		system("cls");
		matkonular();
		
		}
		
		
		
	else	if(secim==2){
			system("cls");
			mattestler();
		}
		
	
	}
				


};

class fizik{                  // fizik adýnda bir sýnýf tanýmlandý.

        public: fiziktestler()
        {
        	   int fizsorusecim;        	
        	
                ifstream dosyaOku("test/fizik/fiziktestleri.txt");     // Fizik test dosyalarý not defterinden cekildi.
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }

                                cout << "Almak istediðiniz konuyu seçiniz>> ";
                                cin >> fizsorusecim;
								
                                if(fizsorusecim==1)
                                {
                                        int fizikbiliminegiristest;

                                        system("cls");

                                        ifstream dosyaOku("test/fizik/fizikbilimitest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char fbcvp[10]={'c','a','a','b','b','d','c','d','c','d'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==fbcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=fbcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }

cout<<"Cevap Anahtarý: 1)c  2)a  3)a  4)b  5)b  6)d 7)c 8)d  9)c  10)d"<<endl<<endl;


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> fizikbiliminegiristest;



                          if(fizikbiliminegiristest==1)
                                {
                                        system("cls");
                                        fiziktestler();   
                                }


                         else if(fizikbiliminegiristest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(fizikbiliminegiristest!=1 || fizikbiliminegiristest!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> fizikbiliminegiristest;

                                                 if(fizikbiliminegiristest==1)
                                {
                                        system("cls");
                                       fiziktestler();   
                                }


                         else if(fizikbiliminegiristest==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(fizsorusecim==2)
                                {
                                        int atomaltiparcaciktest;

                                        system("cls");

                                        ifstream dosyaOku("test/fizik/atomaltiparcaciktest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char atomcvp[10]={'d','c','e','b','e','b','d','d','a','b'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==atomcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=atomcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)d  2)c  3)e  4)b  5)e  6)b 7)d 8)d  9)a  10)b"<<endl<<endl;


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> atomaltiparcaciktest;






                                 if(atomaltiparcaciktest==1)
                                {
                                        system("cls");
                                        fiziktestler();   
                                }


                         else if(atomaltiparcaciktest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(atomaltiparcaciktest!=1 || atomaltiparcaciktest!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> atomaltiparcaciktest;

                                                 if(atomaltiparcaciktest==1)
                                {
                                        system("cls");
                                        fiziktestler();   
                                }


                         else if(atomaltiparcaciktest==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }



                                }

                                if(fizsorusecim==3)
                                {
                                        int madde_ve_ozellikleritest;

                                        system("cls");

                                        ifstream dosyaOku("test/fizik/maddeozellikleritest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char mocvp[10]={'d','c','e','e','b','c','a','c','d','c'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==mocvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=mocvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)d  2)c  3)e  4)e  5)b  6)c 7)a 8)c  9)d  10)c"<<endl<<endl;

                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> madde_ve_ozellikleritest;


                                 if(madde_ve_ozellikleritest==1)
                                {
                                        system("cls");
                                      fiziktestler();   
                                }


                         else if(madde_ve_ozellikleritest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(madde_ve_ozellikleritest!=1 || madde_ve_ozellikleritest!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> madde_ve_ozellikleritest;

                                                 if(madde_ve_ozellikleritest==1)
                                {
                                        system("cls");
                                        fiziktestler();   
                                }


                         else if(madde_ve_ozellikleritest==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }




                                if(fizsorusecim==4)
                                {
                                        int ozelgoreliliktest;

                                        system("cls");

                                        ifstream dosyaOku("test/fizik/ozelgoreliliktest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char ogcvp[10]={'e','b','b','c','d','b','d','e','d','e'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==ogcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=ogcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }

cout<<"Cevap Anahtarý: 1)e  2)b  3)b  4)c  5)d  6)b 7)d 8)e  9)d  10)e"<<endl<<endl;


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> ozelgoreliliktest;


                                if(ozelgoreliliktest==1)
                                {
                                        system("cls");
                                        fiziktestler();   
                                }


                         else if(ozelgoreliliktest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(ozelgoreliliktest!=1 || ozelgoreliliktest!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> ozelgoreliliktest;

                                                 if(ozelgoreliliktest==1)
                                {
                                        system("cls");
                                        fiziktestler();   
                                }


                         else if(ozelgoreliliktest==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }



                                }



                                if(fizsorusecim==5){



                                int isi_ve_sicakliktest;

                                        system("cls");

                                        ifstream dosyaOku("test/fizik/isivesicakliktest.txt");
                                string satir = "";

                                 if (dosyaOku.is_open()){

                                while (getline(dosyaOku, satir)){
                                  cout << satir << endl;
                                 }

                                 dosyaOku.close();
                                }
	 
			 char iscvp[10]={'b','e','a','c','b','e','d','b','a','c'};                   
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==iscvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=iscvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){              //Kullanýcýn cevaplarý ile cevap anaharý karþýlaþtýrýlýr.
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)b  2)e  3)a  4)c  5)b  6)e 7)d 8)b  9)a  10)c"<<endl<<endl;
                                  
								                   
                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> isi_ve_sicakliktest;



                                if(isi_ve_sicakliktest==1)
                                {
                                        system("cls");
                                        fiziktestler();   
                                }


                         else if(isi_ve_sicakliktest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(isi_ve_sicakliktest!=1 || isi_ve_sicakliktest!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> isi_ve_sicakliktest;

                                                 if(isi_ve_sicakliktest==1)
                                {
                                        system("cls");
                                        fiziktestler();   
                                }


                         else if(isi_ve_sicakliktest==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }

                        }

                        }
                public: void fizikkonular()
                {
				


                                        int fizkonusecim;

                          ifstream dosyaOku("konu/fizik/fizkonulari.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }





                                cout << "Almak istediðiniz konuyu seçiniz>> ";
                                cin >> fizkonusecim;
								


                                if(fizkonusecim==1)
                                {
                                        int fizikbiliminegiris;

                                        system("cls");

                                        ifstream dosyaOku("konu/fizik/fizikbilimikonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }




                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> fizikbiliminegiris;



                          if(fizikbiliminegiris==1)
                                {
                                        system("cls");
                                        fizikkonular();   
                                }


                         else if(fizikbiliminegiris==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(fizikbiliminegiris!=1 || fizikbiliminegiris!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> fizikbiliminegiris;

                                                 if(fizikbiliminegiris==1)
                                {
                                        system("cls");
                                       fizikkonular();   
                                }


                         else if(fizikbiliminegiris==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(fizkonusecim==2)
                                {
                                        int atomaltiparcacik;

                                        system("cls");

                                        ifstream dosyaOku("konu/fizik/atomaltiparcacikkonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> atomaltiparcacik;

                                 if(atomaltiparcacik==1)
                                {
                                        system("cls");
                                        fizikkonular();   
                                }


                         else if(atomaltiparcacik==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(atomaltiparcacik!=1 || atomaltiparcacik!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> atomaltiparcacik;

                                                 if(atomaltiparcacik==1)
                                {
                                        system("cls");
                                        fizikkonular();   
                                }


                         else if(atomaltiparcacik==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }



                                }


                                if(fizkonusecim==3)
                                {
                                        int madde_ve_ozellikleri;

                                        system("cls");

                                        ifstream dosyaOku("konu/fizik/maddeozelliklerikonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> madde_ve_ozellikleri;
                                
                                 if(madde_ve_ozellikleri==1)
                                {
                                        system("cls");
                                      fizikkonular();   
                                }


                         else if(madde_ve_ozellikleri==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(madde_ve_ozellikleri!=1 || madde_ve_ozellikleri!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> madde_ve_ozellikleri;

                                                 if(madde_ve_ozellikleri==1)
                                {
                                        system("cls");
                                        fizikkonular();   
                                }


                         else if(madde_ve_ozellikleri==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(fizkonusecim==4)
                                {
                                        int ozelgorelilik;

                                        system("cls");

                                        ifstream dosyaOku("konu/fizik/ozelgorelilikkonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> ozelgorelilik;
                                
                                if(ozelgorelilik==1)
                                {
                                        system("cls");
                                        fizikkonular();   
                                }


                         else if(ozelgorelilik==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(ozelgorelilik!=1 || ozelgorelilik!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> ozelgorelilik;

                                                 if(ozelgorelilik==1)
                                {
                                        system("cls");
                                        fizikkonular();   
                                }


                         else if(ozelgorelilik==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }
                                }

                                if(fizkonusecim==5){



                                int isi_ve_sicaklik;

                                        system("cls");

                                        ifstream dosyaOku("konu/fizik/isivesicaklikkonu.txt");
                                string satir = "";

                                 if (dosyaOku.is_open()){

                                while (getline(dosyaOku, satir)){
                                  cout << satir << endl;
                                 }

                                 dosyaOku.close();
                                }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> isi_ve_sicaklik;

                                if(isi_ve_sicaklik==1)
                                {
                                        system("cls");
                                        fizikkonular();   
                                }


                         else if(isi_ve_sicaklik==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(isi_ve_sicaklik!=1 || isi_ve_sicaklik!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> isi_ve_sicaklik;

                                                 if(isi_ve_sicaklik==1)
                                {
                                        system("cls");
                                        fizikkonular();   
                                }


                         else if(isi_ve_sicaklik==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }


                        }
                        }

        public: void karar(){   //Kullanýcý ihtiyacýna göre seçim yapýcak

                int secim;
                        system("cls");
                cout<<"1)Konu Anlatýmý"<<endl;
                cout<<"2)Soru Çözünü"<<endl <<endl;
                cout<<"Lütfen seçiniz>>";
                cin>>secim;



                if(secim==1){
                system("cls");
                fizikkonular();

                }



                if(secim==2){
                        system("cls");
                        fiziktestler();
                    
                }

        }

};

class kimya{                 //  kimya adýnda bir sýnýf tanýmlandý.

        public: kimyatestler()
        {
                  int kimyasorusecim;        	
        	
        	
                ifstream dosyaOku("test/kimya/kimyatestleri.txt");  //Kimya test dosyalarý cekildi.
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }

			 
				
				cout << "Almak istediðiniz soru testini seçiniz>> ";     // Kullanýcýnýn secime göre testler sýralanacak.
				cin >> kimyasorusecim;
				
				
				if(kimyasorusecim==1)
				{
					int karisimtest;
					
					system("cls");
					
					ifstream dosyaOku("test/kimya/karisimtest.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 	 
			 char krcvp[10]={'d','c','d','b','e','b','a','e','b','c'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==krcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=krcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)d  2)c  3)d  4)b  5)e  6)b 7)a 8)e  9)b  10)c"<<endl<<endl;
			 
			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> karisimtest;
			 
			 
			 
			  if(karisimtest==1)
			 	{
			 		system("cls");
			 		kimyatestler();	
				}
			 
			 
			 else if(karisimtest==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(karisimtest!=1 || karisimtest!=2)
			 {
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> karisimtest;
						
						 if(karisimtest==1)
			 	{
			 		system("cls");
			 		kimyatestler();	
				}
			 
			 
			 else if(karisimtest==2)
				{
					system("cls");
					karar();
				}
				}
			 }
			 				 			 			 			 
				}
			
				
				if(kimyasorusecim==2)
				{
					int hayatimizda_kimyatest;
					
					system("cls");
					
					ifstream dosyaOku("test/kimya/hayatimizdakimyatest.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 	 
			 char hkcvp[10]={'d','a','b','d','c','e','c','d','b','b'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==hkcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=hkcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){                //kullanýcýn cevaplarý ile cevap anahtarý karsýlaþtýrýlýr ve kullanýcnýn durumu özetlenir.
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)d  2)a  3)b  4)d  5)c  6)e 7)c 8)d  9)b  10)b"<<endl<<endl;
			 
			 	
				 cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> hayatimizda_kimyatest;


			 	 if(hayatimizda_kimyatest==1)
			 	{
			 		system("cls");
			 		kimyatestler();	
				}
			 
			 
			 else if(hayatimizda_kimyatest==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(hayatimizda_kimyatest!=1 || hayatimizda_kimyatest!=2)
			 {
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> hayatimizda_kimyatest;
						
						 if(hayatimizda_kimyatest==1)
			 	{
			 		system("cls");
			 		kimyatestler();	
				}
			 
			 
			 else if(hayatimizda_kimyatest==2)
				{
					system("cls");
					karar();
				}
				}
			 }
			 	
			 
			 
				}
			
				
				if(kimyasorusecim==3)
				{
					int asitbaztuz_test;
					
					system("cls");
					
					ifstream dosyaOku("test/kimya/asitbaztuztest.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 	 
			 char ascvp[10]={'c','b','e','e','d','c','c','e','a','d'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==ascvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=ascvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)c  2)b  3)e  4)e  5)d  6)c 7)c 8)e  9)a  10)d"<<endl<<endl;
			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> asitbaztuz_test;
			 	
			 	
			 	 if(asitbaztuz_test==1)
			 	{
			 		system("cls");
			 		kimyatestler();	
				}
			 
			 
			 else if(asitbaztuz_test==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(asitbaztuz_test!=1 || asitbaztuz_test!=2)
			 {
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> asitbaztuz_test;
						
						 if(asitbaztuz_test==1)
			 	{
			 		system("cls");
			 		kimyatestler();	
				}
			 
			 
			 else if(asitbaztuz_test==2)
				{
					system("cls");
					karar();
				}
				}
			 }
			 	
				}
				
				
				if(kimyasorusecim==4)
				{
					int atom_yapisitest;
					
					system("cls");
					
					ifstream dosyaOku("test/kimya/atomyapisitest.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 	 
			 char aycvp[10]={'d','a','e','d','e','a','e','d','e','e'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==aycvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=aycvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)d  2)a  3)e  4)d  5)e  6)a 7)e  8)d  9)e  10)e"<<endl<<endl;

			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> atom_yapisitest;
				
				if(atom_yapisitest==1)
			 	{
			 		system("cls");
			 		kimyatestler();	
				}
			 
			 
			 else if(atom_yapisitest==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(atom_yapisitest!=1 || atom_yapisitest!=2)
		{
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> atom_yapisitest;
						
						 if(atom_yapisitest==1)
			 	{
			 		system("cls");
			 		kimyatestler();	
				}
			 
			 
			 else if(atom_yapisitest==2)
				{
					system("cls");
					karar();
				}
				
			}
			 
		}
			 		
			 	}
			 	
			 	if(kimyasorusecim==5){
			 		
		
		
				int periyodikcetvel_test;
					
					system("cls");
					
					ifstream dosyaOku("test/kimya/periyodikcetveltest.txt");
			 	string satir = "";

				 if (dosyaOku.is_open()){

			 	while (getline(dosyaOku, satir)){
			 	  cout << satir << endl;
			 	 }

			  	 dosyaOku.close();
			 	}
			 	 
			 char pccvp[10]={'b','a','c','c','d','a','e','a','c','a'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==pccvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=pccvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)b  2)a  3)c  4)c  5)d  6)a 7)e  8)a  9)c  10)a"<<endl<<endl;
			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> periyodikcetvel_test;
		
				if(periyodikcetvel_test==1)
			 	{
			 		system("cls");
			 		kimyatestler();	
				}
			 
			 
			 else if(periyodikcetvel_test==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(periyodikcetvel_test!=1 || periyodikcetvel_test!=2)
		{
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> periyodikcetvel_test;
						
						 if(periyodikcetvel_test==1)
			 	{
			 		system("cls");
			 		kimyatestler();	
				}
			 
			 
			 else if(periyodikcetvel_test==2)
				{
					system("cls");
					karar();
				}
				
			}
			 
		}		
		
			}

       }


                public: void kimyakonular()
                {
				


                                        int kimyakonusecim;

                          ifstream dosyaOku("konu/kimya/kimyakonulari.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }

                                cout << "Almak istediðiniz konuyu seçiniz>> ";
                                cin >> kimyakonusecim;
								


                                if(kimyakonusecim==1)
                                {
                                        int karisim;

                                        system("cls");

                                        ifstream dosyaOku("konu/kimya/karisimkonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }

                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> karisim;



                          if(karisim==1)
                                {
                                        system("cls");
                                        kimyakonular();   
                                }


                         else if(karisim==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(karisim!=1 || karisim!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> karisim;

                                                 if(karisim==1)
                                {
                                        system("cls");
                                       kimyakonular();   
                                }


                         else if(karisim==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(kimyakonusecim==2)
                                {
                                        int hayatimizda_kimya;

                                        system("cls");

                                        ifstream dosyaOku("konu/kimya/hayatimizdakimyakonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> hayatimizda_kimya;

                                 if(hayatimizda_kimya==1)
                                {
                                        system("cls");
                                       kimyakonular();   
                                }


                         else if(hayatimizda_kimya==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(hayatimizda_kimya!=1 || hayatimizda_kimya!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> hayatimizda_kimya;

                                                 if(hayatimizda_kimya==1)
                                {
                                        system("cls");
                                        kimyakonular();   
                                }


                         else if(hayatimizda_kimya==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }



                                }

                                if(kimyakonusecim==3)
                                {
                                        int asit_baz_tuz;

                                        system("cls");

                                        ifstream dosyaOku("konu/kimya/asitbaztuzkonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> asit_baz_tuz;


                                 if(asit_baz_tuz==1)
                                {
                                        system("cls");
                                      kimyakonular();   
                                }


                         else if(asit_baz_tuz==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(asit_baz_tuz!=1 || asit_baz_tuz!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> asit_baz_tuz;

                                                 if(asit_baz_tuz==1)
                                {
                                        system("cls");
                                        kimyakonular();   
                                }


                         else if(asit_baz_tuz==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(kimyakonusecim==4)
                                {
                                        int atom_yapisi;

                                        system("cls");

                                        ifstream dosyaOku("konu/kimya/atomyapisikonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> atom_yapisi;
                                
                                if(atom_yapisi==1)
                                {
                                        system("cls");
                                       kimyakonular();   
                                }


                         else if(atom_yapisi==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(atom_yapisi!=1 || atom_yapisi!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> atom_yapisi;

                                                 if(atom_yapisi==1)
                                {
                                        system("cls");
										kimyakonular();   
                                }


                         else if(atom_yapisi==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }

                                }

                                if(kimyakonusecim==5){



                                int periyodik_cetvel ;

                                        system("cls");

                                        ifstream dosyaOku("konu/kimya/periyodikcetvelkonu.txt");
                                string satir = "";

                                 if (dosyaOku.is_open()){

                                while (getline(dosyaOku, satir)){
                                  cout << satir << endl;
                                 }

                                 dosyaOku.close();
                                }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> periyodik_cetvel;

                                if(periyodik_cetvel==1)
                                {
                                        system("cls");
                                        kimyakonular();   
                                }


                         else if(periyodik_cetvel==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(periyodik_cetvel!=1 || periyodik_cetvel!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> periyodik_cetvel;

                                                 if(periyodik_cetvel==1)
                                {
                                        system("cls");
                                        kimyakonular();   
                                }


                         else if(periyodik_cetvel==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }

                        }

                        }

        public: void karar(){   //Kullanýcý ihtiyacýna göre seçim yapýcak

                int secim;
                        system("cls");
                cout<<"1)Konu Anlatýmý"<<endl;
                cout<<"2)Soru Çözünü"<<endl <<endl;
                cout<<"Lütfen seçiniz>>";
                cin>>secim;



                if(secim==1){
                system("cls");
                kimyakonular();

                }



                if(secim==2){
                        system("cls");
                        kimyatestler();
                }
        }

};

class biyoloji{            // biyoloji adýnda bir sýnýf tanýmlandý.

      public: biyolojitestler()
          {
                  int biyolojisorusecim;        	
        	
        	
                ifstream dosyaOku("test/bio/biyolojitestleri.txt");   //Test dosyalarý not defterinden cekilir.
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
				
				cout << "Almak istediðiniz soru testini seçiniz>> ";
				cin >> biyolojisorusecim;
				
				
				if(biyolojisorusecim==1)
				{
					int ekolojitest;
					
					system("cls");
					
					ifstream dosyaOku("test/bio/ekolojitest.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 	 
			 char ekcvp[10]={'e','a','e','b','b','e','c','c','b','a'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==ekcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=ekcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)e  2)a  3)e  4)b  5)b  6)e  7)c  8)c  9)b  10)a"<<endl<<endl;
			 
			 
			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> ekolojitest;
			 
			 
			 
			  if(ekolojitest==1)
			 	{
			 		system("cls");
			 		biyolojitestler();	
				}
			 
			 
			 else if(ekolojitest==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(ekolojitest!=1 || ekolojitest!=2)
			 {
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> ekolojitest;
						
						 if(ekolojitest==1)
			 	{
			 		system("cls");
			 		biyolojitestler();	
				}
			 
			 
			 else if(ekolojitest==2)
				{
					system("cls");
					karar();
				}
				}
			 }
			 				 			 			 			 
				}
			
				
				if(biyolojisorusecim==2)
				{
					int hucretest;
					
					system("cls");
					
					ifstream dosyaOku("test/bio/hücretest.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 	 
			 char hccvp[10]={'b','d','c','e','d','c','a','e','e','c'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==hccvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=hccvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){                    //Kullanýcýn cevaplarý ile cevap anahtarý karþýlaþtýrýlýr ve kullanýcýn bilgisi ölcülür.
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)b  2)d  3)c  4)e  5)d  6)c  7)a  8)e  9)e  10)c"<<endl<<endl; 

			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> hucretest;
			 	
			 	
			 	
			 	 if(hucretest==1)
			 	{
			 		system("cls");
			 		biyolojitestler();	
				}
			 
			 
			 else if(hucretest==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(hucretest!=1 || hucretest!=2)
			 {
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> hucretest;
						
						 if(hucretest==1)
			 	{
			 		system("cls");
			 		biyolojitestler();	
				}
			 
			 
			 else if(hucretest==2)
				{
					system("cls");
					karar();
				}
				}
			 }
			 	
			 
			 
				}
				
				if(biyolojisorusecim==3)
				{
					int canlilarinsinifitest;
					
					system("cls");
					
					ifstream dosyaOku("test/bio/canlisinifitest.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 	 
			 char cscvp[10]={'b','c','d','a','b','d','c','e','a','c'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==cscvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=cscvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
        
       cout<<"Cevap Anahtarý: 1)b  2)c  3)d  4)a  5)b  6)d  7)c 8)e  9)a  10)c"<<endl<<endl;

			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> canlilarinsinifitest;
			 	
			 	
			 	 if(canlilarinsinifitest==1)
			 	{
			 		system("cls");
			 		biyolojitestler();	
				}
			 
			 
			 else if(canlilarinsinifitest==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(canlilarinsinifitest!=1 || canlilarinsinifitest!=2)
			 {
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> canlilarinsinifitest;
						
						 if(canlilarinsinifitest==1)
			 	{
			 		system("cls");
			 		biyolojitestler();	
				}
			 
			 
			 else if(canlilarinsinifitest==2)
				{
					system("cls");
					karar();
				}
				}
			 }
			 	
				}
			
				
				if(biyolojisorusecim==4)
				{
					int hucresel_solunumtest;
					
					system("cls");
					
					ifstream dosyaOku("test/bio/hücresolunumtest.txt");
			 string satir = "";

			 if (dosyaOku.is_open()){

			 while (getline(dosyaOku, satir)){
			   cout << satir << endl;
			  }

			   dosyaOku.close();
			 }
			 	 
			 char hscvp[10]={'d','b','e','b','a','d','e','c','d','a'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==hscvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=hscvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }

		 cout<<"Cevap Anahtarý: 1)d  2)b  3)e  4)b  5)a  6)d  7)e 8)c  9)d  10)a"<<endl<<endl;
		
			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> hucresel_solunumtest;
				
				
				
				if(hucresel_solunumtest==1)
			 	{
			 		system("cls");
			 		biyolojitestler();	
				}
			 
			 
			 else if(hucresel_solunumtest==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(hucresel_solunumtest!=1 || hucresel_solunumtest!=2)
		{
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> hucresel_solunumtest;
						
						 if(hucresel_solunumtest==1)
			 	{
			 		system("cls");
			 	    biyolojitestler();	
				}
			 
			 
			 else if(hucresel_solunumtest==2)
				{
					system("cls");
					karar();
				}
				
			}
			 
		}
			 	
			 	
			 	}
			 	
		
			 	if(biyolojisorusecim==5){
			 		
		
		
				int fotosentez_test;
					
					system("cls");
					
					ifstream dosyaOku("test/bio/fotosenteztest.txt");
			 	string satir = "";

				 if (dosyaOku.is_open()){

			 	while (getline(dosyaOku, satir)){
			 	  cout << satir << endl;
			 	 }

			  	 dosyaOku.close();
			 	}
			 	 
			 char fscvp[10]={'d','b','b','c','c','b','e','b','c','a'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==fscvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=fscvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
   	 cout<<"Cevap Anahtarý: 1)d  2)b  3)b  4)c  5)c  6)b  7)e 8)b  9)c  10)a"<<endl<<endl;   


			 
			 	cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
			 	cin >> fotosentez_test;
		
		

		
		
				if(fotosentez_test==1)
			 	{
			 		system("cls");
			 		biyolojitestler();	
				}
			 
			 
			 else if(fotosentez_test==2)
				{
					system("cls");
					karar();
				}
			 
			 
			 if(fotosentez_test!=1 || fotosentez_test!=2)
		{
			 		while(1)
				{
						cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
						cin >> fotosentez_test;
						
						 if(fotosentez_test==1)
			 	{
			 		system("cls");
			 		biyolojitestler();	
				}
			 
			 
			 else if(fotosentez_test==2)
				{
					system("cls");
					karar();
				}
				
			}
			 
		}
						
			}

   
   }
   

                public: void biyolojikonular()
                {
				


                                        int biyolojikonusecim;

                          ifstream dosyaOku("konu/bio/biyolojikonulari.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }

                                cout << "Almak istediðiniz konuyu seçiniz>> ";
                                cin >> biyolojikonusecim;
								


                                if(biyolojikonusecim==1)
                                {
                                        int ekosecenek;

                                        system("cls");

                                        ifstream dosyaOku("konu/bio/ekolojikonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }

                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> ekosecenek;



                          if(ekosecenek==1)
                                {
                                        system("cls");
                                        biyolojikonular();   
                                }


                         else if(ekosecenek==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(ekosecenek!=1 || ekosecenek!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> ekosecenek;

                                                 if(ekosecenek==1)
                                {
                                        system("cls");
                                        biyolojikonular();   
                                }


                         else if(ekosecenek==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(biyolojikonusecim==2)
                                {
                                        int hucre;

                                        system("cls");

                                        ifstream dosyaOku("konu/bio/hücrekonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> hucre;


                                 if(hucre==1)
                                {
                                        system("cls");
                                        biyolojikonular();   
                                }


                         else if(hucre==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(hucre!=1 || hucre!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> hucre;

                                                 if(hucre==1)
                                {
                                        system("cls");
                                        biyolojikonular();   
                                }


                         else if(hucre==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }
                                }

                                if(biyolojikonusecim==3)
                                {
                                        int canlilarin_siniflandirilmasi;

                                        system("cls");

                                        ifstream dosyaOku("konu/bio/canlisinifikonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý" << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> canlilarin_siniflandirilmasi;

                                 if(canlilarin_siniflandirilmasi==1)
                                {
                                        system("cls");
                                        biyolojikonular();   
                                }


                         else if(canlilarin_siniflandirilmasi==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                
                            
                         if(canlilarin_siniflandirilmasi!=1 || canlilarin_siniflandirilmasi!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> canlilarin_siniflandirilmasi;

                                                 if(canlilarin_siniflandirilmasi==1)
                                {
                                        system("cls");
                                        biyolojikonular();   
                                }


                         else if(canlilarin_siniflandirilmasi==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(biyolojikonusecim==4)
                                {
                                        int hucresel_solunum;

                                        system("cls");

                                        ifstream dosyaOku("konu/bio/hücresolunumkonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> hucresel_solunum;

                                if(hucresel_solunum==1)
                               {
                                        system("cls");
                                        biyolojikonular();   
                                }


                         else if(hucresel_solunum==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(hucresel_solunum!=1 || hucresel_solunum!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> hucresel_solunum;

                                                 if(hucresel_solunum==1)
                                {
                                        system("cls");
                                        biyolojikonular();   
                                }


                         else if(hucresel_solunum==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }

                                }

                                if(biyolojikonusecim==5){



                                int fotosentez;

                                        system("cls");

                                        ifstream dosyaOku("konu/bio/fotosentezkonu.txt");
                                string satir = "";

                                 if (dosyaOku.is_open()){

                                while (getline(dosyaOku, satir)){
                                  cout << satir << endl;
                                 }

                                 dosyaOku.close();
                                }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> fotosentez;

                                if(fotosentez==1)
                                {
                                        system("cls");
                                        biyolojikonular();   
                                }


                         else if(fotosentez==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(fotosentez!=1 || fotosentez!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> fotosentez;

                                                 if(fotosentez==1)
                                {
                                        system("cls");
                                        biyolojikonular();   
                                }


                         else if(fotosentez==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }

                        }



                        }
        public: void karar(){     //Kullanýcý ihtiyacýna göre seçim yapýcak


                int secim;
                        system("cls");
                cout<<"1)Konu Anlatýmý"<<endl;
                cout<<"2)Soru Çözünü"<<endl <<endl;
                cout<<"Lütfen seçiniz>>";
                cin>>secim;



                if(secim==1){
                system("cls");
                biyolojikonular();

                }



                if(secim==2){
                        system("cls");
                        biyolojitestler();
                }


        }

};

class turkce{              // türkçe adýnda bir sýnýf tanýmlan};

        public: turkcetestler()
        {
        	      int turkcesorusecim;
        	
                ifstream dosyaOku("Test/Türkçe/turkcetestleri.txt");      //Test dosyalarý not defterinden cekilir.
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
                         
                                cout << "Almak istediðiniz konuyu seçiniz>> ";
                                cin >> turkcesorusecim;
								


                                if(turkcesorusecim==1)
                                {
                                        int anlatim_bozuklugutest;

                                        system("cls");

                                        ifstream dosyaOku("Test/Türkçe/anlatimbozuktest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char abcvp[10]={'a','b','c','d','a','e','b','a','c','c'}; 

			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==abcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=abcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){       //Kullanýcýn cevaplarý ile cevap anahtarý karþýlaþtýrýlýr ve kullanýcýn bilgisi ölcülür.
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)a  2)b  3)c  4)d  5)a  6)e  7)b  8)a  9)c  10)c"<<endl<<endl;



                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> anlatim_bozuklugutest;



                          if(anlatim_bozuklugutest==1)
                                {
                                        system("cls");
                                        turkcetestler();   
                                }


                         else if(anlatim_bozuklugutest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(anlatim_bozuklugutest!=1 || anlatim_bozuklugutest!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> anlatim_bozuklugutest;

                                                 if(anlatim_bozuklugutest==1)
                                {
                                        system("cls");
                                        turkcetestler();   
                                }


                         else if(anlatim_bozuklugutest==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }



                                if(turkcesorusecim==2)
                                {
                                        int cumlenin_ogeleritest;

                                        system("cls");

                                        ifstream dosyaOku("Test/Türkçe/cumleninogeleritest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char cocvp[10]={'a','b','d','a','e','b','c','b','d','b'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==cocvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=cocvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }     
    cout<<"Cevap Anahtarý: 1)a  2)b  3)d  4)a  5)e  6)b  7)c  8)b  9)d  10)b"<<endl<<endl;    


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> cumlenin_ogeleritest;






                                 if(cumlenin_ogeleritest==1)
                                {
                                        system("cls");
                                        turkcetestler();   
                                }


                         else if(cumlenin_ogeleritest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(cumlenin_ogeleritest!=1 || cumlenin_ogeleritest!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> cumlenin_ogeleritest;

                                                 if(cumlenin_ogeleritest==1)
                                {
                                        system("cls");
                                        turkcetestler();   
                                }


                         else if(cumlenin_ogeleritest==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }



                                }

                                if(turkcesorusecim==3)
                                {
                                        int sifatlar_test;

                                        system("cls");

                                        ifstream dosyaOku("Test/Türkçe/sifattest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char sifatcvp[10]={'c','d','a','b','c','c','d','b','a','b'}; 

			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==sifatcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=sifatcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
    cout<<"Cevap Anahtarý: 1)c  2)d  3)a  4)b  5)c  6)c  7)d  8)b  9)a  10)b"<<endl<<endl; 


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> sifatlar_test;



                                 if(sifatlar_test==1)
                                {
                                        system("cls");
                                        turkcetestler();   
                                }


                         else if(sifatlar_test==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(sifatlar_test!=1 || sifatlar_test!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> sifatlar_test;

                                                 if(sifatlar_test==1)
                                {
                                        system("cls");
                                        turkcetestler();   
                                }


                         else if(sifatlar_test==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }




                                if(turkcesorusecim==4)
                                {
                                        int adlar_test;

                                        system("cls");

                                        ifstream dosyaOku("Test/Türkçe/adlartest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }

			 char adcvp[10]={'d','a','e','e','a','d','e','a','c','d'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==adcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=adcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }

    cout<<"Cevap Anahtarý: 1)d  2)a  3)e  4)e  5)a  6)d  7)e  8)a  9)c  10)d"<<endl<<endl; 	
    
                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> adlar_test;


                                if(adlar_test==1)
                                {
                                        system("cls");
                                        turkcetestler();   
                                }


                         else if(adlar_test==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(adlar_test!=1 || adlar_test!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> adlar_test;

                                                 if(adlar_test==1)
                                {
                                        system("cls");
                                      turkcetestler();   
                                }


                         else if(adlar_test==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }

                                }


                                if(turkcesorusecim==5){



                                int sozcukte_anlamtest;

                                        system("cls");

                                        ifstream dosyaOku("Test/Türkçe/sozcukteanlamtest.txt");
                                string satir = "";

                                 if (dosyaOku.is_open()){

                                while (getline(dosyaOku, satir)){
                                  cout << satir << endl;
                                 }

                                 dosyaOku.close();
                                }

	 
			 char sacvp[10]={'a','b','e','b','e','a','e','b','e','b'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==sacvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=sacvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
        
   cout<<"Cevap Anahtarý: 1)a  2)b  3)e  4)b  5)e  6)a  7)e  8)b  9)e  10)b"<<endl<<endl;      
        
                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> sozcukte_anlamtest;


                                if(sozcukte_anlamtest==1)
                                {
                                        system("cls");
                                       turkcetestler();   
                                }


                         else if(sozcukte_anlamtest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(sozcukte_anlamtest!=1 || sozcukte_anlamtest!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> sozcukte_anlamtest;

                                                 if(sozcukte_anlamtest==1)
                                {
                                        system("cls");
                                       turkcetestler();   
                                }


                         else if(sozcukte_anlamtest==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }




                        }


        }

                public: void turkcekonular()          //Kullanýcý istediði konuyu burdan secebiliyor.
                {
				


                                        int turkcekonusecim;

                          ifstream dosyaOku("Konu/Türkçe/turkcekonulari.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }





                                cout << "Almak istediðiniz konuyu seçiniz>> ";
                                cin >> turkcekonusecim;
								


                                if(turkcekonusecim==1)
                                {
                                        int anlatim_bozuklugu;

                                        system("cls");

                                        ifstream dosyaOku("Konu/Türkçe/anlatimbozukkonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }

                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> anlatim_bozuklugu;



                          if(anlatim_bozuklugu==1)
                                {
                                        system("cls");
                                        turkcekonular();   
                                }


                         else if(anlatim_bozuklugu==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(anlatim_bozuklugu!=1 || anlatim_bozuklugu!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> anlatim_bozuklugu;

                                                 if(anlatim_bozuklugu==1)
                                {
                                        system("cls");
                                        turkcekonular();   
                                }


                         else if(anlatim_bozuklugu==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }
                                
                                if(turkcekonusecim==2)
                                {
                                        int cumlenin_ogeleri;

                                        system("cls");

                                        ifstream dosyaOku("Konu/Türkçe/cümleninogelerikonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> cumlenin_ogeleri;

                                 if(cumlenin_ogeleri==1)
                                {
                                        system("cls");
                                        turkcekonular();   
                                }


                         else if(cumlenin_ogeleri==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(cumlenin_ogeleri!=1 || cumlenin_ogeleri!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> cumlenin_ogeleri;

                                                 if(cumlenin_ogeleri==1)
                                {
                                        system("cls");
                                        turkcekonular();   
                                }


                         else if(cumlenin_ogeleri==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(turkcekonusecim==3)
                                {
                                        int sifatlar;

                                        system("cls");

                                        ifstream dosyaOku("Konu/Türkçe/sifatlarkonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> sifatlar;

                                 if(sifatlar==1)
                                {
                                        system("cls");
                                        turkcekonular();   
                                }


                         else if(sifatlar==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(sifatlar!=1 || sifatlar!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> sifatlar;

                                                 if(sifatlar==1)
                                {
                                        system("cls");
                                        turkcekonular();   
                                }


                         else if(sifatlar==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(turkcekonusecim==4)
                                {
                                        int adlar;

                                        system("cls");

                                        ifstream dosyaOku("Konu/Türkçe/adlarkonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> adlar;

                                if(adlar==1)
                                {
                                        system("cls");
                                        turkcekonular();   
                                }


                         else if(adlar==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(adlar!=1 || adlar!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> adlar;

                                                 if(adlar==1)
                                {
                                        system("cls");
                                      turkcekonular();   
                                }


                         else if(adlar==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }

                                }

                                if(turkcekonusecim==5){



                                int sozcukte_anlam;

                                        system("cls");

                                        ifstream dosyaOku("Konu/Türkçe/sozcukteanlamkonu.txt");
                                string satir = "";

                                 if (dosyaOku.is_open()){

                                while (getline(dosyaOku, satir)){
                                  cout << satir << endl;
                                 }

                                 dosyaOku.close();
                                }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl <<  "Gitmek istediðiniz yeri seçin>> ";
                                cin >> sozcukte_anlam;

                                if(sozcukte_anlam==1)
                                {
                                        system("cls");
                                       turkcekonular();   
                                }


                         else if(sozcukte_anlam==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(sozcukte_anlam!=1 || sozcukte_anlam!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> sozcukte_anlam;

                                                 if(sozcukte_anlam==1)
                                {
                                        system("cls");
                                       turkcekonular();   
                                }


                         else if(sozcukte_anlam==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        
						}

                }
                        }

                        }


        public: void karar(){    //Kullanýcý ihtiyacýna göre seçim yapýcak

                int secim;
                        system("cls");
                cout<<"1)Konu Anlatýmý"<<endl;
                cout<<"2)Soru Çözünü"<<endl <<endl;
                cout<<"Lütfen seçiniz>>";
                cin>>secim;
                if(secim==1){
                system("cls");
                turkcekonular();

                }
                if(secim==2){
                        system("cls");
                        turkcetestler();
            }

        }

};
                  
class cografya{



        public: cografyatestler(){
		
        
                   int cografyasorusecim;        	 
        	
                ifstream dosyaOku("Test/Coðrafya/cografyatestleri.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }

                                cout << "Almak istediðiniz konuyu seçiniz>> ";
                                cin >> cografyasorusecim;
								


                                if(cografyasorusecim==1)
                                {
                                        int iklim_bilgisitest;

                                        system("cls");

                                        ifstream dosyaOku("Test/Coðrafya/iklimbilgisitest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char ibcvp[10]={'c','a','d','e','e','b','a','b','c','c'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==ibcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=ibcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }

    cout<<"Cevap Anahtarý: 1)c  2)a  3)d  4)e  5)e  6)b 7)a 8)b  9)c  10)c"<<endl<<endl; 



                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> iklim_bilgisitest;



                          if(iklim_bilgisitest==1)
                                {
                                        system("cls");
                                        cografyatestler();   
                                }


                         else if(iklim_bilgisitest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(iklim_bilgisitest!=1 || iklim_bilgisitest!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> iklim_bilgisitest;

                                                 if(iklim_bilgisitest==1)
                                {
                                        system("cls");
                                        cografyatestler();   
                                }


                         else if(iklim_bilgisitest==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }





                                if(cografyasorusecim==2)
                                {
                                        int insan_ve_cevre_test;

                                        system("cls");

                                        ifstream dosyaOku("Test/Coðrafya/insanvecevretest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char iccvp[10]={'d','d','b','a','c','c','b','a','c','a'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==iccvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=iccvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
         
   cout<<"Cevap Anahtarý: 1)d  2)d  3)b  4)a  5)c  6)c 7)b 8)a  9)c  10)a"<<endl<<endl;
       

                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> insan_ve_cevre_test;




                                 if(insan_ve_cevre_test==1)
                                {
                                        system("cls");
                                        cografyatestler();   
                                }


                         else if(insan_ve_cevre_test==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(insan_ve_cevre_test!=1 || insan_ve_cevre_test!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> insan_ve_cevre_test;

                                                 if(insan_ve_cevre_test==1)
                                {
                                        system("cls");
                                        cografyatestler();   
                                }


                         else if(insan_ve_cevre_test==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }



                                }



                                if(cografyasorusecim==3)
                                {
                                        int cevre_ve_toplumtest;

                                        system("cls");

                                        ifstream dosyaOku("Test/Coðrafya/cevretoplumtest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char ctcvp[10]={'c','b','d','c','d','c','c','a','a','e'};  
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==ctcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=ctcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)c  2)b  3)d  4)c  5)d  6)c 7)c 8)a  9)a  10)e"<<endl<<endl;


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> cevre_ve_toplumtest;




                                 if(cevre_ve_toplumtest==1)
                                {
                                        system("cls");
                                        cografyatestler();   
                                }


                         else if(cevre_ve_toplumtest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(cevre_ve_toplumtest!=1 || cevre_ve_toplumtest!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> cevre_ve_toplumtest;

                                                 if(cevre_ve_toplumtest==1)
                                {
                                        system("cls");
                                        cografyatestler();   
                                }


                         else if(cevre_ve_toplumtest==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }





                                if(cografyasorusecim==4)
                                {
                                        int bolgeler_ve_ulkelertest;

                                        system("cls");

                                        ifstream dosyaOku("Test/Coðrafya/ulkelervebolgelertest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char bucvp[10]={'e','d','e','d','e','a','b','a','b','b'};   
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==bucvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=bucvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)e  2)d  3)e  4)d  5)e  6)a 7)b 8)a  9)b  10)b"<<endl<<endl;


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> bolgeler_ve_ulkelertest;




                                if(bolgeler_ve_ulkelertest==1)
                                {
                                        system("cls");
                                        cografyatestler();   
                                }


                         else if(bolgeler_ve_ulkelertest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(bolgeler_ve_ulkelertest!=1 || bolgeler_ve_ulkelertest!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> bolgeler_ve_ulkelertest;

                                                 if(bolgeler_ve_ulkelertest==1)
                                {
                                        system("cls");
                                      cografyatestler();   
                                }


                         else if(bolgeler_ve_ulkelertest==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }



                                }





                                if(cografyasorusecim==5){



                                int beserisistem_test;

                                        system("cls");

                                        ifstream dosyaOku("Test/Coðrafya/beserisistemtest.txt");
                                string satir = "";

                                 if (dosyaOku.is_open()){

                                while (getline(dosyaOku, satir)){
                                  cout << satir << endl;
                                 }

                                 dosyaOku.close();
                                }
	 
			 char bscvp[10]={'e','d','b','a','b','a','c','c','c','b'};       
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==bscvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=bscvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)e  2)d  3)b  4)a  5)b  6)a 7)c 8)c  9)c  10)b"<<endl<<endl;  


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> beserisistem_test;



                                if(beserisistem_test==1)
                                {
                                        system("cls");
                                       cografyatestler();   
                                }


                         else if(beserisistem_test==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(beserisistem_test!=1 || beserisistem_test!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> beserisistem_test;

                                                 if(beserisistem_test==1)
                                {
                                        system("cls");
                                       cografyatestler();   
                                }


                         else if(beserisistem_test==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }




                        }
        }







                public: void cografyakonular()
                {
				


                                        int cografyakonusecim;

                          ifstream dosyaOku("Konu/Coðrafya/cografyakonulari.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }





                                cout << "Almak istediðiniz konuyu seçiniz>> ";
                                cin >> cografyakonusecim;
								


                                if(cografyakonusecim==1)
                                {
                                        int iklim_bilgisi;

                                        system("cls");

                                        ifstream dosyaOku("Konu/Coðrafya/iklimbilgisikonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }




                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> iklim_bilgisi;



                          if(iklim_bilgisi==1)
                                {
                                        system("cls");
                                        cografyakonular();   
                                }


                         else if(iklim_bilgisi==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(iklim_bilgisi!=1 || iklim_bilgisi!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> iklim_bilgisi;

                                                 if(iklim_bilgisi==1)
                                {
                                        system("cls");
                                        cografyakonular();   
                                }


                         else if(iklim_bilgisi==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }








                                if(cografyakonusecim==2)
                                {
                                        int insan_ve_cevre;

                                        system("cls");

                                        ifstream dosyaOku("Konu/Coðrafya/insancevrekonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> insan_ve_cevre;






                                 if(insan_ve_cevre==1)
                                {
                                        system("cls");
                                        cografyakonular();   
                                }


                         else if(insan_ve_cevre==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(insan_ve_cevre!=1 || insan_ve_cevre!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> insan_ve_cevre;

                                                 if(insan_ve_cevre==1)
                                {
                                        system("cls");
                                        cografyakonular();   
                                }


                         else if(insan_ve_cevre==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }



                                }









                                if(cografyakonusecim==3)
                                {
                                        int cevre_ve_toplum;

                                        system("cls");

                                        ifstream dosyaOku("Konu/Coðrafya/cevretoplumkonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> cevre_ve_toplum;







                                 if(cevre_ve_toplum==1)
                                {
                                        system("cls");
                                        cografyakonular();   
                                }


                         else if(cevre_ve_toplum==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(cevre_ve_toplum!=1 || cevre_ve_toplum!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> cevre_ve_toplum;

                                                 if(cevre_ve_toplum==1)
                                {
                                        system("cls");
                                        cografyakonular();   
                                }


                         else if(cevre_ve_toplum==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }









                                if(cografyakonusecim==4)
                                {
                                        int bolgeler_ve_ulkeler;

                                        system("cls");

                                        ifstream dosyaOku("Konu/Coðrafya/bölgelerülkelerkonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> bolgeler_ve_ulkeler;







                                if(bolgeler_ve_ulkeler==1)
                                {
                                        system("cls");
                                        cografyakonular();   
                                }


                         else if(bolgeler_ve_ulkeler==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(bolgeler_ve_ulkeler!=1 || bolgeler_ve_ulkeler!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> bolgeler_ve_ulkeler;

                                                 if(bolgeler_ve_ulkeler==1)
                                {
                                        system("cls");
                                      cografyakonular();   
                                }


                         else if(bolgeler_ve_ulkeler==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }



                                }










                                if(cografyakonusecim==5){



                                int beserisistem;

                                        system("cls");

                                        ifstream dosyaOku("Konu/Coðrafya/beserisistemkonu.txt");
                                string satir = "";

                                 if (dosyaOku.is_open()){

                                while (getline(dosyaOku, satir)){
                                  cout << satir << endl;
                                 }

                                 dosyaOku.close();
                                }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> beserisistem;








                                if(beserisistem==1)
                                {
                                        system("cls");
                                       cografyakonular();   
                                }


                         else if(beserisistem==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(beserisistem!=1 || beserisistem!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> beserisistem;

                                                 if(beserisistem==1)
                                {
                                        system("cls");
                                       cografyakonular();   
                                }


                         else if(beserisistem==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }




                        }



                        }



        public: void karar(){

                int secim;
                        system("cls");
                cout<<"1)Konu Anlatýmý"<<endl;
                cout<<"2)Soru Çözünü"<<endl <<endl;
                cout<<"Lütfen seçiniz>>";
                cin>>secim;



                if(secim==1){
                system("cls");
                cografyakonular();

                }



                if(secim==2){
                        system("cls");
                        cografyatestler();
                }


        }


};

class edebiyat{                    //edebiyat dersi sýnýfý olusturuldu...
        
		public: edebiyattestler()                //edebiyat dersi testleri...
        {
        	        int edebiyatsorusecim;
        	
                ifstream dosyaOku("test/edebiyat/edebiyattestleri.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
                                cout << "Almak istediðiniz konuyu seçiniz>> ";
                                cin >> edebiyatsorusecim;
								


                                if(edebiyatsorusecim==1)
                                {
                                        int halkedebiyati_test;

                                        system("cls");

                                        ifstream dosyaOku("test/edebiyat/halkedebiyatitest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char hecvp[10]={'b','c','e','b','b','a','e','b','d','a'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==hecvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=hecvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)b  2)c  3)e  4)b  5)b  6)a  7)e  8)b  9)d  10)a"<<endl<<endl;


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> halkedebiyati_test;

                          if(halkedebiyati_test==1)
                                {
                                        system("cls");
                                        edebiyattestler();   
                                }


                         else if(halkedebiyati_test==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(halkedebiyati_test!=1 || halkedebiyati_test!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> halkedebiyati_test;

                                                 if(halkedebiyati_test==1)
                                {
                                        system("cls");
                                        edebiyattestler();   
                                }


                         else if(halkedebiyati_test==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }


                                if(edebiyatsorusecim==2)
                                {
                                        int milliedebiyat_test;

                                        system("cls");

                                        ifstream dosyaOku("test/edebiyat/milliedebiyattest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char mecvp[10]={'e','e','c','c','a','d','c','e','c','e'}; 
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==mecvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=mecvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)e  2)e  3)c  4)c  5)a 6)d  7)c  8)e 9)c  10)e"<<endl<<endl;   

                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> milliedebiyat_test;



                                 if(milliedebiyat_test==1)
                                {
                                        system("cls");
                                        edebiyattestler();   
                                }


                         else if(milliedebiyat_test==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(milliedebiyat_test!=1 || milliedebiyat_test!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> milliedebiyat_test;

                                                 if(milliedebiyat_test==1)
                                {
                                        system("cls");
                                        edebiyattestler();   
                                }


                         else if(milliedebiyat_test==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(edebiyatsorusecim==3)
                                {
                                        int edebiakimlar_test;

                                        system("cls");

                                        ifstream dosyaOku("test/edebiyat/edebiakimlartest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char eacvp[10]={'b','a','d','b','e','d','c','c','d','b'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==eacvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=eacvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        } 
cout<<"Cevap Anahtarý: 1)b  2)a  3)d  4)b  5)e  6)d  7)c  8)c  9)d  10)b"<<endl<<endl;

                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> edebiakimlar_test;




                                 if(edebiakimlar_test==1)
                                {
                                        system("cls");
                                        edebiyattestler();   
                                }


                         else if(edebiakimlar_test==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(edebiakimlar_test!=1 || edebiakimlar_test!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> edebiakimlar_test;

                                                 if(edebiakimlar_test==1)
                                {
                                        system("cls");
                                        edebiyattestler();   
                                }


                         else if(edebiakimlar_test==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }


                                if(edebiyatsorusecim==4)
                                {
                                        int tanzimatedebiyati_test;

                                        system("cls");

                                        ifstream dosyaOku("test/edebiyat/tanzimatedebiyatitest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char tecvp[10]={'b','b','e','c','e','e','e','b','d','c'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==tecvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=tecvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)b  2)b  3)e  4)c  5)e  6)e  7)e  8)b  9)d  10)c"<<endl<<endl;

                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> tanzimatedebiyati_test;




                                if(tanzimatedebiyati_test==1)
                                {
                                        system("cls");
                                        edebiyattestler();   
                                }


                         else if(tanzimatedebiyati_test==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(tanzimatedebiyati_test!=1 || tanzimatedebiyati_test!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> tanzimatedebiyati_test;

                                                 if(tanzimatedebiyati_test==1)
                                {
                                        system("cls");
                                      edebiyattestler();   
                                }


                         else if(tanzimatedebiyati_test==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }

                                }


                                if(edebiyatsorusecim==5){



                                int divanedebiyati_test;

                                        system("cls");

                                        ifstream dosyaOku("test/edebiyat/divanedebiyatitest.txt");
                                string satir = "";

                                 if (dosyaOku.is_open()){

                                while (getline(dosyaOku, satir)){
                                  cout << satir << endl;
                                 }

                                 dosyaOku.close();
                                }
	 
			 char decvp[10]={'a','b','e','b','b','a','a','c','a','d'}; 
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==decvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=decvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        } 
cout<<"Cevap Anahtarý: 1)a  2)b  3)e  4)b  5)b  6)a  7)a  8)c  9)a  10)d"<<endl<<endl;

                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> divanedebiyati_test;



                                if(divanedebiyati_test==1)
                                {
                                        system("cls");
                                       edebiyattestler();   
                                }


                         else if(divanedebiyati_test==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(divanedebiyati_test!=1 || divanedebiyati_test!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> divanedebiyati_test;

                                                 if(divanedebiyati_test==1)
                                {
                                        system("cls");
                                       edebiyattestler();   
                                }


                         else if(divanedebiyati_test==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }


                        }

        }



                public: void edebiyatkonular()     //edebiyat dersi konularý...
                {
				


                                        int edebiyatkonusecim;

                          ifstream dosyaOku("konu/edebiyat/edebiyatkonulari.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "Almak istediðiniz konuyu seçiniz>> ";
                                cin >> edebiyatkonusecim;
								


                                if(edebiyatkonusecim==1)
                                {
                                        int halkedebiyati;

                                        system("cls");

                                        ifstream dosyaOku("konu/edebiyat/halkedebiyatikonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> halkedebiyati;



                          if(halkedebiyati==1)
                                {
                                        system("cls");
                                        edebiyatkonular();   
                                }


                         else if(halkedebiyati==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(halkedebiyati!=1 || halkedebiyati!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> halkedebiyati;

                                                 if(halkedebiyati==1)
                                {
                                        system("cls");
                                        edebiyatkonular();   
                                }


                         else if(halkedebiyati==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }


                                if(edebiyatkonusecim==2)
                                {
                                        int milliedebiyat;

                                        system("cls");

                                        ifstream dosyaOku("konu/edebiyat/milliedebiyatkonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }

                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> milliedebiyat;


                                 if(milliedebiyat==1)
                                {
                                        system("cls");
                                        edebiyatkonular();   
                                }


                         else if(milliedebiyat==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(milliedebiyat!=1 || milliedebiyat!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> milliedebiyat;

                                                 if(milliedebiyat==1)
                                {
                                        system("cls");
                                        edebiyatkonular();   
                                }


                         else if(milliedebiyat==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(edebiyatkonusecim==3)
                                {
                                        int edebiakimlar;

                                        system("cls");

                                        ifstream dosyaOku("konu/edebiyat/edebiakimlarkonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> edebiakimlar;

                                 if(edebiakimlar==1)
                                {
                                        system("cls");
                                        edebiyatkonular();   
                                }


                         else if(edebiakimlar==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(edebiakimlar!=1 || edebiakimlar!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> edebiakimlar;

                                                 if(edebiakimlar==1)
                                {
                                        system("cls");
                                        edebiyatkonular();   
                                }


                         else if(edebiakimlar==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(edebiyatkonusecim==4)
                                {
                                        int tanzimatedebiyati;

                                        system("cls");

                                        ifstream dosyaOku("konu/edebiyat/tanzimatedebiyatikonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> tanzimatedebiyati;


                                if(tanzimatedebiyati==1)
                                {
                                        system("cls");
                                        edebiyatkonular();   
                                }


                         else if(tanzimatedebiyati==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(tanzimatedebiyati!=1 || tanzimatedebiyati!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> tanzimatedebiyati;

                                                 if(tanzimatedebiyati==1)
                                {
                                        system("cls");
                                      edebiyatkonular();   
                                }


                         else if(tanzimatedebiyati==2)
                                {
                                        system("cls");
                                        karar();
                                }
                        }
                }

                                }


                                if(edebiyatkonusecim==5){



                                int divanedebiyati;

                                        system("cls");

                                        ifstream dosyaOku("konu/edebiyat/divanedebiyatikonu.txt");
                                string satir = "";

                                 if (dosyaOku.is_open()){

                                while (getline(dosyaOku, satir)){
                                  cout << satir << endl;
                                 }

                                 dosyaOku.close();
                                }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> divanedebiyati;

                                if(divanedebiyati==1)
                                {
                                        system("cls");
                                       edebiyatkonular();   
                                }


                         else if(divanedebiyati==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(divanedebiyati!=1 || divanedebiyati!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> divanedebiyati;

                                                 if(divanedebiyati==1)
                                {
                                        system("cls");
                                       edebiyatkonular();   
                                }


                         else if(divanedebiyati==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }
                }

                        }

                        }

        public: void karar(){                 //kullanýcýnýn  ihtiyacýna gore secim yapacagý yer.

                int secim;
                        system("cls");
                cout<<"1)Konu Anlatýmý"<<endl;
                cout<<"2)Soru Çözünü"<<endl <<endl;
                cout<<"Lütfen seçiniz>>";
                cin>>secim;



                if(secim==1){
                system("cls");
                edebiyatkonular();

                }



                if(secim==2){
                        system("cls");
                        edebiyattestler();
                }

        }

};

class tarih{                                   //tarih dersinin sýnýfý olusturuldu.

        public: tarihtestler()               //tarih dersinin test dosyasi acýldý ve testler yazýldý ve cevaplar karsýlastýrýldý.
        {
        
                    int tarihsorusecim;              	
        	
                ifstream dosyaOku("test/tarih/tarihtestleri.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }

                                cout << "Almak istediðiniz konuyu seçiniz>> ";
                                cin >> tarihsorusecim;
								


                                if(tarihsorusecim==1)
                                {
                                        int tarihbilimine_giristest;

                                        system("cls");

                                        ifstream dosyaOku("test/tarih/tarihbilimitest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char tgcvp[10]={'b','d','c','a','a','e','c','d','c','d'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==tgcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=tgcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }

cout<<"Cevap Anahtarý: 1)b  2)d  3)c  4)a  5)a  6)e  7)c  8)d  9)c  10)d"<<endl<<endl;



                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> tarihbilimine_giristest;



                          if(tarihbilimine_giristest==1)
                                {
                                        system("cls");
                                        tarihtestler();   
                                }


                         else if(tarihbilimine_giristest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(tarihbilimine_giristest!=1 || tarihbilimine_giristest!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> tarihbilimine_giristest;

                                                 if(tarihbilimine_giristest==1)
                                {
                                        system("cls");
                                        tarihtestler();   
                                }


                         else if(tarihbilimine_giristest==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(tarihsorusecim==2)
                                {
                                        int islam_tarihitest;

                                        system("cls");

                                        ifstream dosyaOku("test/tarih/islamtarihitest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char itcvp[10]={'b','d','c','e','e','d','c','b','c','a'};  
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==itcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=itcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }

cout<<"Cevap Anahtarý: 1)b  2)d  3)c  4)e  5)e  6)d  7)c  8)b  9)c  10)a"<<endl<<endl;


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> islam_tarihitest;

                                 if(islam_tarihitest==1)
                                {
                                        system("cls");
                                        tarihtestler();   
                                }


                         else if(islam_tarihitest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(islam_tarihitest!=1 || islam_tarihitest!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> islam_tarihitest;

                                                 if(islam_tarihitest==1)
                                {
                                        system("cls");
                                        tarihtestler();   
                                }


                         else if(islam_tarihitest==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(tarihsorusecim==3)
                                {
                                        int turk_dunyasitest;

                                        system("cls");

                                        ifstream dosyaOku("test/tarih/türkdünyasitest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char tdcvp[10]={'e','d','c','b','e','a','e','a','b','d'}; 
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==tdcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=tdcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)e  2)d  3)c  4)b  5)e  6)a  7)e  8)a  9)b  10)d"<<endl<<endl;


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> turk_dunyasitest;



                                 if(turk_dunyasitest==1)
                                {
                                        system("cls");
                                        tarihtestler();   
                                }


                         else if(turk_dunyasitest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(turk_dunyasitest!=1 || turk_dunyasitest!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> turk_dunyasitest;

                                                 if(turk_dunyasitest==1)
                                {
                                        system("cls");
                                        tarihtestler();   
                                }


                         else if(turk_dunyasitest==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(tarihsorusecim==4)
                                {
                                        int turkiye_tarihitest;

                                        system("cls");

                                        ifstream dosyaOku("test/tarih/turkiyetarihitest.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }
	 
			 char ttcvp[10]={'d','a','c','a','e','e','e','e','c','a'};
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==ttcvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=ttcvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)d  2)a  3)c  4)a  5)e  6)e  7)e  8)e  9)c  10)a"<<endl<<endl;


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> turkiye_tarihitest;
                                
                                if(turkiye_tarihitest==1)
                                {
                                        system("cls");
                                        tarihtestler();   
                                }


                         else if(turkiye_tarihitest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(turkiye_tarihitest!=1 || turkiye_tarihitest!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> turkiye_tarihitest;

                                                 if(turkiye_tarihitest==1)
                                {
                                        system("cls");
                                      tarihtestler();   
                                }


                         else if(turkiye_tarihitest==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }
                                }
                                if(tarihsorusecim==5){



                                int ataturk_ilkeleritest;

                                        system("cls");

                                        ifstream dosyaOku("test/tarih/ataturkilkeleritest.txt");
                                string satir = "";

                                 if (dosyaOku.is_open()){

                                while (getline(dosyaOku, satir)){
                                  cout << satir << endl;
                                 }

                                 dosyaOku.close();
                                }
	 
			 char atacvp[10]={'a','b','e','b','c','d','b','a','d','e'};  
			 char cvp[10];
			 int dogru=0;
			 int yanlis=0;
			 
			for(int t=0;t<10;t++){
			
			
			cout<<endl;
			cout<<t+1<<") sorunun cevabini girin:"<<endl;
			cin>>cvp[t];
			
			if(cvp[t]==atacvp[t])
			{
				
			dogru++;	
				
		    }	
				
			else if(cvp[t]!=atacvp[t])	
			{
			yanlis++;	
				
		    }	
	  }
		
			 
    	if(yanlis<2){
    	
		cout<<dogru<<" tane dogrunuz var"<<endl;
    	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"basarili"<<endl;	
     	
		 }		 
			 
     
        else if(yanlis>2 && yanlis<5){
     	
        cout<<dogru<<" tane dogrunuz var"<<endl;
     	cout<<yanlis<<" tane yanlisiniz var"<<endl;
	     cout<<"gelistirilmeli!"<<endl;
      	
	     }

       else
       {
	
         cout<<dogru<<" tane dogrunuz var"<<endl;
         cout<<yanlis<<" tane yanlisiniz var"<<endl;
          cout<<"cok kotu"<<endl;	
	
        }
cout<<"Cevap Anahtarý: 1)a  2)b  3)e  4)b  5)c  6)d  7)b  8)a  9)d  10)e"<<endl<<endl;


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> ataturk_ilkeleritest;

                                if(ataturk_ilkeleritest==1)
                                {
                                        system("cls");
                                      tarihtestler();   
                                }


                         else if(ataturk_ilkeleritest==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(ataturk_ilkeleritest!=1 || ataturk_ilkeleritest!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> ataturk_ilkeleritest;

                                                 if(ataturk_ilkeleritest==1)
                                {
                                        system("cls");
                                      tarihtestler();   
                                }


                         else if(ataturk_ilkeleritest==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }


                        }

        }


                public: void tarihkonular()                  //tarih dersinin konu sýnýfý acýldý ve konularýn yazdýrýldýgý yer.
                {
				
                                        int tarihkonusecim;

                          ifstream dosyaOku("Konu/Tarih/tarihkonulari.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }



                                cout << "Almak istediðiniz konuyu seçiniz>> ";
                                cin >> tarihkonusecim;
								


                                if(tarihkonusecim==1)
                                {
                                        int tarihbilimine_giris;

                                        system("cls");

                                        ifstream dosyaOku("Konu/Tarih/tarihbilimikonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> tarihbilimine_giris;



                          if(tarihbilimine_giris==1)
                                {
                                        system("cls");
                                        tarihkonular();   
                                }


                         else if(tarihbilimine_giris==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(tarihbilimine_giris!=1 || tarihbilimine_giris!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> tarihbilimine_giris;

                                                 if(tarihbilimine_giris==1)
                                {
                                        system("cls");
                                        tarihkonular();   
                                }


                         else if(tarihbilimine_giris==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(tarihkonusecim==2)
                                {
                                        int islam_tarihi;

                                        system("cls");

                                        ifstream dosyaOku("Konu/Tarih/islamtarihikonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> islam_tarihi;


                                 if(islam_tarihi==1)
                                {
                                        system("cls");
                                        tarihkonular();   
                                }


                         else if(islam_tarihi==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(islam_tarihi!=1 || islam_tarihi!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> islam_tarihi;

                                                 if(islam_tarihi==1)
                                {
                                        system("cls");
                                        tarihkonular();   
                                }


                         else if(islam_tarihi==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }



                                }


                                if(tarihkonusecim==3)
                                {
                                        int turk_dunyasi;

                                        system("cls");

                                        ifstream dosyaOku("Konu/Tarih/türkdünyasikonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }

                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> turk_dunyasi;


                                 if(turk_dunyasi==1)
                                {
                                        system("cls");
                                        tarihkonular();   
                                }


                         else if(turk_dunyasi==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(turk_dunyasi!=1 || turk_dunyasi!=2)
                         {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> turk_dunyasi;

                                                 if(turk_dunyasi==1)
                                {
                                        system("cls");
                                        tarihkonular();   
                                }


                         else if(turk_dunyasi==2)
                                {
                                        system("cls");
                                        karar();
                                }
                                }
                         }

                                }

                                if(tarihkonusecim==4)
                                {
                                        int turkiye_tarihi;

                                        system("cls");

                                        ifstream dosyaOku("Konu/Tarih/turkiyetarihikonu.txt");
                         string satir = "";

                         if (dosyaOku.is_open()){

                         while (getline(dosyaOku, satir)){
                           cout << satir << endl;
                          }

                           dosyaOku.close();
                         }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> turkiye_tarihi;

                                if(turkiye_tarihi==1)
                                {
                                        system("cls");
                                        tarihkonular();   
                                }


                         else if(turkiye_tarihi==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(turkiye_tarihi!=1 || turkiye_tarihi!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> turkiye_tarihi;

                                                 if(turkiye_tarihi==1)
                                {
                                        system("cls");
                                      tarihkonular();   
                                }


                         else if(turkiye_tarihi==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }

                                }

                                if(tarihkonusecim==5){

                                int ataturk_ilkeleri;

                                        system("cls");

                                        ifstream dosyaOku("konu/tarih/ataturkilkelerikonu.txt");
                                string satir = "";

                                 if (dosyaOku.is_open()){

                                while (getline(dosyaOku, satir)){
                                  cout << satir << endl;
                                 }

                                 dosyaOku.close();
                                }


                                cout << "1) Konu Sayfasý   2) Bölüm Sayfasý " << endl << "Gitmek istediðiniz yeri seçin>> ";
                                cin >> ataturk_ilkeleri;

                                if(ataturk_ilkeleri==1)
                                {
                                        system("cls");
                                      tarihkonular();   
                                }


                         else if(ataturk_ilkeleri==2)
                                {
                                        system("cls");
                                        karar();
                                }


                         if(ataturk_ilkeleri!=1 || ataturk_ilkeleri!=2)
                {
                                        while(1)
                                {
                                                cout << "Lütfen gitmek istediðiniz yeri düzgün belirtin!! (1-2)>> ";
                                                cin >> ataturk_ilkeleri;

                                                 if(ataturk_ilkeleri==1)
                                {
                                        system("cls");
                                      tarihkonular();   
                                }


                         else if(ataturk_ilkeleri==2)
                                {
                                        system("cls");
                                        karar();
                                }

                        }

                }


                        }

                        }

        public: void karar(){                     //kullanýcýnýn  ihtiyacýna gore secim yapacagý yer.

                int secim;
                        system("cls");
                cout<<"1)Konu Anlatýmý"<<endl;
                cout<<"2)Soru Çözünü"<<endl <<endl;
                cout<<"Lütfen seçiniz>>";
                cin>>secim;

                if(secim==1){
                system("cls");
                tarihkonular();

                }


                if(secim==2){
                        system("cls");
                        tarihtestler();
                }

        }

};

class giris{            //ana secimlerin yapýldýgý sýnýf...


public:int password;
	   string username;
	   string name;
	   string surname;
	   int alan;
	   int ders_secim;
	   int giris_secim;
	   int i;

public: void user_kayit(){                //kullanýcýnýn bilgileri alýnarak kayýt  dosyasýna yazdýrýlýr.

			system("cls");
			ofstream yourfile("kayit.txt", ios::app);
                string satir="";       
        
               cout<<"Ýsim : ";
               cin>>name;
               cout<<"Soyisim : ";
               cin>>surname;
			 cout << "Kullanici Adi : ";
			 cin >> username;

			cout << "Sifre : ";
			cin >> password;

			yourfile << username << "," << password <<","<<name<<","<<surname<<endl;
      
       
			system("cls");

			cout << "\nKayit basarili Hosgeldin ";
			cout << username << endl;
            bekle(2);
			alt_menu();

}

public:void ana_secimler(){                  //Ana Menu...
         int ders_secim;
		int giris_secim;
		int i;
		
		   cout << "\n*************************************" << endl;
		   cout << "         Egitim Similasyonu" << endl;
		   cout << "************************************* \n" << endl;
		   cout << "1) Giris" << endl;
		   cout << "2) Ogrenci Kayit" << endl;
		   cout << "3)Yardým" << endl;
		   cout << "4)Ekip" << endl;
		   cout << "5)Çýkýþ" << endl;

		   cout << "yapmak istediginiz islemi secin>> ";
		   cin >> giris_secim;

		   if (giris_secim == 1)
		   {
			   system("cls");
			   
			   user_giris();
			   return;
		   }

		   if (giris_secim == 2){
			   system("cls");

			   
			   system("cls");
			   user_kayit();

			   cout << "Lütfen bekle" << endl;
			   bekle(3);
			   return;
		   }


          if(giris_secim == 3){
          	system("cls");
          	yardim();
		  } 

		   if (giris_secim == 4){
			   system("cls");
			   

			   cout << "Maded by\n" << endl;
			   bekle(1.5);
			   cout << "Muhsin Deniz" << endl;
			   bekle(1.5);
			   cout << "Mehmet Yalýnbaþ" << endl;                 //projeyi yapan arkadaslar.
			   bekle(1.5);
			   cout << "Hüseyin Taþ" << endl;
			   bekle(1.5);
			   cout << "Emirhan Koçak" << endl;
			   system("pause");
			   system("cls");
			   ana_secimler();
		   }
		   
		   
		   if(giris_secim == 5){
		   	system("exit");
		   }

}
public : void alt_menu(){
		   cout <<"Kayýt baþarýlý. Lütfen giriþ yaparak devam ediniz\n"<<endl;
		   bekle(1);
		   system("cls");
		   user_giris();
}
public :void alan_scm(){                    //kullanýcýnýn durumuna gore alan secimi yapýlýr.
	cout<<"1)MF/mf"<<endl;
	cout<<"2)Tm/tm"<<endl;
	cout<<"3)TS/ts"<<endl;
	cout<<"Lütfen alan belirtiniz>> ";
	cin>>alan;
	drs_secim();
}


public:void user_giris(){             //kullanýcýnýn  bilgileri alnýr ve sistemdeki bilgilerle karsýlastýrýlýr.

			int girisDurum=0;
		   system("cls");
		   ifstream dosya1("kayit.txt", ios::in);
		   string arananisim;
		   int sifre;
		   string ad;
		   cout << "Kullanýcý Adý :";
		   cin >> arananisim;
		   cout << "Þifre : ";
		   cin >> sifre;
		   if (dosya1.is_open())
		   {
		   	while(!dosya1.eof())
			   {
		   	string satir="";
			getline(dosya1, satir); 
		    char str[satir.length()+1];
			strcpy(str, satir.c_str()); 
			char* words;
			words=strtok(str,",");
			ad=words; 
		
			words=strtok(NULL,",");
			stringstream donusum(words);
			donusum >> password;


			   if (ad == arananisim && password == sifre)
			   {
					girisDurum=1;break;
				}

		   }
		   	
	}
		if (girisDurum==1)
			   {
				   system("cls");
				   cout << "hoþgeldin  " << ad << endl;
				   dosya1.close();
				   alan_scm();
				}
			   else
			   {
				   system("cls");
				   cout << "kayýtlý kullanýcý bulunamadý Tekrar Giriþ yapmayý deneyin" << endl;
					dosya1.close();
				   system("exit");
				   ana_secimler();

			   }
}



public: void drs_secim(){              //alan secimine gore dersler belirlenir  ve ders secimleri yapýlir.
	
	system("cls");
	
              if(alan==1){
              	
            cout << "\n1) Matematik";
			cout << "\n2) Fizik";
			cout << "\n3) Kimya";
			cout << "\n4) Biyoloji";

			cout << " \nDers seciniz: ";
			cin >> ders_secim;
			  }
			
if(ders_secim==1)
{
	matematik m1;
	m1.karar();
		
}

if(ders_secim==2)
{
	fizik f1;
	f1.karar();
		
}

if(ders_secim==3)
{
	kimya k1;
	k1.karar();
		
}

if(ders_secim==4)
{
	biyoloji b1;
	b1.karar();
		
}

           if(alan==2){
              	
            cout << "\n1) Matematik";
			cout << "\n2) Turkce";
			cout << "\n3) Cografya";
			cout << "\n4) Edebiyat";

			cout << " \nDers seciniz: ";
			cin >> ders_secim;
			  }
			
if(ders_secim==1)
{
	matematik m1;
	m1.karar();
	
	
}

if(ders_secim==2)
{
	turkce t1;
	t1.karar();
}

if(ders_secim==3)
{ 
    cografya c1;
	c1.karar();  	
}

if(ders_secim==4)
{
	edebiyat e1;
	e1.karar();
		
}
           if(alan==3){
              	
            cout << "\n1) Tarih";
			cout << "\n2) Turkce";
			cout << "\n3) Cografya";
			cout << "\n4) Edebiyat";

			cout << " \nDers seciniz: ";
			cin >> ders_secim;
			  }
if(ders_secim==1)
{
	tarih h1;
	h1.karar();
	
}

if(ders_secim==2)
{

	turkce t1;
	t1.karar();	
	
}

if(ders_secim==3)
{
	 cografya c1;
	c1.karar(); 
	
	
}

if(ders_secim==4)
{
	edebiyat e1;
	e1.karar();
		
}

}

public:void bekle(int saniye){
		   clock_t kalan;
		   kalan = clock() + saniye*CLOCKS_PER_SEC;             //menude iþlemler yapýlýrken gecen zaman.
		   while (clock()<kalan){

		   }
}
private : void yardim(){
	
	int secim;
	cout<<"1)Hakkýmýzda : "<<endl;
	cout<<"2)Program bilgisi : "<<endl;
	cout<<"3)Lisans : "<<endl;
	cout<<"Lütfen yapmak istediðiniz iþlemi  belirtiniz=>>";
	cin>>secim;
	if(secim==1){
		
		cout<<"\n\nKahramanmaraþ Sütçü Ýmam Üniversitesi Bilgisayar Mühendisliði bölümünde okuyan 4 gencin dönem projesi\n Bu kadar bilgi yeterli;)"<<endl;
		bekle(4);
		system("cls");
		ana_secimler();
		
	}else if (secim==2){
		cout<<"\n\nBu proje Üniversite sýnavýna hazýrlanan kiþinin zengin soru çeþitleri ve derinlemesine konu anlatým dersleri ile sýnava tam anlamýyla hazýrlanmasý için yapýlmýþtýr."<<endl;
			bekle(5);
			system("cls");
		ana_secimler();
		
	}else if (secim==3){
		cout<<"\n\nBu bir lisanslý ZEBTEKNO ürünüdür. Ýzinsiz satýþý ve kopyalanmasý yasaktýr."<<endl;
			bekle(4);
			system("cls");
		ana_secimler();
	}
	
	
	}

};

int main(){

	setlocale(LC_ALL, "Turkish");
	system("color 8f");

	giris menu;
	menu.ana_secimler();
	

}



