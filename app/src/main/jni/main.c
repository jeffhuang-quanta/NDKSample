#include "com_corp_quanta_ndksample_MainActivity.h"

JNIEXPORT jstring JNICALL Java_com_corp_quanta_ndksample_MainActivity_getStringFormNative
  (JNIEnv * env, jobject obj)
  {
    return (*env)->NewStringUTF(env,"Hello From JNI!");
  }

