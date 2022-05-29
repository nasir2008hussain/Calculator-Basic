#include<iostream>
#include<cmath>
using namespace std;
char ch;
void menu()
{
	cout<<"______________Menu_____________\n------------------------------\n";
	cout<<" 1 for Addition(+)\n 2 for Subtraction(-)\n 3 for Multipication(*)\n 4 for Division(/)\n";
	cout<<" 5 for Log\n 6 for Modular\n 7 for Square root\n";
	cout<<" 8 for Power of 10\n 9 for Cube\n10 for Cube Root\n11 for Unknown Root\n";
	cout<<"12 for Power of Unknown\n13 for Square\n14 for Exp\n";
	cout<<"15 for sin()\n16 for cos()\n17 for tan()\n";
	cout<<"18 for Inverse of sin()\n19 for Inverse of cos()\n20 for Inverse of tan()\n";
}
int choice()
{
	int c1;
	cout<<"Enter choice : ";
	cin>>c1;
	return c1;
}
int add(int w,int x,int y,int z)
{
int sum;
sum=(w+x+y+z);
cout<<"Addition = "<<sum;
}
int sub(int w,int x,int y,int z)
{
int subs;
subs=(w-x-y-z);
cout<<"Subtraction = "<<subs;
}
int mul(int w,int x,int y,int z)
{
int muls;
muls=(w*x*y*z);
cout<<"Multipication = "<<muls;
}
int div(float w,float x)
{
	float div=(w/x);
	cout<<"Divison = "<<div;
}
int logs(int w)
{
	double s;
	s=log10(w);
	cout<<"Log = "<<s;
}
int mod(int w,int x)
{
	int y;
	y=w%x;
	cout<<"Modulus = "<<y;
}
int sq(int w)
{
	int y=sqrt(w);
	cout<<"Square root = "<<y;
}
int pwr(int w)
{
	int y;
	y=pow(10,w);
	cout<<"10 Power of "<<w<<" is = "<<y;
}
int cube(int w)
{
	float y;
	y=w*w*w;
	cout<<"Cube of "<<w<<" is = "<<y;
}
int cuberoot(int w)
{
	float y;
	y=cbrt(w);
	cout<<"Cube root of "<<w<<" is = "<<y;
}
int unkroot(int w, int x)
{
	float y=1.0/w;
	float z=pow(x,y);
	cout<<"The "<<w<<"th root of "<<x<<" is = "<<z;
	
}
int unkpwr(int w, int y)
{
	float z=pow(w,y);
	cout<<"Answer of "<<w<<" power"<<y<<" is = "<<z;
}
int square(int x)
{
	int y=x*x;
	cout<<"Square = "<<y;
}
int expo(int x)
{
	double y=exp(x);
	cout<<"The answer of exp("<<x<<") is = "<<y;
}
int sine(float x)
{
	double y;
	y=(x*3.14159)/180;
	cout<<"The sin("<<x<<") is = "<<sin(y);
}
int cose(float x)
{
	double y;
	y=(x*3.14159)/180;
	cout<<"The cos("<<x<<") is = "<<cos(y);
}
int tane(float x)
{
	double y;
	y=(x*3.14159)/180;
	cout<<"The tan("<<x<<") is = "<<tan(y);
}
int isine(float x)
{
	double y,z;
	y=asin(x);
	z=(y*180.0)/3.14159;
	cout<<"The inverse sin("<<x<<") is = "<<z;
}
int icose(float x)
{
	double y,z;
	y=acos(x);
	z=(y*180.0)/3.14159;
	cout<<"The inverse cosin("<<x<<") is = "<<z;
}
int itan(float x)
{
	double y,z;
	y=atan(x);
	z=(y*180.0)/3.14159;
	cout<<"The inverse tan("<<x<<") is = "<<z;
}
int main()
{
 do
 {
	int u,c1,a1,b=0,c=0,d=0,e=0;
	menu();
	u=choice();
	if(u==1)
	{
		cout<<"ADDITON\n";
		cout<<"Enter how many : ";
		cin>>a1;
		if(a1==2)
		{
			cin>>b>>c;
			add(b,c,d,e);
		}
		else if(a1==3)
		{
			cin>>b>>c>>d;
			add(b,c,d,e);
			
		}
		else if(a1==4)
		{
			cin>>b>>c>>d>>e;
			add(b,c,d,e);
		}
		else
		 cout<<"upto four allowed";
	}
	else if(u==2)
	{
		cout<<"Subtraction\n";
		cout<<"Enter the how many : ";
		cin>>a1;
		if(a1==2)
		{
			cin>>b>>c;
			sub(b,c,d,e);
			
			
		}
		else if(a1==3)
		{
			cin>>b>>c>>d;
			sub(b,c,d,e);
			
		}
		else if(a1==4)
		{
			cin>>b>>c>>d>>e;
			sub(b,c,d,e);
		}
		else
		 cout<<"Upto four allowed\n";
	}
	
	else if(u==3)
	{
		cout<<"MULTIPICATION\n";
		cout<<"Enter how many : ";
		cin>>a1;
		if(a1==2)
		{
			cin>>b>>c;
			mul(b,c,d,e);
		}
		else if(a1==3)
		{
			cin>>b>>c>>d;
			mul(b,c,d,e);
			
		}
		else if(a1==4)
		{
			cin>>b>>c>>d>>e;
			mul(b,c,d,e);
		}
		else
		 cout<<"Only upto four allowed\n";
	}
	else if(u==4)
	{
		float b=0.0,c=0.0;
		cout<<"DIVISION\n";
		cin>>b>>c;
		div(b,c);
	}
	else if(u==5)
	{
		float b=0.0;
		cout<<"LOG\n";
		cin>>b;
		logs(b);
	}
	else if(u==6)
	{
		cout<<"MODULUS\n";
		cin>>b>>c;
		mod(b,c);
	}
	else if(u==7)
	{
		cout<<"SQUARE ROOT\n";
		cin>>b;
		sq(b);
	}
	else if(u==8)
	{
		cout<<"POWER OF 10\n";
		cin>>b;
		pwr(b);
	}
	else if(u==9)
	{
		cout<<"CUBE\n";
		cin>>b;
		cube(b);
	}
	else if(u==10)
	{
		float b=0.0;
		cout<<"CUBE ROOT\n";
		cin>>b;
		cuberoot(b);
	}
	else if(u==11)
	{
		cout<<"UNKNOWN ROOT\n";
		cout<<"Enter the Root number : ";
	    cin>>b;
	    cout<<"Enter Under root number : ";
	    cin>>c;
	    unkroot(b,c);
	}
	else if(u==12)
	{
		cout<<"POWER UNKNOWN\n";
		cout<<"Enter the base number : ";
	    cin>>b;
	    cout<<"Enter the power : ";
	    cin>>c;
	    unkpwr(b,c);
	}
	else if(u==13)
	{
		cout<<"SQUARE\n";
		cin>>b;
		square(b);
	}
	else if(u==14)
	{
		cout<<"EXPONENTIAL\n";
		cin>>b;
		expo(b);
	}
	else if(u==15)
	{
	 cout<<"SIN FUNCTION\n";
	 double b;
	 cin>>b;
	 sine(b);	
	}
	else if(u==16)
	{
	 cout<<"COS FUNCTION\n"	;
	 double b;
	 cin>>b;
	 cose(b);	
	}
	else if(u==17)
	{
	 cout<<"TAN FUNCTION\n"	;
	 double b;
	 cin>>b;
	 tane(b);	
	}
	else if(u==18)
	{
	 cout<<"INVERSE SINE FUNCTION\n"	;
	 double b;
	 cin>>b;
	 isine(b);	
	}
	else if(u==19)
	{
	 cout<<"INVERSE COSINE FUNCTION\n"	;
	 double b;
	 cin>>b;
	 icose(b);	
	}
	else if(u==20)
	{
	 cout<<"INVERSE TAN FUNCTION\n"	;
	 double b;
	 cin>>b;
	 itan(b);	
	} 	
    else
 	 cout<<"There is Only 20 cases , Thank YOU!\n";
 	
        cout<<"\nDo you want to continue : ";
	    cin>>ch;
	    if(ch=='y'||ch=='Y')
	    {
	     continue;
    	 }
        else if(ch!='N'&&ch!='n')
         {  
            int chance=1;
            int q=3;
            while(chance<=3)
            {
			  cout<<"Please Give Valid Command (Y/y/N/n) : ";
              cin>>ch; 
              if(ch!='n'&&ch!='N'&&ch!='Y'&&ch!='y')
                 {
                 chance++;
                 q--;
                 cout<<"You have "<<q<<" chance left\n";
				 }
              else if(ch=='y'||ch=='Y')
                  {
    	          break;
				  } 
			  else
				  break;    
			}
			if(chance==4)
			 {
				cout<<"Sorry Invalid Command";
			    break;
			 }
			 
		 }
		 else 
		 break;  
	} while(ch!='n'&&ch!='N');
	cout<<"\nThank You ! Your Process is Finished :)";	  
 	
 	

}
