//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class _EARAudioAnalytics, _EARSpeechRecognition;

@interface _EARSpeechRecognitionResultPackage : NSObject <NSCopying>
{
    BOOL _recognitionIsFormatted;
    BOOL _isFinal;
    _EARSpeechRecognition *_recognition;
    _EARSpeechRecognition *_preITNRecognition;
    _EARAudioAnalytics *_audioAnalytics;
}

@property(readonly, copy, nonatomic) _EARAudioAnalytics *audioAnalytics; // @synthesize audioAnalytics=_audioAnalytics;
@property(readonly, nonatomic) BOOL isFinal; // @synthesize isFinal=_isFinal;
@property(readonly, nonatomic) BOOL recognitionIsFormatted; // @synthesize recognitionIsFormatted=_recognitionIsFormatted;
@property(readonly, copy, nonatomic) _EARSpeechRecognition *preITNRecognition; // @synthesize preITNRecognition=_preITNRecognition;
@property(readonly, copy, nonatomic) _EARSpeechRecognition *recognition; // @synthesize recognition=_recognition;
- (void).cxx_destruct;
- (id)nBestResults;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4;

@end

