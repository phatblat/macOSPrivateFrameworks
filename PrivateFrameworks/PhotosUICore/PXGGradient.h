//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSColor;

@interface PXGGradient : NSObject <NSCopying>
{
    struct NSColor *_startingColor;
    struct NSColor *_endingColor;
    long long _direction;
}

@property(readonly, nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, copy, nonatomic) NSColor *endingColor; // @synthesize endingColor=_endingColor;
@property(readonly, copy, nonatomic) NSColor *startingColor; // @synthesize startingColor=_startingColor;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartingColor:(struct NSColor *)arg1 endingColor:(struct NSColor *)arg2 direction:(long long)arg3;
- (id)init;

@end

