#include "DatatipDrag.hxx"
/* Generated by GIWS (version 2.0.2) with command:
giws --disable-return-size-array --output-dir src/jni/ --throws-exception-on-error --description-file src/jni/Datatip.giws.xml
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

namespace org_scilab_modules_gui_datatip {

                // Static declarations (if any)
                
// Returns the current env

JNIEnv * DatatipDrag::getCurrentEnv() {
JNIEnv * curEnv = NULL;
jint res=this->jvm->AttachCurrentThread(reinterpret_cast<void **>(&curEnv), NULL);
if (res != JNI_OK) {
throw GiwsException::JniException(getCurrentEnv());
}
return curEnv;
}
// Destructor

DatatipDrag::~DatatipDrag() {
JNIEnv * curEnv = NULL;
this->jvm->AttachCurrentThread(reinterpret_cast<void **>(&curEnv), NULL);
curEnv->DeleteGlobalRef(this->instance);
curEnv->DeleteGlobalRef(this->instanceClass);
}
// Constructors
DatatipDrag::DatatipDrag(JavaVM * jvm_) {
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
voiddragDatatipjintintjintintjintintID=NULL;


}

DatatipDrag::DatatipDrag(JavaVM * jvm_, jobject JObj) {
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
        voiddragDatatipjintintjintintjintintID=NULL;


}

// Generic methods

void DatatipDrag::synchronize() {
if (getCurrentEnv()->MonitorEnter(instance) != JNI_OK) {
throw GiwsException::JniMonitorException(getCurrentEnv(), "DatatipDrag");
}
}

void DatatipDrag::endSynchronize() {
if ( getCurrentEnv()->MonitorExit(instance) != JNI_OK) {
throw GiwsException::JniMonitorException(getCurrentEnv(), "DatatipDrag");
}
}
// Method(s)

void DatatipDrag::dragDatatip (JavaVM * jvm_, int datatipUid, int endX, int endY){

JNIEnv * curEnv = NULL;
jvm_->AttachCurrentThread(reinterpret_cast<void **>(&curEnv), NULL);
jclass cls = initClass(curEnv);
if ( cls == NULL) {
throw GiwsException::JniCallMethodException(curEnv);
}

static jmethodID voiddragDatatipjintintjintintjintintID = curEnv->GetStaticMethodID(cls, "dragDatatip", "(III)V" ) ;
if (voiddragDatatipjintintjintintjintintID == NULL) {
throw GiwsException::JniMethodNotFoundException(curEnv, "dragDatatip");
}

                         curEnv->CallStaticVoidMethod(cls, voiddragDatatipjintintjintintjintintID ,datatipUid, endX, endY);
                        if (curEnv->ExceptionCheck()) {
throw GiwsException::JniCallMethodException(curEnv);
}
}

}
