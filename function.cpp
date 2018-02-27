#include <APackage/function.h>
#include <BPackage/function.h>
#include <CPackage/function.h>
#include <DPackage/function.h>
#include <EPackage/function.h>
#include <FPackage/function.h>
#include <GPackage/function.h>

int mainImpl(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    b::function();
    c::function();
    d::function();
    e::function();
    f::function();
    g::function();

    return 0;
}


namespace{} 
namespace{} 
namespace{} 
namespace{} 
namespace{} 
namespace{} 
namespace{} 
namespace{} 
namespace{} 
