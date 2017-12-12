/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.scilab.modules.types;


/* It is generated code. Disable checkstyle */
//CHECKSTYLE:OFF
 /**
   * Connector for Javasci v2.
   * This class should <b>not</b> be used directly
   * @see org.scilab.modules.javasci.Scilab
   * @author DIGITEO - Sylvestre LEDRU
   */
class GetScilabVariableJNI {

  /**
    * Constructor
    */
  protected GetScilabVariableJNI() {
    throw new UnsupportedOperationException();
  }

  static {
    try {
        if (System.getProperty("os.name").toLowerCase().contains("windows")) {
           System.loadLibrary("typesjni");
        } else {
           System.loadLibrary("scilab");
        }
    } catch (SecurityException e) {
        System.err.println("A security manager exists and does not allow the loading of the specified dynamic library :");
        e.printStackTrace(System.err);
    } catch (UnsatisfiedLinkError e)    {
        System.err.println("The native library libscilab does not exist or cannot be found.");
        e.printStackTrace(System.err);
    }
  }

  public final static native void getScilabVariable(String jarg1, int jarg2, int jarg3);
  public final static native void getScilabVariableAsReference(String jarg1, int jarg2);
}
