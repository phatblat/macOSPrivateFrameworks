//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface CSKeywordAnalyzerQuasar : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_previousUtteranceTokens;
    NSArray *_triggerTokenList;
    BOOL _useKeywordSpotting;
    double _triggerConfidence;
    unsigned long long _activeChannel;
    id <CSKeywordAnalyzerQuasarScoreDelegate> _delegate;
}

@property(nonatomic) __weak id <CSKeywordAnalyzerQuasarScoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(readonly, nonatomic) double triggerConfidence; // @synthesize triggerConfidence=_triggerConfidence;
- (void).cxx_destruct;
- (void)_recognizeWavData:(const short *)arg1 length:(int)arg2;
- (void)processAudioChunk:(id)arg1;
- (void)endAudio;
- (void)runRecognition;
- (void)dealloc;
- (void)reset;
- (id)initWithConfigPath:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(BOOL)arg3;

@end

