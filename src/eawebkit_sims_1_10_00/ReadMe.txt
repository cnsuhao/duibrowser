***********************************************************************
***********************************************************************
2011��6��17�գ�

��EAWebkit
	���µ�EAWebKit-1.21.00.darkspore�汾
	
����Ҫ����������Ŀ¼��
	1. EAWebKitSupportPackages
	2. include
	3. source
	4. Webkit-owb
	��projectsĿ¼�µĹ����ļ�(*.vcproj)û�и���
	
�����������޸ĵ��������ļ�
	1. "include/EAWebKit/EAWebKitConfig.h"
��98��
#ifndef EAWEBKIT_DEBUG
    #if defined(EA_DEBUG) || defined(_DEBUG)
        #define EAWEBKIT_DEBUG 0
    #else
        #define EAWEBKIT_DEBUG 0
    #endif
#endif	

	2. "Webkit-owb/WebCore/page/FrameTree.cpp"
��171��
	// FIXME: this following coding is disabled by achellies to implement to disable the new window created
#if 1
	if (name == "_blank")
		return parent() ? parent() : m_thisFrame;
#else
    // Since "_blank" should never be any frame's name, the following just amounts to an optimization.
    if (name == "_blank")
        return 0;
#endif

	3. "Webkit-owb/BAL/Base/wtf/Platform.h"
��257��
#if !USE(CASQT_UNICODE)
#define WTF_USE_ICU_UNICODE 1
#endif

	4. "Webkit-owb/BAL/OWBAL/Concretizations/Internationalization/WK/BCTextEncodingWK.cpp"
��114��
#elif USE(CASQT_UNICODE)
	// added by achellies
    //OwnPtr<TextCodec> textCodec = newTextCodec(*this);
    return newTextCodec(*this)->encode(characters, length, handling);
#endif

	5. "Webkit-owb/BAL/OWBAL/Concretizations/Internationalization/WK/BCTextEncodingRegistryWK.cpp" 
��182��
    TextCodecUTF8::registerEncodingNames(addToTextEncodingNameMap);
    TextCodecUTF8::registerCodecs(addToTextCodecMap);

��191��
#if USE(CASQT_UNICODE)
	// added by achellies
    TextCodecCasQt::registerEncodingNames(addToTextEncodingNameMap);
    TextCodecCasQt::registerCodecs(addToTextCodecMap);
#endif
	


***********************************************************************
***********************************************************************
2011��6��16�գ�

��EAWebkit
	���µ�eawebkit_monopolystreets_1_14_01�汾

����Ҫ����������Ŀ¼��
	1. doc
	2. EAWebKitSupportPackages
	3. include
	4. licenses
	5. source
	6. Webkit-owb
	��projectsĿ¼�µĹ����ļ�(*.vcproj)û�и���

�����������޸ĵ��������ļ�
	1. "Webkit-owb/WebCore/page/FrameTree.cpp"
��171��
	// FIXME: this following coding is disabled by achellies to implement to disable the new window created
#if 1
	if (name == "_blank")
		return parent() ? parent() : m_thisFrame;
#else
    // Since "_blank" should never be any frame's name, the following just amounts to an optimization.
    if (name == "_blank")
        return 0;
#endif

	2. "include/EAWebKit/EAWebKitConfig.h"
��98��
#ifndef EAWEBKIT_DEBUG
    #if defined(EA_DEBUG) || defined(_DEBUG)
        #define EAWEBKIT_DEBUG 0
    #else
        #define EAWEBKIT_DEBUG 0
    #endif
#endif

	3. "source/EAWebKitFileSystem.cpp"
��152��
#ifdef _MSC_VER
	pFileInfo->mpFile = fopen(path, openFlags & kWrite ? "wb" : "rb");
#else
	pFileInfo->mpFile = fopen(path, openFlags & kWrite ? "w" : "r");
#endif

	4. "Webkit-owb/BAL/Base/wtf/Platform.h"
��257��
#if !USE(CASQT_UNICODE)
#define WTF_USE_ICU_UNICODE 1
#endif

	5. "Webkit-owb/BAL/OWBAL/Concretizations/Internationalization/WK/BCTextEncodingWK.cpp"
��114��
#elif USE(CASQT_UNICODE)
	// added by achellies
    //OwnPtr<TextCodec> textCodec = newTextCodec(*this);
    return newTextCodec(*this)->encode(characters, length, handling);
#endif

	6. "Webkit-owb/BAL/OWBAL/Concretizations/Internationalization/WK/BCTextEncodingRegistryWK.cpp" 
��182��
    TextCodecUTF8::registerEncodingNames(addToTextEncodingNameMap);
    TextCodecUTF8::registerCodecs(addToTextCodecMap);

��191��
#if USE(CASQT_UNICODE)
	// added by achellies
    TextCodecCasQt::registerEncodingNames(addToTextEncodingNameMap);
    TextCodecCasQt::registerCodecs(addToTextCodecMap);
#endif

