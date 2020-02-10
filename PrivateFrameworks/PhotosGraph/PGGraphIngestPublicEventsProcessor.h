//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PGGraphIngestProcessor.h"

@class NSDictionary, NSString;

@interface PGGraphIngestPublicEventsProcessor : NSObject <PGGraphIngestProcessor>
{
    NSDictionary *_publicEventCriteriaByCategory;
}

@property(readonly, nonatomic) NSDictionary *publicEventCriteriaByCategory; // @synthesize publicEventCriteriaByCategory=_publicEventCriteriaByCategory;
- (void).cxx_destruct;
- (id)publicEventCriteriaByCategoryInGraph:(id)arg1;
- (id)_frequentLocationNodesByMomentIdentifierForMomentNodes:(id)arg1 graph:(id)arg2;
- (void)_collectConsolidatedAddressesForMomentNodes:(id)arg1 inGraph:(id)arg2 consolidatedAddresses:(id *)arg3 consolidatedAddressesByMomentIdentifier:(id *)arg4 momentNodesForConsolidatedAddresses:(id *)arg5;
- (id)disambiguateEvents:(id)arg1 forTimeLocationTuple:(id)arg2 momentNode:(id)arg3 graph:(id)arg4;
- (void)_insertPublicEventsFromMomentNodes:(id)arg1 graphUpdate:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (BOOL)shouldRunWithGraphUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
