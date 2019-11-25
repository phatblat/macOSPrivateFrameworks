//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PGHighlightItemEnrichmentRule.h"

@class NSString, PGManager;

@interface PGYearEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule>
{
    PGManager *_manager;
}

@property(readonly, nonatomic) PGManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (double)promotionScoreForHighlightItemList:(id)arg1;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

