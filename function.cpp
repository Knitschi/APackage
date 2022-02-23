#include <BPackage/function.h>
#include <CPackage/function.h>
#include <Component1/function.h>
#include <Component2/function.h>
#include <DPackage/function.h>
#include <EPackage/function.h>

#include <APackage/function.h>

int mainImpl(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	b::function();
	c::function();
	d::function();
	d::function2();
	e::function();
	comp1::function();
	comp2::function();

	return 0;
}
