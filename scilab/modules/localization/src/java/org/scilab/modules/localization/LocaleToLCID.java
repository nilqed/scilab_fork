/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.scilab.modules.localization;


 /** 
   * @author Allan CORNET
   * @copyright DIGITEO 2010
   */
public class LocaleToLCID {

 /**
   * Constructor
   */
 protected LocaleToLCID() {
    throw new UnsupportedOperationException();
 }
  public static String convert(String pStrLocale) {
    return LocaleToLCIDJNI.convert(pStrLocale);
  }

}
