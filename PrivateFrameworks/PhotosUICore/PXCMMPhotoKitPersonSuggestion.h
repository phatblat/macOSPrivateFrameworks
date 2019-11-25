//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXCMMPersonSuggestion.h"

@class CNContact, NSString, PHFetchResult, PHPerson, PXRecipientTransport;

@interface PXCMMPhotoKitPersonSuggestion : NSObject <PXCMMPersonSuggestion>
{
    CNContact *_fetchQueue_linkedContact;
    NSString *_localizedName;
    PHPerson *_person;
    PHFetchResult *_keyFaceFetchResult;
    PHFetchResult *_keyAssetFetchResult;
    PXRecipientTransport *_bestTransport;
}

+ (id)personSuggestionWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 keyAssetFetchResult:(id)arg3;
+ (id)personSuggestionWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2;
+ (id)personSuggestionWithPerson:(id)arg1;
+ (id)_contactFetchQueue;
@property(retain, nonatomic) PXRecipientTransport *bestTransport; // @synthesize bestTransport=_bestTransport;
@property(readonly, nonatomic) PHFetchResult *keyAssetFetchResult; // @synthesize keyAssetFetchResult=_keyAssetFetchResult;
@property(readonly, nonatomic) PHFetchResult *keyFaceFetchResult; // @synthesize keyFaceFetchResult=_keyFaceFetchResult;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)_prefetchLinkedContactInBackgroundForPerson:(id)arg1;
- (id)_linkedContactForPerson:(id)arg1;
@property(readonly, nonatomic) CNContact *linkedContact;
- (BOOL)matchesRecipientInRecipients:(id)arg1;
- (id)personSuggestionUpdatedPerson:(id)arg1;
- (id)personSuggestionUpdatedKeyAssetFetchResult:(id)arg1;
- (id)personSuggestionUpdatedKeyFaceFetchResult:(id)arg1;
- (id)initWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 keyAssetFetchResult:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

