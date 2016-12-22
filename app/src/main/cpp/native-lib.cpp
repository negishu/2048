#include <jni.h>
#include <string>
// just for space saver for now... unsed this right now.
extern "C" jstring Java_com_negi_shu_game2048_MainActivity_stringFromJNI(JNIEnv *env,
                                                                         jobject /* this */) {
    std::string hello = "Hello from 2048";
    return env->NewStringUTF(hello.c_str());
}
