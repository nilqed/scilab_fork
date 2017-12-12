/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.scilab.modules.graphic_objects;

public class PolylineDataJNI {

  static {
    try {
        System.loadLibrary("scigraphic_objects");
    } catch (UnsatisfiedLinkError e) {
      System.err.println("Native library failed to load. \n" + e);
      System.exit(1);
    }
  }

  public final static native Object getDataX(int jarg1);
  public final static native Object getDataY(int jarg1);
  public final static native Object getDataZ(int jarg1);
  public final static native Object getShiftX(int jarg1);
  public final static native Object getShiftY(int jarg1);
  public final static native Object getShiftZ(int jarg1);
  public final static native int isZCoordSet(int jarg1);
  public final static native int isXShiftSet(int jarg1);
  public final static native int isYShiftSet(int jarg1);
  public final static native int isZShiftSet(int jarg1);
  public final static native int createPolylineData(int jarg1, int jarg2);
  public final static native int translatePolyline(int jarg1, double jarg2, double jarg3, double jarg4, int jarg5, int jarg6, int jarg7);
  public final static native int translatePoint(int jarg1, int jarg2, double jarg3, double jarg4, double jarg5, int jarg6, int jarg7, int jarg8);
  public final static native int setPointValue(int jarg1, int jarg2, double jarg3, double jarg4, double jarg5);
  public final static native int insertPoint(int jarg1, int jarg2, double jarg3, double jarg4, double jarg5);
  public final static native int removePoint(int jarg1, int jarg2);
}
