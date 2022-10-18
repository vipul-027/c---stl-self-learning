#include<bits/stdc++.h>
using namespace std;
 int main() {
   //pair--

    //in pair- we can make a pair of two types of data types 
    //syntex of pair .
    pair<int, string> p;// here two types of data-type present in this pair and 'p' is name of the pair  
    // intiallization of the pair 
    p=make_pair(2, "abc"); //1. first mehtod to put value in the pair 
    p={2, abcd}; //2. second method to intiallization of the pair 
    //how to copy the value 
    pair<int, string> p1= p;
    pi.first=3; // if we declare '&p1' then output of the program will changed.
    cout<<p.first<<" "<<p.second<<endl;
    pair<int , int> p_array[3]; //declaration of array
    p_array[0]={1, 2};
    p_array[1]={3, 4};
    p_array[2]={5, 6};
    swap(p_array[0], p_array[2]); /
     for(int i=0; i<3; i++){
        cout<<p_array[i].first<<" "<<p_array.second<<endl;
        cin>>p.first;//  take input ,
        cout<<p.first; // print output.
     }
 }
  // vector
  #include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){   // for line36 &v then value will be added in th array.
  cout<<"size"<<v.size() <<endl; // print the size of the array
     for(int i=0; i<v.size(), ++i){  //v.size -this function gives the size of the vector
    //v.size()  ->o(1)
    cout<<v[i]<<" ";
     }
     v.push_back(2); // it effects on output when we pass &v in place of v in function definition

     cout<<endl;
}
 int main() {
  //1.
   vector<int> v; // this is the vector 'v' - data type is integer 
   // now currently size is zero but we can vary size of this array
   int n; cin>>n; //for size of the array.
   for(int i=0; i<n; i++){
    int x;  cin>>x;
    printvec(v);// pahla element enter kiya to wo print hoga then 2nd element enter karne ke baad 1st and 2nd element print hoga and so..on..
    v.push_back(x);  // value of x added in the end of the array
     // time complexity of the push_back function is o(1)
   } 
     printvec(v);
  //2. 
  vector<int>v(5);// here size of the vector is 5
 vector<int> v(5, 3); //here size is '5' and every element in the vector is 3.
 v.push_back(7);// here print the '7' at the 6th position of the vector
 v.pop_back() // remove element form the back side , o(1)
  vector<int> v2=v; //copy of the vector here when you chnaged the v2 array then v don't reflect th value ,but in array refelct the value and copy to th pointer value
  //-> time complexity of the copy function is o(n).
 
 }
