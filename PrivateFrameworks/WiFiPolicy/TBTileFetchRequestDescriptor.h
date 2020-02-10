//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "TBFetchRequestDescriptor.h"

@class NSPredicate, NSSet, NSString, PBCodable, TBLocalFetchRequestDescriptor;

@interface TBTileFetchRequestDescriptor : NSObject <TBFetchRequestDescriptor, NSCopying>
{
    TBLocalFetchRequestDescriptor *_localFetchDescriptor;
    unsigned long long _type;
    NSSet *_tileItems;
    NSPredicate *_localFetchPredicate;
}

@property(retain, nonatomic) NSPredicate *localFetchPredicate; // @synthesize localFetchPredicate=_localFetchPredicate;
@property(retain, nonatomic) NSSet *tileItems; // @synthesize tileItems=_tileItems;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) TBLocalFetchRequestDescriptor *localFetchDescriptor; // @synthesize localFetchDescriptor=_localFetchDescriptor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) Class remoteRequestClass;
@property(readonly, nonatomic) PBCodable *remoteRequest;
@property(readonly, nonatomic) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor;
- (id)initWithTileItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
