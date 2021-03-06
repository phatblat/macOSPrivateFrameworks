//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKIdentifiedProviding.h"

@class NSString, SUICKPCardViewControllerProvider;

@interface SUICKPEntryPoint : NSObject <CRKIdentifiedProviding>
{
    SUICKPCardViewControllerProvider *_cardViewControllerProvider;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *providerIdentifier;
- (void)requestIdentifiedCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)presentation:(id)arg1 didApplyCardSectionViewSource:(id)arg2 toCardViewController:(id)arg3;
- (unsigned long long)displayPriorityForCard:(id)arg1;
- (id)cardViewControllerForCard:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

