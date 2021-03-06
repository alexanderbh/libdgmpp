/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.dgmpp;

public class GroupIDs {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected GroupIDs(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(GroupIDs obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        dgmppJNI.delete_GroupIDs(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public GroupIDs() {
    this(dgmppJNI.new_GroupIDs__SWIG_0(), true);
  }

  public GroupIDs(long n) {
    this(dgmppJNI.new_GroupIDs__SWIG_1(n), true);
  }

  public long size() {
    return dgmppJNI.GroupIDs_size(swigCPtr, this);
  }

  public long capacity() {
    return dgmppJNI.GroupIDs_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    dgmppJNI.GroupIDs_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return dgmppJNI.GroupIDs_isEmpty(swigCPtr, this);
  }

  public void clear() {
    dgmppJNI.GroupIDs_clear(swigCPtr, this);
  }

  public void add(int x) {
    dgmppJNI.GroupIDs_add(swigCPtr, this, x);
  }

  public int get(int i) {
    return dgmppJNI.GroupIDs_get(swigCPtr, this, i);
  }

  public void set(int i, int val) {
    dgmppJNI.GroupIDs_set(swigCPtr, this, i, val);
  }

}
