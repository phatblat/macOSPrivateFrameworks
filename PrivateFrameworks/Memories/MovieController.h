//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MovieControllerExportProtocol.h"

@class AVAssetImageGenerator, AVMutableAudioMix, AVMutableComposition, AVMutableVideoComposition, AVPlayerItem, CALayer, Composition, NSString, Project;

__attribute__((visibility("hidden")))
@interface MovieController : NSObject <MovieControllerExportProtocol>
{
    float m_rate;
    BOOL _forExport;
    CALayer *playerLayer;
    Project *project;
    CALayer *compositionLayer;
    CDUnknownBlockType progressUpdateBlock;
    AVAssetImageGenerator *_customImageGen;
    Composition *_composition;
    double _exportAspect;
    CDUnknownBlockType _playerReadyCompletionBlock;
    long long _customImageGenCount;
    struct CGSize _size;
}

+ (id)imageFromProject:(id)arg1 atTime:(int)arg2 withSize:(struct CGSize)arg3;
+ (id)controllerWithProject:(id)arg1 forExport:(BOOL)arg2;
@property long long customImageGenCount; // @synthesize customImageGenCount=_customImageGenCount;
@property(copy) CDUnknownBlockType playerReadyCompletionBlock; // @synthesize playerReadyCompletionBlock=_playerReadyCompletionBlock;
@property double exportAspect; // @synthesize exportAspect=_exportAspect;
@property BOOL forExport; // @synthesize forExport=_forExport;
@property(retain) Composition *composition; // @synthesize composition=_composition;
@property(retain) AVAssetImageGenerator *customImageGen; // @synthesize customImageGen=_customImageGen;
@property(copy, nonatomic) CDUnknownBlockType progressUpdateBlock; // @synthesize progressUpdateBlock;
@property struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) CALayer *compositionLayer; // @synthesize compositionLayer;
@property(retain) Project *project; // @synthesize project;
@property(retain, nonatomic) CALayer *playerLayer; // @synthesize playerLayer;
- (void).cxx_destruct;
- (void)generateOrigUIImagesAsynchronouslyForSize:(struct CGSize)arg1 atTimes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateUIImagesAsynchronouslyForSize:(struct CGSize)arg1 atTimes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelAllUIImageGeneration;
- (id)imageAtTime:(CDStruct_1b6d18a9)arg1 withSize:(struct CGSize)arg2;
@property(readonly, nonatomic) struct CGSize temporarySize;
- (void)renderBothOrientationsOfFirstFrameAtSize:(struct CGSize)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) AVPlayerItem *playerItem;
@property(readonly, nonatomic) AVMutableAudioMix *audioMix;
@property(readonly, nonatomic) AVMutableVideoComposition *videoComposition;
@property(readonly, nonatomic) AVMutableComposition *AVComposition;
- (void)tearDownProjectDisplay;
- (void)clearPlayerItemProperties;
- (void)applyPlayerItemProperties;
- (void)updateComposition;
- (void)setProjectOnComposition;
- (void)updateForProjectTimeInSeconds:(double)arg1 asynchronous:(BOOL)arg2 allowUnloading:(BOOL)arg3;
- (void)dealloc;
- (void)resetSizeToDefault;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
