include(cpfAddPackage)

# define namespace name for module
set( PACKAGE_NAMESPACE a )

set( briefDescription "An empty C++ command line application used for testing the CPF." )
set( longDescription "" )

cpfInitPackageProject(
	PACKAGE_NAME
	${PACKAGE_NAMESPACE}
)

############################################## Define code files ###################################################

set( PACKAGE_PRODUCTION_FILES
	main.cpp
	function.cpp
	function.h
)

set( PACKAGE_FIXTURE_FILES
)

set( PACKAGE_TEST_FILES
)

# names of the libraries that are linked to this target
set(PACKAGE_LINKED_LIBRARIES
	BPackage
	CPackage
	DPackage
	EPackage
	FPackage
	GPackage
)

set(PACKAGE_LINKED_TEST_LIBRARIES
)

set( qtPlatformPlugins 
)

set( distPackageOptions
	DISTRIBUTION_PACKAGES
		DISTRIBUTION_PACKAGE_CONTENT_TYPE 	CT_RUNTIME
		DISTRIBUTION_PACKAGE_FORMATS 		7Z
	DISTRIBUTION_PACKAGES
		DISTRIBUTION_PACKAGE_CONTENT_TYPE 	CT_RUNTIME_PORTABLE
		DISTRIBUTION_PACKAGE_FORMATS 		ZIP
)

############################################## Add Package #################################
cpfAddPackage( 
	PACKAGE_NAME			${PACKAGE_NAME}
	PACKAGE_NAMESPACE		${PACKAGE_NAMESPACE}
	TYPE					CONSOLE_APP
	BRIEF_DESCRIPTION		${briefDescription}
	LONG_DESCRIPTION		${longDescription}
	PRODUCTION_FILES		${PACKAGE_PRODUCTION_FILES}
	FIXTURE_FILES			${PACKAGE_FIXTURE_FILES}
	TEST_FILES				${PACKAGE_TEST_FILES}
	LINKED_LIBRARIES		${PACKAGE_LINKED_LIBRARIES}
	LINKED_TEST_LIBRARIES	${PACKAGE_LINKED_TEST_LIBRARIES}
	PLUGIN_DEPENDENCIES		${qtPlatformPlugins}
	${distPackageOptions}
	ENABLE_ABI_API_COMPATIBILITY_CHECK_TARGETS FALSE
)
