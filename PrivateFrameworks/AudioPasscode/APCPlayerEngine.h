//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APCPlayerEmbedInfo, AUPasscodeEncoder, AVAudioEngine, AVAudioPCMBuffer, AVAudioPlayerNode, AVAudioSession, AVAudioUnit, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

__attribute__((visibility("hidden")))
@interface APCPlayerEngine : NSObject
{
    AVAudioSession *_session;
    AVAudioEngine *_engine;
    AVAudioUnit *_encoderAUNode;
    AUPasscodeEncoder *_encoderAU;
    AVAudioPlayerNode *_player;
    AVAudioPCMBuffer *_assetBuffer;
    BOOL _isRunning;
    float _prePlayVolume;
    BOOL _requestingStop;
    NSObject<OS_dispatch_source> *_callbackDispatchSrc;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    APCPlayerEmbedInfo *_embeddingInfo;
    CDUnknownBlockType _beginningCallback;
    CDUnknownBlockType _stopEngineCompletion;
}

+ (id)playerWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 error:(id *)arg4;
@property(copy, nonatomic) CDUnknownBlockType stopEngineCompletion; // @synthesize stopEngineCompletion=_stopEngineCompletion;
@property(copy, nonatomic) CDUnknownBlockType beginningCallback; // @synthesize beginningCallback=_beginningCallback;
@property(retain, nonatomic) APCPlayerEmbedInfo *embeddingInfo; // @synthesize embeddingInfo=_embeddingInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)stopEngineAfterMinimumLoops:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)stopEngineWithFadeOut:(float)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopEngine:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)endPasscodeEmbedding;
- (void)_stopAudioEngineAndSession;
- (void)startAPCPlayLoopAtTime:(unsigned long long)arg1;
- (void)startAPCPlayLoop;
- (void)_playbackBufferLoopCompletionHdlr;
- (BOOL)startEngineAtTime:(unsigned long long)arg1 withBeginning:(CDUnknownBlockType)arg2 callbackTime:(unsigned long long)arg3;
- (BOOL)startEngineAtTime:(unsigned long long)arg1 withBeginning:(CDUnknownBlockType)arg2;
- (BOOL)startEngineAtTime:(unsigned long long)arg1;
- (BOOL)startEngine;
- (float)evaluateAsset;
- (void)makeEngineConnections;
- (void)createEngineAndAttachNodes;
- (void)setupAudioSession;
- (id)initWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 error:(id *)arg4;
- (id)createAU:(struct AudioComponentDescription)arg1;

@end

