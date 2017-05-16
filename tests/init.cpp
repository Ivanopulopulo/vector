#include <vector.hpp>
#include <catch.hpp>

SCENARIO("vector init", "[init]") 
{
	vector_t vector;
	REQUIRE(vector.size() == 0);
	REQUIRE(vector.capacity() == 0);
}
SCENARIO("vector with param", "[init]")
{
	vector_t vector(4);
	REQUIRE(vector.size() == 4);
	REQUIRE(vector.capacity() == 4);
	
	for(unsigned int index = 0; index < vector.size(); ++ index)
	
		vector[index]==0;
	
}
SCENARIO("vector init object ", "[init]")
{
	vector_t a;
	REQUIRE(a.size()==0);
	REQUIRE(a.capacity()==0);
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	REQUIRE(a.size() == 3);
	REQUIRE(a.capacity() == 4);
	 vector_t b(a);
	REQUIRE(b.size() == 3);
	REQUIRE(b.capacity() == 4);
	for(unsigned int i = 0; i < b.size(); i++)
		b[i] == a[i];
}
SCENARIO("vector operator =" , "[init]")
{
	vector_t b(4), a;
	REQUIRE(a.size()==0);
	REQUIRE(a.capacity()==0);
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	REQUIRE(a.size() == 3);
	REQUIRE(a.capacity() == 4);
	 b = a;
	REQUIRE(b.size() == 3);
	REQUIRE(b.capacity() == 4);
	for(unsigned int i = 0; i < b.size(); i++)
		b[i] == a[i];
}
SCENARIO("vector pushback", "[init]")
{
	vector_t vector(3);
	REQUIRE(vector.size()==3);
	REQUIRE(vector.capacity()==3);
	vector.push_back(4);
	REQUIRE(vector.size()==4);
	REQUIRE(vector.capacity()==6);
	REQUIRE(vector[0]==0);
	REQUIRE(vector[1]==0);
	REQUIRE(vector[2]==0);
	REQUIRE(vector[3]==4);
}
SCENARIO("delval")
	vector_t vector(2);
	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	REQUIRE(vector.size() == 5);
	REQUIRE(vector.capacity() == 8);
	REQUIRE(vector.delval() == 3);
	REQUIRE(vector.size() == 4);
	REQUIRE(vector.capacity() == 4);
	REQUIRE(vector.delval() == 2);
	REQUIRE(vector.size() == 3);
	REQUIRE(vector.capacity() == 4);
	REQUIRE(vector.delval() == 1);
	REQUIRE(vector.size() == 2);
	REQUIRE(vector.capacity() == 2);
	REQUIRE(vector.delval() == 0);
	REQUIRE(vector.size() == 1);
	REQUIRE(vector.capacity() == 1);
	REQUIRE(vector.delval() == 0);
	REQUIRE(vector.size() == 0);
	REQUIRE(vector.capacity() == 0);

	
