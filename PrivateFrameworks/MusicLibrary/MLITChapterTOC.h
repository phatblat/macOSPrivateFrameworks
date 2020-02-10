//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicLibrary/MLChapterTOC.h>

@interface MLITChapterTOC : MLChapterTOC
{
    unsigned int _totalTimeInMS;
    void *_chapterDataRef;
    unsigned int *_picCookieIndexMap;
    unsigned int *_urlCookieIndexMap;
    unsigned int *_nameCookieIndexMap;
}

+ (void)enumerateChapterTimesInFlattenedChapterData:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (unsigned int **)_chapterDataCookieIndexMapForProperty:(int)arg1 ofChapterTOC:(id)arg2;
- (id)urlPropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)urlTitleTrimmingCharacterSet;
- (id)titlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)totalTimeInMS;
- (unsigned int)groupIndexForChapterIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)countOfGroupsForProperty:(int)arg1;
- (unsigned int *)_cachedCookieIndexMapForProperty:(int)arg1 createIfNecessary:(BOOL)arg2;
- (unsigned int)countOfChapters;
- (void)dealloc;
- (void *)chapterDataRef;
- (id)initWithChapterDataRef:(void *)arg1 totalTimeInMS:(unsigned int)arg2;

@end
