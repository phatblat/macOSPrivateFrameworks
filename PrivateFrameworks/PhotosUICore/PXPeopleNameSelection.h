//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, NSString;

@interface PXPeopleNameSelection : NSObject
{
    unsigned long long _selectionType;
    id <PXPerson> _person;
    CNContact *_contact;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) id <PXPerson> person; // @synthesize person=_person;
@property(readonly, nonatomic) unsigned long long selectionType; // @synthesize selectionType=_selectionType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayName;
- (void)setLinkedPerson:(id)arg1;
- (id)initWithName:(id)arg1 contact:(id)arg2 person:(id)arg3 type:(unsigned long long)arg4;
- (id)initWithSelectedPerson:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithName:(id)arg1;

@end

