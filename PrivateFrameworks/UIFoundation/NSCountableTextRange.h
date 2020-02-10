//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIFoundation/NSTextRange.h>

@class NSCountableTextLocation, NSString;

@interface NSCountableTextRange : NSTextRange
{
    struct _NSRange _range;
}

+ (id)documentRange;
+ (void)setBaseClassTestingMode:(BOOL)arg1;
+ (BOOL)isBaseClassTestingMode;
@property(readonly) struct _NSRange range; // @synthesize range=_range;
- (id)textRangeByFormingUnionWithTextRange:(id)arg1;
- (id)textRangeByIntersectingWithTextRange:(id)arg1;
- (BOOL)intersectsWithTextRange:(id)arg1;
@property(readonly, copy) NSString *type;
- (BOOL)containsLocation:(id)arg1;
- (BOOL)isEqualToTextRange:(id)arg1;
- (BOOL)isEmpty;
- (id)initWithLocation:(id)arg1 terminator:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)description;

// Remaining properties
@property(readonly) NSCountableTextLocation *location; // @dynamic location;
@property(readonly) NSCountableTextLocation *terminator; // @dynamic terminator;

@end
