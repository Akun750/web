#include<iostream.h>
#include<conio.h>
#include<math.h>

float volume(int h, int r);
float volume(float h, float r);
float volume(float r);

 int main()
	  {
	   int cylinder_h, cylinder_r;
	   float cone_h, cone_r;
	   float sphere_r;

	   cout<<"Enter Dimension "<<endl;
	   cout<<"1.Cylinder" <<endl;
	   cout<<"Height: ";
	   cin>>cylinder_h;
	   cout<<"Radius: ";
	   cin>>cylinder_r;
	   cout<<endl;

	   cout<<"2.Cone"<<endl;
	   cout<<"Height";
	   cin>>cone_h;
	   cout<<"Radius";
	   cin>>cone_r;
	   cout<<endl;

	   cout<<"3.Sphere"<<endl;
	   cout<<"Radius";
	   cin>>sphere_r;
	   cout<<endl;

	   cout<<"\n volume of cylinder is: "<<volume(cylinder_h, cylinder_r)<<endl;
	   cout<<"\n volume of cone is: "<<volume(cone_h, cone_r)<<endl;
	   cout<<"\n volume of sphere is: "<<volume(sphere_r)<<endl;
	   getch();
	   return 0;
	   }

	   float volume(int h, int r)
	   {
	    return(3.14 * r * r * h);
	    }
	    float volume(float h, float r)
	    {
	     return(3.14 * r * r * h/3);
	     }
	     float volume(float r)
	     {
	      return(3.14 * r * r * r);
	      }