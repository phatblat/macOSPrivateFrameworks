//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFPGraphicsState;

__attribute__((visibility("hidden")))
@interface MFPGraphicsContainer : NSObject
{
    MFPGraphicsState *mParentGraphicsState;
    struct CGAffineTransform mContainerTransform;
}

- (struct CGAffineTransform)containerTransform;
- (id)parentGraphicsState;
- (void)dealloc;
- (id)initWithParentGraphicsState:(id)arg1 containerTransform:(struct CGAffineTransform)arg2;

@end

