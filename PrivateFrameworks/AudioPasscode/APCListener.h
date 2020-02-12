//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APCListenerEngine, APCListenerResultData, AUPasscodeCodecConfiguration, NSObject<OS_dispatch_queue>;

@interface APCListener : NSObject
{
    AUPasscodeCodecConfiguration *_codecConfig;
    APCListenerEngine *_listenerEngine;
    APCListenerResultData *_resultData;
    CDUnknownBlockType _retrievedDataHandler;
    CDUnknownBlockType _invalidationHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (struct NSData *)capabilityData;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType retrievedDataHandler; // @synthesize retrievedDataHandler=_retrievedDataHandler;
- (void).cxx_destruct;
- (BOOL)getResultData:(id *)arg1;
- (void)stopListening;
- (void)startListeningWithError:(id *)arg1;
- (void)startListening;
- (id)initWithCodecConfiguration:(id)arg1;
- (id)initWithConfigurationData:(struct NSData *)arg1;
- (id)init;

@end

