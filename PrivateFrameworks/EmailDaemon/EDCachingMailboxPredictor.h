//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EDMailboxPredictor.h"

@class NSCache, NSMutableDictionary, NSString;

@interface EDCachingMailboxPredictor : NSObject <EDMailboxPredictor>
{
    id <EDMailboxPredictor> _predictor;
    NSCache *_cache;
    NSMutableDictionary *_cacheKeysByProperty;
}

@property(retain, nonatomic) NSMutableDictionary *cacheKeysByProperty; // @synthesize cacheKeysByProperty=_cacheKeysByProperty;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id <EDMailboxPredictor> predictor; // @synthesize predictor=_predictor;
- (void).cxx_destruct;
- (id)_propertyKeysForMessage:(id)arg1;
- (void)_trackCacheKey:(id)arg1 forPropertyKey:(id)arg2;
- (id)_cacheKeyForMessages:(id)arg1;
- (void)removeAllPredictions;
- (void)invalidatePredictionsAffectedByMessage:(id)arg1;
- (id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2 diagnostics:(id *)arg3;
- (id)initWithPredictor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
