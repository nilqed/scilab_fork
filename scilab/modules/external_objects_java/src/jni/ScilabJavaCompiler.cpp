#include "ScilabJavaCompiler.hxx"
/* Generated by GIWS (version 2.0.2) with command:
giws --output-dir src/jni/ --throws-exception-on-error --description-file src/jni/ScilabObjects.giws.xml
*/
/*

This is generated code.

This software is a computer program whose purpose is to hide the complexity
of accessing Java objects/methods from C++ code.

Copyright (C) 2012 - 2016 - Scilab Enterprises

This file is hereby licensed under the terms of the GNU GPL v2.0,
pursuant to article 5.3.4 of the CeCILL v.2.1.
This file was originally licensed under the terms of the CeCILL v2.1,
and continues to be available under such terms.
For more information, see the COPYING file which you should have received
along with this program.
*/

namespace org_scilab_modules_external_objects_java {

                // Static declarations (if any)
                
// Returns the current env

JNIEnv * ScilabJavaCompiler::getCurrentEnv() {
JNIEnv * curEnv = NULL;
jint res=this->jvm->AttachCurrentThread(reinterpret_cast<void **>(&curEnv), NULL);
if (res != JNI_OK) {
throw GiwsException::JniException(getCurrentEnv());
}
return curEnv;
}
// Destructor

ScilabJavaCompiler::~ScilabJavaCompiler() {
JNIEnv * curEnv = NULL;
this->jvm->AttachCurrentThread(reinterpret_cast<void **>(&curEnv), NULL);
curEnv->DeleteGlobalRef(this->instance);
curEnv->DeleteGlobalRef(this->instanceClass);
curEnv->DeleteGlobalRef(this->stringArrayClass);}
// Constructors
ScilabJavaCompiler::ScilabJavaCompiler(JavaVM * jvm_) {
jmethodID constructObject = NULL ;
jobject localInstance ;
jclass localClass ;

const std::string construct="<init>";
const std::string param="()V";
jvm=jvm_;

JNIEnv * curEnv = getCurrentEnv();

localClass = curEnv->FindClass( this->className().c_str() ) ;
if (localClass == NULL) {
  throw GiwsException::JniClassNotFoundException(curEnv, this->className());
}

this->instanceClass = static_cast<jclass>(curEnv->NewGlobalRef(localClass));

/* localClass is not needed anymore */
curEnv->DeleteLocalRef(localClass);

if (this->instanceClass == NULL) {
throw GiwsException::JniObjectCreationException(curEnv, this->className());
}


constructObject = curEnv->GetMethodID( this->instanceClass, construct.c_str() , param.c_str() ) ;
if(constructObject == NULL){
throw GiwsException::JniObjectCreationException(curEnv, this->className());
}

localInstance = curEnv->NewObject( this->instanceClass, constructObject ) ;
if(localInstance == NULL){
throw GiwsException::JniObjectCreationException(curEnv, this->className());
}
 
this->instance = curEnv->NewGlobalRef(localInstance) ;
if(this->instance == NULL){
throw GiwsException::JniObjectCreationException(curEnv, this->className());
}
/* localInstance not needed anymore */
curEnv->DeleteLocalRef(localInstance);

                /* Methods ID set to NULL */
jintcompileCodejstringjava_lang_StringjobjectArray_java_lang_Stringjava_lang_StringID=NULL;


}

ScilabJavaCompiler::ScilabJavaCompiler(JavaVM * jvm_, jobject JObj) {
        jvm=jvm_;

        JNIEnv * curEnv = getCurrentEnv();

jclass localClass = curEnv->GetObjectClass(JObj);
        this->instanceClass = static_cast<jclass>(curEnv->NewGlobalRef(localClass));
        curEnv->DeleteLocalRef(localClass);

        if (this->instanceClass == NULL) {
throw GiwsException::JniObjectCreationException(curEnv, this->className());
        }

        this->instance = curEnv->NewGlobalRef(JObj) ;
        if(this->instance == NULL){
throw GiwsException::JniObjectCreationException(curEnv, this->className());
        }
        /* Methods ID set to NULL */
        jintcompileCodejstringjava_lang_StringjobjectArray_java_lang_Stringjava_lang_StringID=NULL;


}

// Generic methods

void ScilabJavaCompiler::synchronize() {
if (getCurrentEnv()->MonitorEnter(instance) != JNI_OK) {
throw GiwsException::JniMonitorException(getCurrentEnv(), "ScilabJavaCompiler");
}
}

void ScilabJavaCompiler::endSynchronize() {
if ( getCurrentEnv()->MonitorExit(instance) != JNI_OK) {
throw GiwsException::JniMonitorException(getCurrentEnv(), "ScilabJavaCompiler");
}
}
// Method(s)

int ScilabJavaCompiler::compileCode (JavaVM * jvm_, char const* classname, char const* const* code, int codeSize){

JNIEnv * curEnv = NULL;
jvm_->AttachCurrentThread(reinterpret_cast<void **>(&curEnv), NULL);
jclass cls = initClass(curEnv);
if ( cls == NULL) {
throw GiwsException::JniCallMethodException(curEnv);
}

static jmethodID jintcompileCodejstringjava_lang_StringjobjectArray_java_lang_Stringjava_lang_StringID = curEnv->GetStaticMethodID(cls, "compileCode", "(Ljava/lang/String;[Ljava/lang/String;)I" ) ;
if (jintcompileCodejstringjava_lang_StringjobjectArray_java_lang_Stringjava_lang_StringID == NULL) {
throw GiwsException::JniMethodNotFoundException(curEnv, "compileCode");
}

jstring classname_ = curEnv->NewStringUTF( classname );
if (classname != NULL && classname_ == NULL)
{
throw GiwsException::JniBadAllocException(curEnv);
}

jclass stringArrayClass = curEnv->FindClass("java/lang/String");

// create java array of strings.
jobjectArray code_ = curEnv->NewObjectArray( codeSize, stringArrayClass, NULL);
if (code_ == NULL)
{
throw GiwsException::JniBadAllocException(curEnv);
}

// convert each char * to java strings and fill the java array.
for ( int i = 0; i < codeSize; i++)
{
jstring TempString = curEnv->NewStringUTF( code[i] );
if (TempString == NULL)
{
throw GiwsException::JniBadAllocException(curEnv);
}

curEnv->SetObjectArrayElement( code_, i, TempString);

// avoid keeping reference on too many strings
curEnv->DeleteLocalRef(TempString);
}
                        jint res =  static_cast<jint>( curEnv->CallStaticIntMethod(cls, jintcompileCodejstringjava_lang_StringjobjectArray_java_lang_Stringjava_lang_StringID ,classname_, code_));
                        curEnv->DeleteLocalRef(stringArrayClass);
curEnv->DeleteLocalRef(classname_);
curEnv->DeleteLocalRef(code_);
if (curEnv->ExceptionCheck()) {
throw GiwsException::JniCallMethodException(curEnv);
}
return res;

}

}
