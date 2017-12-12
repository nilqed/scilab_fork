/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.7
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  (*jenv)->ExceptionClear(jenv);
  excep = (*jenv)->FindClass(jenv, except_ptr->java_exception);
  if (excep)
    (*jenv)->ThrowNew(jenv, excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include "sci_malloc.h"
#include "../../includes/HistoryManager.h"
#include "../../includes/TerminateHistoryManager.h"
#include "../../includes/InitializeHistoryManager.h"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jboolean JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_appendLineToScilabHistory(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jboolean jresult = 0 ;
  char *arg1 = (char *) 0 ;
  BOOL result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = appendLineToScilabHistory(arg1);
  {
    if (result) jresult = JNI_TRUE   ;
    else  jresult = JNI_FALSE   ;
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_appendLinesToScilabHistory(JNIEnv *jenv, jclass jcls, jobjectArray jarg1, jint jarg2) {
  jboolean jresult = 0 ;
  char **arg1 = (char **) 0 ;
  int arg2 ;
  jint size1 ;
  BOOL result;
  
  (void)jenv;
  (void)jcls;
  {
    int i = 0;
    size1 = (*jenv)->GetArrayLength(jenv, jarg1);
    arg1 = (char **) MALLOC((size1+1)*sizeof(char *));
    /* make a copy of each string */
    for (i = 0; i<size1; i++) {
      jstring j_string = (jstring)(*jenv)->GetObjectArrayElement(jenv, jarg1, i);
      const char * c_string = (*jenv)->GetStringUTFChars(jenv, j_string, 0);
      arg1[i] = MALLOC((strlen(c_string)+1)*sizeof(const char *));
      strcpy(arg1[i], c_string);
      (*jenv)->ReleaseStringUTFChars(jenv, j_string, c_string);
      (*jenv)->DeleteLocalRef(jenv, j_string);
    }
    arg1[i] = 0;
  }
  arg2 = (int)jarg2; 
  result = appendLinesToScilabHistory(arg1,arg2);
  {
    if (result) jresult = JNI_TRUE   ;
    else  jresult = JNI_FALSE   ;
  }
  {
    int i;
    for (i=0; i<size1-1; i++) {
      FREE(arg1[i]);
      arg1[i] = NULL;
    }
    FREE(arg1);
    arg1 = NULL;
  }
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_displayScilabHistory(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  displayScilabHistory();
}


SWIGEXPORT jboolean JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_writeScilabHistoryToFile(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jboolean jresult = 0 ;
  char *arg1 = (char *) 0 ;
  BOOL result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = writeScilabHistoryToFile(arg1);
  {
    if (result) jresult = JNI_TRUE   ;
    else  jresult = JNI_FALSE   ;
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_loadScilabHistoryFromFile(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jboolean jresult = 0 ;
  char *arg1 = (char *) 0 ;
  BOOL result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = loadScilabHistoryFromFile(arg1);
  {
    if (result) jresult = JNI_TRUE   ;
    else  jresult = JNI_FALSE   ;
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_setFilenameScilabHistory(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jboolean jresult = 0 ;
  char *arg1 = (char *) 0 ;
  BOOL result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = setFilenameScilabHistory(arg1);
  {
    if (result) jresult = JNI_TRUE   ;
    else  jresult = JNI_FALSE   ;
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_getFilenameScilabHistory(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)getFilenameScilabHistory();
  {
    if (result != NULL)
    {
      jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
      FREE(result);
      result = NULL;
    }       
  }
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_setDefaultFilenameScilabHistory(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  BOOL result;
  
  (void)jenv;
  (void)jcls;
  result = setDefaultFilenameScilabHistory();
  {
    if (result) jresult = JNI_TRUE   ;
    else  jresult = JNI_FALSE   ;
  }
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_resetScilabHistory(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  resetScilabHistory();
}


SWIGEXPORT jobjectArray JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_getAllLinesOfScilabHistory(JNIEnv *jenv, jclass jcls) {
  jobjectArray jresult = 0 ;
  char **result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char **)getAllLinesOfScilabHistory();
  {
    if (result != NULL)
    {
      int i;
      int len=0;
      jstring temp_string;
      const jclass clazz = (*jenv)->FindClass(jenv, "java/lang/String");
      
      while (result[len]) len++;    
      jresult = (*jenv)->NewObjectArray(jenv, len, clazz, NULL);
      /* exception checking omitted */
      
      for (i=0; i<len; i++) {
        temp_string = (*jenv)->NewStringUTF(jenv, result[i]);
        (*jenv)->SetObjectArrayElement(jenv, jresult, i, temp_string);
        (*jenv)->DeleteLocalRef(jenv, temp_string);
        FREE(result[i]);
        result[i] = NULL;
      }
      FREE(result);
      result = NULL;
    }       
  }
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_getSizeAllLinesOfScilabHistory(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)getSizeAllLinesOfScilabHistory();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_setSearchedTokenInScilabHistory(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jboolean jresult = 0 ;
  char *arg1 = (char *) 0 ;
  BOOL result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = setSearchedTokenInScilabHistory(arg1);
  {
    if (result) jresult = JNI_TRUE   ;
    else  jresult = JNI_FALSE   ;
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_resetSearchedTokenInScilabHistory(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  BOOL result;
  
  (void)jenv;
  (void)jcls;
  result = resetSearchedTokenInScilabHistory();
  {
    if (result) jresult = JNI_TRUE   ;
    else  jresult = JNI_FALSE   ;
  }
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_getSearchedTokenInScilabHistory(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)getSearchedTokenInScilabHistory();
  {
    if (result != NULL)
    {
      jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
      FREE(result);
      result = NULL;
    }       
  }
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_getPreviousLineInScilabHistory(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)getPreviousLineInScilabHistory();
  {
    if (result != NULL)
    {
      jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
      FREE(result);
      result = NULL;
    }       
  }
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_getNextLineInScilabHistory(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)getNextLineInScilabHistory();
  {
    if (result != NULL)
    {
      jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
      FREE(result);
      result = NULL;
    }       
  }
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_getNumberOfLinesInScilabHistory(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)getNumberOfLinesInScilabHistory();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_setSaveConsecutiveDuplicateLinesInScilabHistory(JNIEnv *jenv, jclass jcls, jboolean jarg1) {
  BOOL arg1 ;
  
  (void)jenv;
  (void)jcls;
  {
    if (jarg1 == JNI_TRUE) arg1 = TRUE;
    else arg1 = FALSE;
  }
  setSaveConsecutiveDuplicateLinesInScilabHistory(arg1);
}


SWIGEXPORT jboolean JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_getSaveConsecutiveDuplicateLinesInScilabHistory(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  BOOL result;
  
  (void)jenv;
  (void)jcls;
  result = getSaveConsecutiveDuplicateLinesInScilabHistory();
  {
    if (result) jresult = JNI_TRUE   ;
    else  jresult = JNI_FALSE   ;
  }
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_setAfterHowManyLinesScilabHistoryIsSaved(JNIEnv *jenv, jclass jcls, jint jarg1) {
  int arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  setAfterHowManyLinesScilabHistoryIsSaved(arg1);
}


SWIGEXPORT jint JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_getAfterHowManyLinesScilabHistoryIsSaved(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)getAfterHowManyLinesScilabHistoryIsSaved();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_getNthLineInScilabHistory(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jstring jresult = 0 ;
  int arg1 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (char *)getNthLineInScilabHistory(arg1);
  {
    if (result != NULL)
    {
      jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
      FREE(result);
      result = NULL;
    }       
  }
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_deleteNthLineScilabHistory(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jboolean jresult = 0 ;
  int arg1 ;
  BOOL result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = deleteNthLineScilabHistory(arg1);
  {
    if (result) jresult = JNI_TRUE   ;
    else  jresult = JNI_FALSE   ;
  }
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_getSizeScilabHistory(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)getSizeScilabHistory();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_historyIsEnabled(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  BOOL result;
  
  (void)jenv;
  (void)jcls;
  result = historyIsEnabled();
  {
    if (result) jresult = JNI_TRUE   ;
    else  jresult = JNI_FALSE   ;
  }
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_setSizeMaxScilabHistory(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jboolean jresult = 0 ;
  int arg1 ;
  BOOL result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = setSizeMaxScilabHistory(arg1);
  {
    if (result) jresult = JNI_TRUE   ;
    else  jresult = JNI_FALSE   ;
  }
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_InitializeHistoryManager(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  BOOL result;
  
  (void)jenv;
  (void)jcls;
  result = InitializeHistoryManager();
  {
    if (result) jresult = JNI_TRUE   ;
    else  jresult = JNI_FALSE   ;
  }
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_scilab_modules_history_1manager_HistoryManagementJNI_TerminateHistoryManager(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  BOOL result;
  
  (void)jenv;
  (void)jcls;
  result = TerminateHistoryManager();
  {
    if (result) jresult = JNI_TRUE   ;
    else  jresult = JNI_FALSE   ;
  }
  return jresult;
}


#ifdef __cplusplus
}
#endif
