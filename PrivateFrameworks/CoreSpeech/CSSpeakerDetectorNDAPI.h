//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSSpeakerModel;

@interface CSSpeakerDetectorNDAPI : NSObject
{
    float _threshold;
    unsigned long long _maxSpeakerVectorsToPersist;
    CSSpeakerModel *_spkModel;
    id <CSSpeakerDetectorNDAPIDelegate> _delegate;
}

@property(nonatomic) __weak id <CSSpeakerDetectorNDAPIDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)getMaxSpeakerVectorsToPersist;
- (unsigned long long)getSATVectorCount;
- (BOOL)addLastTriggerToProfileWithSuperVector:(id)arg1;
- (BOOL)addLastTriggerToProfile;
- (id)analyzeWavForEnrollment:(id)arg1 numSamples:(unsigned long long)arg2;
- (float)_computeSATScore:(id)arg1;
- (void)processSuperVector:(id)arg1 withResult:(id)arg2;
- (BOOL)_initializeSAT:(id)arg1;
- (BOOL)_initializeNDAPI:(id)arg1 resourcePath:(id)arg2;
- (void)dealloc;
- (void)reset;
- (id)initWithAsset:(id)arg1 speakerModel:(id)arg2;

@end
