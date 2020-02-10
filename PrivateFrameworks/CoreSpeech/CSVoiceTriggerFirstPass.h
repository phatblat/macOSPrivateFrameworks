//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSActivationEventNotifierDelegate.h"
#import "CSKeywordAnalyzerNDAPIScoreDelegate.h"
#import "CSSpeechManagerDelegate.h"
#import "CSStateMachineDelegate.h"

@class CSAsset, CSPolicy, CSSpeechManager, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface CSVoiceTriggerFirstPass : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSActivationEventNotifierDelegate, CSStateMachineDelegate, CSSpeechManagerDelegate>
{
    BOOL _voiceTriggerEnabled;
    BOOL _hasTriggerPending;
    float _firstPassThreshold;
    float _bestScore;
    float _masterChannelScoreBoost;
    id <CSVoiceTriggerFirstPassDelegate> _delegate;
    CSSpeechManager *_speechManager;
    CSPolicy *_voiceTriggerStartPolicy;
    NSObject<OS_dispatch_queue> *_queue;
    CSAsset *_currentAsset;
    NSMutableArray *_keywordAnalyzersNDAPI;
    unsigned long long _bestChannel;
    NSDictionary *_onsetResult;
    unsigned long long _onsetChannel;
    unsigned long long _channelSelectionDelay;
    unsigned long long _delayInSamplesRequiredForChannelSelection;
    NSDictionary *_channelSelectionScores;
    unsigned long long _processingChunkSamples;
    unsigned long long _processingChannelsBitset;
}

@property(nonatomic) unsigned long long processingChannelsBitset; // @synthesize processingChannelsBitset=_processingChannelsBitset;
@property(nonatomic) unsigned long long processingChunkSamples; // @synthesize processingChunkSamples=_processingChunkSamples;
@property(retain, nonatomic) NSDictionary *channelSelectionScores; // @synthesize channelSelectionScores=_channelSelectionScores;
@property(nonatomic) float masterChannelScoreBoost; // @synthesize masterChannelScoreBoost=_masterChannelScoreBoost;
@property(nonatomic) unsigned long long delayInSamplesRequiredForChannelSelection; // @synthesize delayInSamplesRequiredForChannelSelection=_delayInSamplesRequiredForChannelSelection;
@property(nonatomic) unsigned long long channelSelectionDelay; // @synthesize channelSelectionDelay=_channelSelectionDelay;
@property(nonatomic) unsigned long long onsetChannel; // @synthesize onsetChannel=_onsetChannel;
@property(retain, nonatomic) NSDictionary *onsetResult; // @synthesize onsetResult=_onsetResult;
@property(nonatomic) unsigned long long bestChannel; // @synthesize bestChannel=_bestChannel;
@property(nonatomic) float bestScore; // @synthesize bestScore=_bestScore;
@property(nonatomic) float firstPassThreshold; // @synthesize firstPassThreshold=_firstPassThreshold;
@property(nonatomic) BOOL hasTriggerPending; // @synthesize hasTriggerPending=_hasTriggerPending;
@property(retain, nonatomic) NSMutableArray *keywordAnalyzersNDAPI; // @synthesize keywordAnalyzersNDAPI=_keywordAnalyzersNDAPI;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL voiceTriggerEnabled; // @synthesize voiceTriggerEnabled=_voiceTriggerEnabled;
@property(retain, nonatomic) CSPolicy *voiceTriggerStartPolicy; // @synthesize voiceTriggerStartPolicy=_voiceTriggerStartPolicy;
@property(nonatomic) __weak CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(nonatomic) __weak id <CSVoiceTriggerFirstPassDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reportVoiceTriggerFirstPassFire;
- (void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)_stopAOPVoiceTrigger;
- (void)_stopAPVoiceTrigger;
- (void)_stopVoiceTrigger;
- (void)_startAOPVoiceTrigger;
- (void)_startAPVoiceTriggerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startVoiceTriggerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_transitVoiceTriggerStatus:(BOOL)arg1;
- (void)_setAsset:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)_reset;
- (void)reset;
- (void)start;
- (id)initWithManager:(id)arg1 asset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
