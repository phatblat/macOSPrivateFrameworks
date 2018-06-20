//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABPerson, IMPerson, NSString;

@interface SOBlockListItem : NSObject
{
    NSString *_address;
    void *_cmfItem;
    IMPerson *_person;
    NSString *_cachedFormattedHandle;
    NSString *_cachedFormattedPersonName;
}

@property(retain, nonatomic) NSString *cachedFormattedPersonName; // @synthesize cachedFormattedPersonName=_cachedFormattedPersonName;
@property(retain, nonatomic) NSString *cachedFormattedHandle; // @synthesize cachedFormattedHandle=_cachedFormattedHandle;
@property(retain, nonatomic) IMPerson *person; // @synthesize person=_person;
@property(nonatomic) void *cmfItem; // @synthesize cmfItem=_cmfItem;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToBlockListItem:(id)arg1;
- (id)formattedPersonNameWithAddress:(BOOL)arg1;
- (id)formattedPersonNameWithAddress;
- (id)formattedPersonName;
- (id)formattedAddress;
- (id)formattedHandle;
- (id)fullName;
- (void)lookupPerson;
- (void)dealloc;
@property(readonly, nonatomic) ABPerson *abPerson;
- (id)initWithABPerson:(id)arg1 address:(id)arg2 cmfItemRef:(void *)arg3;
- (id)initWithPerson:(id)arg1 address:(id)arg2 cmfItemRef:(void *)arg3;

@end

