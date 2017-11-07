#include <bits/stdc++.h>
using namespace std;

/*Heron's Formula to find area of a triangluar face*/
double areaHeron(double a1,double a2,double a3)
{
        double s=(a1+a2+a3)/2.0;
        return sqrt(s*(s-a1)*(s-a2)*(s-a3));
}

int main() {
   std::ios::sync_with_stdio(false);
   int t;
   cin>>t;
   while(t--)
   {
      double u,v,w,U,V,W,vol,a,b=12,total_area=0;
      cin>>u>>v>>w>>W>>V>>U;
      
      /*Adding total area of all sides*/
      total_area += areaHeron(u,V,w);
        total_area += areaHeron(W,u,v);
        total_area += areaHeron(W,V,U);
        total_area += areaHeron(U,v,w);
      
      /*steps to calculate volume of a 
        Tetrahedron using formula*/
        a=4*(pow(u,2)*pow(v,2)*pow(w,2)) 
        	- pow(u,2)*pow((pow(v,2)+pow(w,2)-pow(U,2)),2) 
        	- pow(v,2)*pow((pow(w,2)+pow(u,2)-pow(V,2)),2) 
        	- pow(w,2)*pow((pow(u,2)+pow(v,2)-pow(W,2)),2) 
        	+ (
        		pow(v,2)+pow(w,2)-pow(U,2))*
        		(pow(w,2)+pow(u,2)-pow(V,2))*
        		(pow(u,2)+pow(v,2)-pow(W,2)
        	  );
        vol = sqrt(a);
        vol /= b;
      
      /*the radius of the inscribed circle 
       is (3*volume)/total_area */
      cout << std::fixed << std::setprecision(4) << vol*3/total_area<<"\n";
   }	
   return 0;
}
