#include <APackage/a.h>
#include <BPackage/b.h>
#include <CPackage/c.h>

int mainImpl(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    b::bFunction();
    c::cFunction();
    return 0;
}
namespace{} 
namespace{} 
namespace{} 
namespace{} 
namespace{} 
namespace{} 
