/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class qty_player_Mp3Decoder */

#ifndef _Included_qty_player_Mp3Decoder
#define _Included_qty_player_Mp3Decoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     qty_player_Mp3Decoder
 * Method:    open
 * Signature: (Ljava/io/File;)V
 */
JNIEXPORT void JNICALL Java_qty_player_Mp3Decoder_open
  (JNIEnv *, jobject, jobject);

/*
 * Class:     qty_player_Mp3Decoder
 * Method:    decode
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_qty_player_Mp3Decoder_decode
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     qty_player_Mp3Decoder
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_qty_player_Mp3Decoder_close
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif