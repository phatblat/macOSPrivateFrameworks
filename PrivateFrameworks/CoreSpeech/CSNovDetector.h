//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSNovDetector : NSObject
{
    void *_novDetect;
}

- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;
- (id)getAnalyzedResultForPhraseId:(unsigned int)arg1;
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)resetBest;
- (void)reset;
- (void)dealloc;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;

@end

