//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CALAbstractView.h>

@class NSMutableArray;

@interface CALMultipleOccurrencesView : CALAbstractView
{
    NSMutableArray *_targetOccIDs;
}

- (void).cxx_destruct;
- (BOOL)updateOccurrenceIDs:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)occurrenceIDs;
- (id)initWithOccurrences:(id)arg1;

@end

