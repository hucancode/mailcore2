/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_libmailcore_Attachment */

#ifndef _Included_com_libmailcore_Attachment
#define _Included_com_libmailcore_Attachment
#ifdef __cplusplus
extern "C" {
#endif
#undef com_libmailcore_Attachment_serialVersionUID
#define com_libmailcore_Attachment_serialVersionUID 1LL
/*
 * Class:     com_libmailcore_Attachment
 * Method:    mimeTypeForFilename
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_Attachment_mimeTypeForFilename
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_libmailcore_Attachment
 * Method:    attachmentWithContentsOfFile
 * Signature: (Ljava/lang/String;)Lcom/libmailcore/Attachment;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_Attachment_attachmentWithContentsOfFile
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_libmailcore_Attachment
 * Method:    attachmentWithData
 * Signature: (Ljava/lang/String;[B)Lcom/libmailcore/Attachment;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_Attachment_attachmentWithData
  (JNIEnv *, jclass, jstring, jbyteArray);

/*
 * Class:     com_libmailcore_Attachment
 * Method:    attachmentWithHTMLString
 * Signature: (Ljava/lang/String;)Lcom/libmailcore/Attachment;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_Attachment_attachmentWithHTMLString
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_libmailcore_Attachment
 * Method:    attachmentWithRFC822Message
 * Signature: ([B)Lcom/libmailcore/Attachment;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_Attachment_attachmentWithRFC822Message
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_libmailcore_Attachment
 * Method:    attachmentWithText
 * Signature: (Ljava/lang/String;)Lcom/libmailcore/Attachment;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_Attachment_attachmentWithText
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_libmailcore_Attachment
 * Method:    data
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_libmailcore_Attachment_data
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_Attachment
 * Method:    setData
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_Attachment_setData
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_libmailcore_Attachment
 * Method:    decodedString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_Attachment_decodedString
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
