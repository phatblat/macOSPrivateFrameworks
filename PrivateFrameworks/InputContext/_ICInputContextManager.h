//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_ICLexiconManaging.h"
#import "_ICPredictionManaging.h"

@class NSMutableArray, NSString, _ICPredictionManager;

@interface _ICInputContextManager : NSObject <_ICPredictionManaging, _ICLexiconManaging>
{
    id <_ICLexiconSourcing> _lexiconSource;
    NSMutableArray *_allPredictionSources;
    struct _LXLexicon *_durableNamedEntityLexicon;
    struct _LXLexicon *_recentNamedEntityLexicon;
    id <_ICLexiconManaging> _lexiconManager;
    _ICPredictionManager *_predictionManager;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)initForIntegrationTesting;
- (id)initWithPredictionSource:(id)arg1;
- (void)unloadLexicons;
- (id)loadLexicons:(CDUnknownBlockType)arg1;
- (void)removeContactObserver:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)addContactObserver:(CDUnknownBlockType)arg1;
- (id)searchForMeCardEmailAddresses;
- (id)searchForMeCardRegions;
- (void)reset;
- (void)predictedItemSelected:(id)arg1;
- (id)lastCachedResultWithInitialCharacters:(id)arg1;
- (id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id *)arg7;
- (id)getLexiconManager;
- (id)getPredictionManager;
- (void)commonLazyInitialization;
- (void)doInitialization;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

