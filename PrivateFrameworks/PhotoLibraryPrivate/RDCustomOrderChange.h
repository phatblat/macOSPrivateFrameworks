//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDCustomOrderBaseChange.h>

@class NSArray, NSIndexSet;

@interface RDCustomOrderChange : RDCustomOrderBaseChange
{
    int _changeType;
    NSArray *_objectUuids;
    NSArray *_movedObjectUuids;
    NSIndexSet *_movedFromIndexes;
    NSIndexSet *_atIndexes;
}

@property(retain, nonatomic) NSIndexSet *atIndexes; // @synthesize atIndexes=_atIndexes;
@property(retain, nonatomic) NSIndexSet *movedFromIndexes; // @synthesize movedFromIndexes=_movedFromIndexes;
@property(retain, nonatomic) NSArray *movedObjectUuids; // @synthesize movedObjectUuids=_movedObjectUuids;
@property(retain, nonatomic) NSArray *objectUuids; // @synthesize objectUuids=_objectUuids;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
- (void).cxx_destruct;
- (id)description;
- (id)typeDescription;
- (void)redo;
- (void)undo;
- (id)initWithCustomSortOrder:(id)arg1;

@end

