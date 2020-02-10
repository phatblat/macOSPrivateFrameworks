//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMapTable, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface QLServerSatellite : NSObject
{
    NSUUID *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSMapTable *_requests;
    NSMapTable *_requestReplyBlocks;
    NSArray *_generatorIDs;
    NSString *_sandboxVariant;
    NSString *_customName;
    BOOL _shouldDie;
    BOOL _forExternalGenerators;
    int _satelliteError;
    BOOL _forThumbnailAgent;
}

@property(readonly) BOOL forExternalGenerators; // @synthesize forExternalGenerators=_forExternalGenerators;
@property BOOL forThumbnailAgent; // @synthesize forThumbnailAgent=_forThumbnailAgent;
@property(copy) NSString *customName; // @synthesize customName=_customName;
@property(copy) NSString *sandboxVariant; // @synthesize sandboxVariant=_sandboxVariant;
@property(retain) NSArray *generatorIDs; // @synthesize generatorIDs=_generatorIDs;
- (id)description;
- (void)_handleMessage:(id)arg1;
- (void)_handleGenerationComplete:(id)arg1;
- (void)_handleUsageAlertMessage:(id)arg1;
- (void)_handleGenerationGotMoreData:(id)arg1;
- (void)_handleGenerationStartNewAttachment:(id)arg1;
- (void)_handleGenerationDidStart:(id)arg1;
- (void)_handleGenerationWillBeginMessage:(id)arg1;
- (int)_handleHangProblem;
- (void)_handleUsageProblem:(int)arg1;
-     // Error parsing type: c24@0:8^{__QLRequest={__CFRuntimeBase=QAQ}@I{?=[8I]}^{__CFURL}^{__CFURL}^{__CFURL}^v^{__CFString}^{__CFDictionary}^{__CFString}^{__CFString}C^{__QLGenerator}^{__CFDictionary}^{CGContext}^?^v{?=q^?^?^?^?}QCCCCCCCC}16, name: hasRequest:
-     // Error parsing type: v24@0:8^{__QLRequest={__CFRuntimeBase=QAQ}@I{?=[8I]}^{__CFURL}^{__CFURL}^{__CFURL}^v^{__CFString}^{__CFDictionary}^{__CFString}^{__CFString}C^{__QLGenerator}^{__CFDictionary}^{CGContext}^?^v{?=q^?^?^?^?}QCCCCCCCC}16, name: cancelRequest:
-     // Error parsing type: v32@0:8^{__QLRequest={__CFRuntimeBase=QAQ}@I{?=[8I]}^{__CFURL}^{__CFURL}^{__CFURL}^v^{__CFString}^{__CFDictionary}^{__CFString}^{__CFString}C^{__QLGenerator}^{__CFDictionary}^{CGContext}^?^v{?=q^?^?^?^?}QCCCCCCCC}16@24, name: _handleRequestReplyIfNeeded:fromMessage:
-     // Error parsing type: v32@0:8^{__QLRequest={__CFRuntimeBase=QAQ}@I{?=[8I]}^{__CFURL}^{__CFURL}^{__CFURL}^v^{__CFString}^{__CFDictionary}^{__CFString}^{__CFString}C^{__QLGenerator}^{__CFDictionary}^{CGContext}^?^v{?=q^?^?^?^?}QCCCCCCCC}16@?24, name: enqueueRequest:completionBlock:
-     // Error parsing type: v24@0:8^{__QLRequest={__CFRuntimeBase=QAQ}@I{?=[8I]}^{__CFURL}^{__CFURL}^{__CFURL}^v^{__CFString}^{__CFDictionary}^{__CFString}^{__CFString}C^{__QLGenerator}^{__CFDictionary}^{CGContext}^?^v{?=q^?^?^?^?}QCCCCCCCC}16, name: _sendSetupMessageWithInitialRequest:
-     // Error parsing type: v24@0:8^{__QLRequest={__CFRuntimeBase=QAQ}@I{?=[8I]}^{__CFURL}^{__CFURL}^{__CFURL}^v^{__CFString}^{__CFDictionary}^{__CFString}^{__CFString}C^{__QLGenerator}^{__CFDictionary}^{CGContext}^?^v{?=q^?^?^?^?}QCCCCCCCC}16, name: _bumpFileAccessTime:
- (BOOL)_connect;
-     // Error parsing type: v28@0:8^{__QLRequest={__CFRuntimeBase=QAQ}@I{?=[8I]}^{__CFURL}^{__CFURL}^{__CFURL}^v^{__CFString}^{__CFDictionary}^{__CFString}^{__CFString}C^{__QLGenerator}^{__CFDictionary}^{CGContext}^?^v{?=q^?^?^?^?}QCCCCCCCC}16c24, name: _requestDone:success:
- (void)_killSatellite;
- (void)_connectionLost;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 forExternalGenerators:(BOOL)arg2;

@end
