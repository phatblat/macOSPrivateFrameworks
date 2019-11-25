//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, SignpostCAInstrumentationProcessor;

@interface SignpostIntervalBuilder : NSObject
{
    BOOL _buildAnimationCompositeIntervalTimelines;
    BOOL _compositeIntervalIsInFlight;
    BOOL _foundMacOSSpecificData;
    BOOL _foundIPhoneOSSpecificData;
    BOOL _foundCAWSInMemoryData;
    NSMutableDictionary *_systemwideDictionary;
    NSMutableDictionary *_processwideDictionary;
    NSMutableDictionary *_threadwideDictionary;
    NSMapTable *_outstandingAnimationState;
    unsigned long long _totalCompositeIntervalCount;
    NSObject<OS_dispatch_queue> *_syncQueue;
    unsigned long long _previousMCT;
    SignpostCAInstrumentationProcessor *_caInstrumentationProcessor;
}

+ (id)_framerateCalculationWhitelist;
+ (BOOL)_filterPassesRequiredSCForFramerate:(id)arg1;
@property(readonly, nonatomic) SignpostCAInstrumentationProcessor *caInstrumentationProcessor; // @synthesize caInstrumentationProcessor=_caInstrumentationProcessor;
@property(nonatomic) unsigned long long previousMCT; // @synthesize previousMCT=_previousMCT;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) BOOL foundCAWSInMemoryData; // @synthesize foundCAWSInMemoryData=_foundCAWSInMemoryData;
@property(nonatomic) BOOL foundIPhoneOSSpecificData; // @synthesize foundIPhoneOSSpecificData=_foundIPhoneOSSpecificData;
@property(nonatomic) BOOL foundMacOSSpecificData; // @synthesize foundMacOSSpecificData=_foundMacOSSpecificData;
@property(nonatomic) BOOL compositeIntervalIsInFlight; // @synthesize compositeIntervalIsInFlight=_compositeIntervalIsInFlight;
@property(nonatomic) unsigned long long totalCompositeIntervalCount; // @synthesize totalCompositeIntervalCount=_totalCompositeIntervalCount;
@property(retain, nonatomic) NSMapTable *outstandingAnimationState; // @synthesize outstandingAnimationState=_outstandingAnimationState;
@property(readonly, nonatomic) NSMutableDictionary *threadwideDictionary; // @synthesize threadwideDictionary=_threadwideDictionary;
@property(readonly, nonatomic) NSMutableDictionary *processwideDictionary; // @synthesize processwideDictionary=_processwideDictionary;
@property(readonly, nonatomic) NSMutableDictionary *systemwideDictionary; // @synthesize systemwideDictionary=_systemwideDictionary;
@property(nonatomic) BOOL buildAnimationCompositeIntervalTimelines; // @synthesize buildAnimationCompositeIntervalTimelines=_buildAnimationCompositeIntervalTimelines;
- (void).cxx_destruct;
- (id)doneProcessing;
- (id)processEndEvent:(id)arg1 isAnimation:(char *)arg2;
- (id)_animationWithBegin:(id)arg1 endEvent:(id)arg2;
- (void)_cleanupStateForBeginEvent:(id)arg1;
- (BOOL)_handleCommonSpecialIntervals:(id)arg1;
- (BOOL)_handleIPhoneOsSpecialEvents:(id)arg1;
- (BOOL)_handleIPhoneOsSpecialIntervals:(id)arg1;
- (BOOL)_handleMacOsSpecialIntervals:(id)arg1;
- (void)_processCompositeInterval:(id)arg1;
- (void)processEmittedEvent:(id)arg1;
- (BOOL)processBeginEvent:(id)arg1;
- (void)_startTrackingAnimationWithBeginEvent:(id)arg1;
- (void)_initializeMapsIfNecessary;
- (BOOL)_hasOutstandingAnimations;
- (BOOL)isMetadataSubsystem:(id)arg1 category:(id)arg2;
- (BOOL)signpostIsAnimationMetadata:(id)arg1;
- (BOOL)signpostIsCompositeLoop:(id)arg1;
- (BOOL)isCompositeLoopSubsystem:(id)arg1 category:(id)arg2;
- (BOOL)_trackBegin:(id)arg1;
- (id)matchingEventForEvent:(id)arg1 removeIfFound:(BOOL)arg2;
- (id)_matchingEventForEvent:(id)arg1 removeIfFound:(BOOL)arg2;
- (BOOL)timestampIndicatesDeviceReboot:(unsigned long long)arg1;
- (void)dropAccumulatedState;
- (id)init;

@end

