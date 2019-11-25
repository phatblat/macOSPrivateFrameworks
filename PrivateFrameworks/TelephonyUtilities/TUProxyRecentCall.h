//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TUSearchResult.h"

@class CHRecentCall, CNContact, NSArray, NSString, TUSearchController;

@interface TUProxyRecentCall : NSObject <TUSearchResult>
{
    CHRecentCall *_recentCall;
    TUSearchController *_searchController;
}

@property __weak TUSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) CHRecentCall *recentCall; // @synthesize recentCall=_recentCall;
- (void).cxx_destruct;
@property(readonly) NSArray *idsCanonicalDestinations;
@property(readonly) BOOL mostRecentCallWasMissed;
@property(readonly) long long mostRecentCallType;
@property(readonly) NSArray *handles;
@property(readonly) NSString *destinationId;
@property(readonly) NSString *backingContactIdentifier;
@property(readonly) NSString *backingContactId;
@property(readonly) CNContact *backingContact;
@property(readonly) NSString *displayName;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly) NSString *mostRecentCallInfo;
- (id)init;
- (id)initWithRecentCall:(id)arg1;

// Remaining properties
@property(readonly) NSString *callerId; // @dynamic callerId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *isoCountryCode; // @dynamic isoCountryCode;
@property(readonly) Class superclass;

@end

