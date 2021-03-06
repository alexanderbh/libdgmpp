/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.dgmpp;

public class States {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected States(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(States obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        dgmppJNI.delete_States(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public States() {
    this(dgmppJNI.new_States__SWIG_0(), true);
  }

  public States(long n) {
    this(dgmppJNI.new_States__SWIG_1(n), true);
  }

  public long size() {
    return dgmppJNI.States_size(swigCPtr, this);
  }

  public long capacity() {
    return dgmppJNI.States_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    dgmppJNI.States_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return dgmppJNI.States_isEmpty(swigCPtr, this);
  }

  public void clear() {
    dgmppJNI.States_clear(swigCPtr, this);
  }

  public void add(int x) {
    dgmppJNI.States_add(swigCPtr, this, x);
  }

  public int get(int i) {
    return dgmppJNI.States_get(swigCPtr, this, i);
  }

  public void set(int i, int val) {
    dgmppJNI.States_set(swigCPtr, this, i, val);
  }

}
