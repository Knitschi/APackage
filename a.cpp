#include <APackage/a.h>
#include <BPackage/b.h>
#include <CPackage/c.h>
#include <DPackage/d.h>
#include <EPackage/e.h>
#include <FPackage/f.h>
#include <GPackage/g.h>

int mainImpl(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    b::bFunction();
    c::cFunction();
    d::dFunction();
    e::eFunction();
    f::fFunction();
    g::gFunction();

    return 0;
}


