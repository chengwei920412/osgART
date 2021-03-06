// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Object>
#include <osg/Stats>
#include <osgART/VideoImageStream>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgART::VideoImageStream)
	I_DeclaringFile("osgART/VideoImageStream");
	I_BaseType(osg::ImageStream);
	I_Constructor0(____VideoImageStream,
	               "Constructor. ",
	               "");
	I_ConstructorWithDefaults2(IN, const osgART::VideoImageStream &, image, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____VideoImageStream__C5_VideoImageStream_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(void, start,
	          Properties::VIRTUAL,
	          __void__start,
	          "start the video stream grabbing. ",
	          "Start to get image from the video stream. In function of the implementation on different platform, this function can run a thread, signal or real-time function. ");
	I_Method0(void, stop,
	          Properties::VIRTUAL,
	          __void__stop,
	          "stop the video stream grabbing. ",
	          "Stop to get image from the video stream. In function of the implementation on different platform, this function can stop a thread, signal or real-time function. ");
	I_Method0(void, open,
	          Properties::VIRTUAL,
	          __void__open,
	          "open the Video stream. ",
	          "Access the Video stream (hardware or file) and get an handle on it. ");
	I_MethodWithDefaults1(void, close, IN, bool, waitForThread, true,
	                      Properties::VIRTUAL,
	                      __void__close__bool,
	                      "close the video stream. ",
	                      "Terminate the connection with the video stream and clean handle. ");
	I_Method0(osg::Stats *, getStats,
	          Properties::NON_VIRTUAL,
	          __osg_Stats_P1__getStats,
	          "Returns stats for the Video capture. ",
	          "pointer to the stats connected to the video  ");
	I_Method1(void, setStats, IN, osg::Stats *, stats,
	          Properties::NON_VIRTUAL,
	          __void__setStats__osg_Stats_P1,
	          "Set the stats for the Video capture. ",
	          " param stats pointer to the stats capturing timings  ");
	I_SimpleProperty(osg::Stats *, Stats, 
	                 __osg_Stats_P1__getStats, 
	                 __void__setStats__osg_Stats_P1);
END_REFLECTOR

