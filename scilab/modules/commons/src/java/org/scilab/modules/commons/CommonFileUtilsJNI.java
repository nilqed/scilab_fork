/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.scilab.modules.commons;


/* It is generated code. Disable checkstyle */
//CHECKSTYLE:OFF
 /** 
   * Some file utils
   * @author Calixte DENIZET
   * @copyright DIGITEO 2011
   */
public class CommonFileUtilsJNI {

  /**
    * Constructor
    */
  protected CommonFileUtilsJNI() {
    throw new UnsupportedOperationException();
  }

  static {
    try {
        System.loadLibrary("scicommons");
    } catch (SecurityException e) {
        System.err.println("A security manager exists and does not allow the loading of the specified dynamic library.");
        System.err.println(e.getLocalizedMessage());
        System.exit(-1);
    } catch (UnsatisfiedLinkError e)    {
           System.err.println("The native library scicommons does not exist or cannot be found.");
        if (System.getenv("CONTINUE_ON_JNI_ERROR") == null) {
           System.err.println(e.getLocalizedMessage());
           System.err.println("Current java.library.path is : "+System.getProperty("java.library.path"));
           System.exit(-1);
        }else{
           System.err.println("Continuing anyway because of CONTINUE_ON_JNI_ERROR");
        }
    }
  }

  public final static native int isEmptyDirectory(String jarg1);
  public final static native String getCWD();
}