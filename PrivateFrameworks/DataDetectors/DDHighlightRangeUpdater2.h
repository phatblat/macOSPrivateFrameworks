//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DDHighlightObject;

__attribute__((visibility("hidden")))
@interface DDHighlightRangeUpdater2 : NSObject
{
    int startOffset;
    int endOffset;
    DDHighlightObject *highlight;
}

- (void).cxx_destruct;
- (void)resetOffsets;
- (id)initWithHighlight:(id)arg1;

@end

