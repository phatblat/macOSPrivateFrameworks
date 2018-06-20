//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFDictationDelegate.h"
#import "CXCallObserverDelegate.h"

@class AFDictationConnection, CXCallObserver, NSLocale, NSOperationQueue, NSString;

@interface SFSpeechRecognizer : NSObject <CXCallObserverDelegate, AFDictationDelegate>
{
    AFDictationConnection *_dictationConnection;
    NSString *_languageCode;
    CXCallObserver *_callObserver;
    id <NSObject> _facetimeObserver;
    id <NSObject> _foregroundObserver;
    id <NSObject> _preferencesObserver;
    NSLocale *_locale;
    id <SFSpeechRecognizerDelegate> _delegate;
    long long _defaultTaskHint;
    NSOperationQueue *_queue;
}

+ (void)_fetchSupportedForcedOfflineLocalesWithCompletion:(CDUnknownBlockType)arg1;
+ (void)requestAuthorization:(CDUnknownBlockType)arg1;
+ (long long)authorizationStatus;
+ (id)supportedLocales;
+ (void)initialize;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) long long defaultTaskHint; // @synthesize defaultTaskHint=_defaultTaskHint;
@property(nonatomic) __weak id <SFSpeechRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (void)_informDelegateOfPreferencesChange;
- (void)_informDelegateOfAvailabilityChange;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (id)recognitionTaskWithRequest:(id)arg1 delegate:(id)arg2;
- (id)recognitionTaskWithRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (BOOL)_isInternalTaskHint:(long long)arg1;
- (void)_requestOfflineDictationSupportWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=_isAvailableForForcedOfflineRecognition) BOOL _availableForForcedOfflineRecognition;
@property(readonly, nonatomic, getter=isAvailable) BOOL available;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

