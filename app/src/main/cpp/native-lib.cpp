#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_hello_sangn_helloworld_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello Mother Fucker";
    return env->NewStringUTF(hello.c_str());
}
