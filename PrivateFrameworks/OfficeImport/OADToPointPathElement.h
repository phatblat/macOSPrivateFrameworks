//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADPathElement.h>

@interface OADToPointPathElement : OADPathElement
{
    struct OADAdjustPoint mToPoint;
    BOOL mRelative;
}

- (void)setRelative:(BOOL)arg1;
- (BOOL)relative;
- (struct OADAdjustPoint)toPoint;
- (id)initWithToPoint:(struct OADAdjustPoint)arg1;

@end

