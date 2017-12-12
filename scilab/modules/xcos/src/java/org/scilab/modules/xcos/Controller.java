/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.scilab.modules.xcos;

public class Controller {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected Controller(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Controller obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        JavaControllerJNI.delete_Controller(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static void end_simulation() {
    JavaControllerJNI.Controller_end_simulation();
  }

  public Controller() {
    this(JavaControllerJNI.new_Controller(), true);
  }

  public long createObject(Kind k) {
    return JavaControllerJNI.Controller_createObject(swigCPtr, this, k.ordinal());
  }

  public long referenceObject(long uid) {
    return JavaControllerJNI.Controller_referenceObject(swigCPtr, this, uid);
  }

  public void deleteObject(long uid) {
    JavaControllerJNI.Controller_deleteObject(swigCPtr, this, uid);
  }

  public long cloneObject(long uid, boolean cloneChildren, boolean clonePorts) {
    return JavaControllerJNI.Controller_cloneObject(swigCPtr, this, uid, cloneChildren, clonePorts);
  }

  public Kind getKind(long uid) {
    return Kind.class.getEnumConstants()[JavaControllerJNI.Controller_getKind(swigCPtr, this, uid)];
  }

  public VectorOfScicosID getAll(Kind k) {
    return new VectorOfScicosID(JavaControllerJNI.Controller_getAll(swigCPtr, this, k.ordinal()), true);
  }

  public void sortAndFillKind(VectorOfScicosID uids, VectorOfInt kind) {
    JavaControllerJNI.Controller_sortAndFillKind(swigCPtr, this, VectorOfScicosID.getCPtr(uids), uids, VectorOfInt.getCPtr(kind), kind);
  }

  public boolean getObjectProperty(long uid, Kind k, ObjectProperties p, double[] v) {
    return JavaControllerJNI.Controller_getObjectProperty__SWIG_1(swigCPtr, this, uid, k.ordinal(), p.ordinal(), v);
  }

  public boolean getObjectProperty(long uid, Kind k, ObjectProperties p, int[] v) {
    return JavaControllerJNI.Controller_getObjectProperty__SWIG_2(swigCPtr, this, uid, k.ordinal(), p.ordinal(), v);
  }

  public boolean getObjectProperty(long uid, Kind k, ObjectProperties p, boolean[] v) {
    return JavaControllerJNI.Controller_getObjectProperty__SWIG_3(swigCPtr, this, uid, k.ordinal(), p.ordinal(), v);
  }

  public boolean getObjectProperty(long uid, Kind k, ObjectProperties p, String[] v) {
    return JavaControllerJNI.Controller_getObjectProperty__SWIG_4(swigCPtr, this, uid, k.ordinal(), p.ordinal(), v);
  }

  public boolean getObjectProperty(long uid, Kind k, ObjectProperties p, long[] v) {
    return JavaControllerJNI.Controller_getObjectProperty__SWIG_5(swigCPtr, this, uid, k.ordinal(), p.ordinal(), v);
  }

  public boolean getObjectProperty(long uid, Kind k, ObjectProperties p, VectorOfDouble v) {
    return JavaControllerJNI.Controller_getObjectProperty__SWIG_6(swigCPtr, this, uid, k.ordinal(), p.ordinal(), VectorOfDouble.getCPtr(v), v);
  }

  public boolean getObjectProperty(long uid, Kind k, ObjectProperties p, VectorOfInt v) {
    return JavaControllerJNI.Controller_getObjectProperty__SWIG_7(swigCPtr, this, uid, k.ordinal(), p.ordinal(), VectorOfInt.getCPtr(v), v);
  }

  public boolean getObjectProperty(long uid, Kind k, ObjectProperties p, VectorOfBool v) {
    return JavaControllerJNI.Controller_getObjectProperty__SWIG_8(swigCPtr, this, uid, k.ordinal(), p.ordinal(), VectorOfBool.getCPtr(v), v);
  }

  public boolean getObjectProperty(long uid, Kind k, ObjectProperties p, VectorOfString v) {
    return JavaControllerJNI.Controller_getObjectProperty__SWIG_9(swigCPtr, this, uid, k.ordinal(), p.ordinal(), VectorOfString.getCPtr(v), v);
  }

  public boolean getObjectProperty(long uid, Kind k, ObjectProperties p, VectorOfScicosID v) {
    return JavaControllerJNI.Controller_getObjectProperty__SWIG_10(swigCPtr, this, uid, k.ordinal(), p.ordinal(), VectorOfScicosID.getCPtr(v), v);
  }

  public UpdateStatus setObjectProperty(long uid, Kind k, ObjectProperties p, double v) {
    return UpdateStatus.class.getEnumConstants()[JavaControllerJNI.Controller_setObjectProperty__SWIG_1(swigCPtr, this, uid, k.ordinal(), p.ordinal(), v)];
  }

  public UpdateStatus setObjectProperty(long uid, Kind k, ObjectProperties p, int v) {
    return UpdateStatus.class.getEnumConstants()[JavaControllerJNI.Controller_setObjectProperty__SWIG_2(swigCPtr, this, uid, k.ordinal(), p.ordinal(), v)];
  }

  public UpdateStatus setObjectProperty(long uid, Kind k, ObjectProperties p, boolean v) {
    return UpdateStatus.class.getEnumConstants()[JavaControllerJNI.Controller_setObjectProperty__SWIG_3(swigCPtr, this, uid, k.ordinal(), p.ordinal(), v)];
  }

  public UpdateStatus setObjectProperty(long uid, Kind k, ObjectProperties p, long v) {
    return UpdateStatus.class.getEnumConstants()[JavaControllerJNI.Controller_setObjectProperty__SWIG_4(swigCPtr, this, uid, k.ordinal(), p.ordinal(), v)];
  }

  public UpdateStatus setObjectProperty(long uid, Kind k, ObjectProperties p, String v) {
    return UpdateStatus.class.getEnumConstants()[JavaControllerJNI.Controller_setObjectProperty__SWIG_5(swigCPtr, this, uid, k.ordinal(), p.ordinal(), v)];
  }

  public UpdateStatus setObjectProperty(long uid, Kind k, ObjectProperties p, VectorOfDouble v) {
    return UpdateStatus.class.getEnumConstants()[JavaControllerJNI.Controller_setObjectProperty__SWIG_6(swigCPtr, this, uid, k.ordinal(), p.ordinal(), VectorOfDouble.getCPtr(v), v)];
  }

  public UpdateStatus setObjectProperty(long uid, Kind k, ObjectProperties p, VectorOfInt v) {
    return UpdateStatus.class.getEnumConstants()[JavaControllerJNI.Controller_setObjectProperty__SWIG_7(swigCPtr, this, uid, k.ordinal(), p.ordinal(), VectorOfInt.getCPtr(v), v)];
  }

  public UpdateStatus setObjectProperty(long uid, Kind k, ObjectProperties p, VectorOfBool v) {
    return UpdateStatus.class.getEnumConstants()[JavaControllerJNI.Controller_setObjectProperty__SWIG_8(swigCPtr, this, uid, k.ordinal(), p.ordinal(), VectorOfBool.getCPtr(v), v)];
  }

  public UpdateStatus setObjectProperty(long uid, Kind k, ObjectProperties p, VectorOfString v) {
    return UpdateStatus.class.getEnumConstants()[JavaControllerJNI.Controller_setObjectProperty__SWIG_9(swigCPtr, this, uid, k.ordinal(), p.ordinal(), VectorOfString.getCPtr(v), v)];
  }

  public UpdateStatus setObjectProperty(long uid, Kind k, ObjectProperties p, VectorOfScicosID v) {
    return UpdateStatus.class.getEnumConstants()[JavaControllerJNI.Controller_setObjectProperty__SWIG_10(swigCPtr, this, uid, k.ordinal(), p.ordinal(), VectorOfScicosID.getCPtr(v), v)];
  }

}
