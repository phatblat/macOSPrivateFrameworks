//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/ContinuousReadingListPageItem.h>

@class ReadingListItem;

__attribute__((visibility("hidden")))
@interface ContinuousReadingListPage : ContinuousReadingListPageItem
{
    ReadingListItem *_readingListItem;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(readonly, nonatomic) ReadingListItem *readingListItem; // @synthesize readingListItem=_readingListItem;
- (void).cxx_destruct;
- (BOOL)hasDefaultSiteIcon;
- (id)secondaryIcon;
- (id)icon;
- (id)itemDescription;
- (id)title;
- (id)urlString;
- (id)representedReadingListItem;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReadingListItem:(id)arg1;

@end

