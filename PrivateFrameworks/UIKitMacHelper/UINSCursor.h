//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCursor.h"

#import "UINSCursor.h"

__attribute__((visibility("hidden")))
@interface UINSCursor : NSCursor <UINSCursor>
{
    long long _type;
}

+ (id)cursorWithType:(long long)arg1;
+ (id)resizeLeftRightCursor;
+ (id)resizeRightCursor;
+ (id)resizeLeftCursor;
+ (id)openHandCursor;
+ (id)closedHandCursor;
+ (id)pointingHandCursor;
+ (id)IBeamCursor;
+ (id)arrowCursor;
@property(nonatomic) long long type; // @synthesize type=_type;

@end
